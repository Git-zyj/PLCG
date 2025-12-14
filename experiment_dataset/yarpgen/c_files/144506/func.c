/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144506
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) ((((/* implicit */int) (signed char)18)) > (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */int) min((var_6), ((signed char)20))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (-288230376151711744LL)));
        }
        var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (4190097418U)));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57265)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50434))) : (-288230376151711744LL)));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            arr_16 [i_2] [(signed char)4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_3]))) == (8ULL));
            arr_17 [(unsigned short)1] = ((/* implicit */signed char) arr_13 [i_2] [(unsigned char)9]);
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_25 [i_2] [i_5] [(signed char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4 - 1] [i_4 + 1] [i_4] [i_4]))) + (7374772836687687331LL)))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (arr_14 [(unsigned char)1] [10ULL]) : (((/* implicit */long long int) var_3))))))) : (((((/* implicit */unsigned long long int) 2791295754526253949LL)) * (arr_15 [(unsigned short)5] [i_4 - 2])))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [(signed char)6] [(signed char)6] [i_4 - 2] [(signed char)0]) - (arr_20 [i_2] [i_2] [i_4 - 1] [(unsigned short)11])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) -288230376151711759LL))), (((unsigned short) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4190097442U)) ? (25U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (min((-1698695995), (((/* implicit */int) (signed char)-57)))) : (((/* implicit */int) (signed char)77))))));
                        arr_26 [i_2] [i_3] [i_4] [(signed char)3] = ((/* implicit */unsigned char) arr_20 [i_5] [i_3] [i_4] [i_5]);
                        arr_27 [i_5] [i_4] [i_2] [12LL] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (+(104869893U)))) ? ((~(((/* implicit */int) (signed char)18)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-30)), ((unsigned char)9)))))));
                    }
                } 
            } 
            arr_28 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (((+(-2791295754526253950LL))) > (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (4190097410U))))))) : (((/* implicit */int) ((arr_22 [i_2] [i_2] [i_2] [12LL]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_32 [i_6] [(unsigned short)3] = max((((-5149094851313852139LL) + (arr_20 [0ULL] [0ULL] [i_6] [i_6]))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-78))))));
            /* LoopSeq 2 */
            for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)18))));
                arr_37 [(signed char)13] [i_6] = ((/* implicit */_Bool) arr_35 [i_2] [i_6] [i_7] [8]);
                arr_38 [11U] [(_Bool)1] [i_7] [i_7] = ((/* implicit */_Bool) arr_33 [i_7 + 1] [i_7] [i_7]);
                arr_39 [i_2] [(unsigned short)5] [i_7] = ((/* implicit */unsigned char) -1796524860425568755LL);
            }
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [1LL])) && (((/* implicit */_Bool) (signed char)-55))))) : ((+(((((/* implicit */_Bool) arr_36 [12ULL] [12ULL])) ? (var_3) : (((/* implicit */int) (signed char)0))))))));
                    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_35 [i_2] [i_6] [i_8] [i_2])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6] [i_8] [i_8]))))), (((/* implicit */unsigned long long int) (unsigned char)85))));
                    arr_44 [i_2] [i_2] [i_8] [i_9] = ((/* implicit */signed char) ((unsigned char) (+(7262397093545462425LL))));
                    arr_45 [i_9] [i_8] = ((/* implicit */unsigned long long int) min((max((var_9), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((signed char) arr_33 [i_2] [i_2] [i_2])))));
                }
                arr_46 [i_2] [i_6] [i_6] [(_Bool)1] = max((((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) : (arr_20 [i_8] [i_8] [i_6] [i_2]))), ((-(arr_20 [i_2] [i_2] [i_6] [i_8]))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                arr_51 [i_10] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) ((long long int) (unsigned short)19698));
                arr_52 [i_10] [i_10] [i_10] [i_2] = ((/* implicit */_Bool) arr_30 [7LL] [i_6] [i_10]);
            }
            for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_55 [(unsigned short)13] = ((/* implicit */unsigned int) (_Bool)0);
                var_17 = arr_34 [i_2] [i_2] [9];
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    arr_58 [i_2] [i_2] [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((long long int) ((signed char) (unsigned char)184))) : (((/* implicit */long long int) ((/* implicit */int) max((max(((unsigned char)70), (((/* implicit */unsigned char) var_0)))), ((unsigned char)193)))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)144)), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_12] [13] [i_6] [i_2])) ? (((/* implicit */int) arr_19 [i_2])) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)86)) & (((/* implicit */int) var_9))))) : (3547206000U)))) : (max(((((_Bool)0) ? (var_10) : (var_7))), (((/* implicit */unsigned long long int) var_6))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_61 [12ULL] [i_6] [(unsigned char)3] [i_12] [i_13] = ((/* implicit */unsigned short) 9223372036854775807LL);
                        arr_62 [i_12] [i_13] [(_Bool)1] [9LL] [i_12] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */long long int) arr_6 [i_2])) : (-9223372036854775807LL))));
                        arr_63 [i_12] [(unsigned short)3] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_2] [i_6] [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) >= (max((-1522363978810237085LL), (((/* implicit */long long int) (signed char)49))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 3; i_14 < 11; i_14 += 1) 
                    {
                        arr_66 [(signed char)13] [i_12] [i_11] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(482500456U)))) && (((/* implicit */_Bool) arr_6 [i_2]))));
                        arr_67 [i_12] [i_6] [i_11] [(unsigned short)5] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_14 - 2] [i_14 + 1] [i_14])) ? (arr_14 [i_14 + 1] [i_14 + 4]) : (arr_34 [(signed char)13] [(signed char)13] [i_11])));
                        arr_68 [i_2] [i_6] [i_12] [(signed char)9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)81))));
                        var_19 = ((/* implicit */signed char) ((_Bool) (signed char)81));
                        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                    }
                }
                for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    arr_71 [i_15] [i_15] [i_15] [i_11] [i_15] [(signed char)5] = ((/* implicit */unsigned char) 33521664U);
                    var_21 = ((signed char) max((arr_56 [10] [i_6]), (((/* implicit */unsigned short) arr_1 [i_2]))));
                    var_22 = arr_29 [i_6] [i_11] [i_6];
                }
                for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    arr_74 [(unsigned char)11] [i_6] [(unsigned char)11] [i_16] [i_11] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((+(var_7))), (((/* implicit */unsigned long long int) ((signed char) -9223372036854775807LL))))))));
                    arr_75 [(unsigned char)7] [i_6] [(unsigned char)7] [i_6] = ((/* implicit */unsigned char) (-(arr_5 [i_6])));
                    arr_76 [(unsigned char)14] [11ULL] [(unsigned char)14] [(unsigned char)14] [(unsigned char)7] = ((/* implicit */unsigned char) 4151340221U);
                    arr_77 [13LL] [(signed char)0] [(unsigned short)0] [(_Bool)1] [(signed char)0] = min((-5LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_21 [(_Bool)1] [(signed char)5] [(signed char)5] [i_16]), (((/* implicit */signed char) arr_47 [i_2] [i_11] [(_Bool)1])))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) 2147483628)) ? (-2791295754526253936LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            }
        }
        arr_78 [i_2] [i_2] = ((/* implicit */unsigned char) ((609280580) + ((-(-536870912)))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned int) (unsigned short)43338)) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) || (((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_9))))));
}
