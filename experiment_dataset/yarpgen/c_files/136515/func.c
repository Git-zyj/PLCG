/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136515
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
    var_18 = var_13;
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) : ((+(var_13)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [6LL]))))) <= (var_6)));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) (+(((unsigned int) arr_9 [i_0] [i_0] [i_1 - 1]))));
                    var_21 += ((/* implicit */long long int) arr_8 [i_1 - 1] [0LL] [i_2] [i_2]);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-32762))));
        var_22 = ((/* implicit */_Bool) (~((~(arr_4 [i_0])))));
    }
    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        arr_15 [i_3] [i_3] = var_2;
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_17))));
    }
    /* LoopSeq 3 */
    for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 2; i_5 < 24; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_20 [i_4 + 3] [13U] [i_6]))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_11))));
                            var_26 ^= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]))))) ^ (((long long int) var_6))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 24; i_9 += 2) 
            {
                var_27 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) var_11))));
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_33 [17LL] [i_5 - 2] = ((/* implicit */short) arr_27 [i_4] [i_5] [16LL] [i_10]);
                    arr_34 [14LL] = ((/* implicit */long long int) (!(var_11)));
                    arr_35 [i_9] [i_9] [i_5] [i_4] = ((/* implicit */long long int) var_3);
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 24; i_11 += 3) 
                    {
                        arr_38 [i_11] [i_5] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) var_0);
                        arr_39 [i_11] [i_5] [(short)0] [i_5] [i_5] = ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_13))), (((/* implicit */long long int) (+(arr_31 [i_4 + 1] [i_4] [i_4]))))))) ? ((((+(arr_21 [i_4] [i_5 - 2] [i_4]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 805306368U)))))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (arr_23 [i_9 + 1] [i_5] [i_9] [i_5] [i_9])));
                    }
                }
                for (unsigned int i_12 = 3; i_12 < 22; i_12 += 4) 
                {
                    arr_43 [i_12] [i_9] [4U] [i_5] [i_4] [i_12] = ((/* implicit */long long int) (+(arr_21 [i_12] [i_9] [i_5])));
                    arr_44 [i_9] [i_12] [i_9] = ((/* implicit */unsigned int) arr_19 [0] [i_5] [i_4]);
                }
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_6))));
                        var_30 &= (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_4] [1U] [11] [i_13] [i_14]))))))));
                        arr_52 [i_13] [i_5] [i_5] [i_4] = ((/* implicit */long long int) var_2);
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_57 [(_Bool)1] [14] [i_15] [i_13] [i_15] = ((/* implicit */_Bool) ((short) arr_41 [i_4] [(_Bool)1] [i_15] [i_13]));
                        arr_58 [i_4] [i_4] [i_4] [i_15] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_54 [i_4 + 2] [i_9 - 1] [i_9 + 1])) ^ (((/* implicit */int) arr_54 [i_4 - 1] [i_9 + 1] [i_13])))), (((/* implicit */int) min((arr_54 [i_4 - 1] [i_9 - 1] [i_15 - 1]), (arr_54 [i_4 + 2] [i_9 + 1] [i_9]))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        var_31 ^= var_4;
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */int) arr_17 [i_13]))))) ? (((arr_27 [i_4 + 3] [i_5] [i_4] [i_5]) / (arr_36 [i_4] [i_5 - 1] [i_13] [i_16]))) : (((/* implicit */int) min((var_15), (((/* implicit */signed char) var_12)))))))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_16] [i_13] [i_13] [i_5] [i_4]))))), (max((((/* implicit */long long int) arr_17 [i_13])), (var_16))))) : (((long long int) arr_41 [i_4] [i_5 - 1] [i_13] [0U])));
                        var_33 = var_14;
                        arr_61 [i_16] [i_4] [i_9] [i_13] [i_16] = ((((int) max((((/* implicit */int) arr_24 [i_16 + 1] [i_13] [i_16] [i_4] [i_4])), (arr_18 [i_4 + 2] [i_13])))) >> (((/* implicit */int) var_11)));
                        arr_62 [i_4] [i_13] [6LL] [i_13] [i_5] [(unsigned short)18] [6LL] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_16] [i_16 + 1] [i_9 - 1] [i_5 + 1] [i_4 + 1]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        var_34 *= ((/* implicit */unsigned int) var_3);
                        var_35 = ((/* implicit */long long int) ((((((long long int) arr_27 [i_13] [i_13] [i_13] [i_4])) <= (((arr_63 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4]) - (var_14))))) || (((_Bool) arr_64 [i_5 + 1] [i_5] [i_5] [2U] [i_5 - 2] [i_5]))));
                    }
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        var_36 = arr_59 [i_18] [i_13] [i_13] [i_9] [i_5] [i_5] [i_18];
                        arr_71 [i_4] [i_4] [i_9] [i_13] [i_13] [i_18] [i_18] = ((/* implicit */int) min((min((min((((/* implicit */long long int) arr_54 [i_9] [i_13] [(short)4])), (var_10))), (((/* implicit */long long int) var_7)))), (((arr_68 [i_4] [i_4] [i_4]) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_65 [i_4] [i_4] [14LL] [(_Bool)1])), (arr_19 [24] [i_9] [i_5])))))))));
                        var_37 ^= ((unsigned short) arr_42 [i_5] [i_13] [i_5] [i_5] [i_4]);
                    }
                }
            }
            arr_72 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_18 [i_5] [i_4 - 1])) > (((((arr_42 [23LL] [i_5] [i_5] [i_5 - 2] [22LL]) + (9223372036854775807LL))) >> (((arr_42 [i_4 + 2] [i_4 + 2] [22LL] [(_Bool)1] [i_4]) + (545124539696516268LL)))))));
            var_38 += ((/* implicit */_Bool) max((arr_25 [i_4] [i_5] [i_4 - 1] [i_5 - 2] [i_5] [i_5]), (arr_49 [i_4] [i_4] [22LL] [i_4] [i_4])));
        }
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-4997558544889950791LL)))) ? (arr_25 [i_4 + 2] [2] [i_4] [8U] [i_4 - 1] [i_4]) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_50 [i_4] [i_4] [i_4] [(_Bool)0] [i_4])), (var_1)))) ? (((/* implicit */int) var_15)) : (min((((/* implicit */int) var_12)), (arr_70 [i_4] [i_4 + 3] [i_4] [i_4]))))))))));
        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)32537)), (16777215U))) <= (((/* implicit */unsigned int) var_5)))))));
    }
    for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        var_41 = ((/* implicit */unsigned int) (~(975059260)));
        arr_75 [i_19] [i_19] = min((max((arr_68 [i_19] [i_19] [i_19]), (arr_26 [i_19] [i_19] [i_19]))), ((((_Bool)1) ? (arr_26 [i_19] [i_19] [i_19]) : (((/* implicit */long long int) 4106629889U)))));
    }
    for (long long int i_20 = 2; i_20 < 15; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_21 = 2; i_21 < 15; i_21 += 2) 
        {
            for (long long int i_22 = 0; i_22 < 17; i_22 += 4) 
            {
                {
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((int) arr_65 [i_20] [i_20] [i_21] [(_Bool)1])), (((/* implicit */int) var_12))))))))));
                    var_43 *= ((/* implicit */_Bool) arr_29 [i_21 + 2] [i_20 - 1] [i_22]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 17; i_23 += 4) 
        {
            for (long long int i_24 = 0; i_24 < 17; i_24 += 3) 
            {
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_80 [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (arr_51 [i_20] [i_20] [i_20] [i_20 - 2]))))) : (((((/* implicit */_Bool) arr_59 [i_20] [i_20] [i_20] [i_20 + 2] [i_20] [i_24] [i_23])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_86 [i_24] [i_20 + 2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_69 [i_24] [(signed char)8] [i_23] [i_23] [i_20]))))) == (arr_78 [i_24] [i_24]))))) : (((((/* implicit */_Bool) arr_55 [i_23] [(_Bool)1] [i_20 - 1] [(_Bool)1])) ? (max((((/* implicit */long long int) var_9)), (arr_30 [i_24] [i_24] [20U]))) : (((/* implicit */long long int) min((var_5), (var_0))))))));
                }
            } 
        } 
    }
}
