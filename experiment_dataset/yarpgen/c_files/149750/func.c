/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149750
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(var_0))) << (((((/* implicit */int) var_11)) - (162)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1283983018), (((/* implicit */int) (unsigned char)159))))) ? (max((((/* implicit */unsigned int) var_11)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_15 += ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_13);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7871439818225564737LL)) ? (((((/* implicit */_Bool) 17411081115898480437ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7871439818225564737LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_4 [i_0])))))));
            var_18 = ((/* implicit */unsigned int) ((arr_0 [i_0]) | (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_8 [i_0] [i_2] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 3653533378U)) : (arr_2 [i_0] [i_0]))) * (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (var_12)))));
            var_19 += ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) + (var_4)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 - 1] [i_4])) ? (arr_6 [i_0] [i_4 + 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned char)255))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_16 [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (-7871439818225564757LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 6; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_3] [i_5] = ((/* implicit */_Bool) 801105990145884023ULL);
                            var_22 = ((((/* implicit */_Bool) 932493056U)) ? (((/* implicit */int) arr_13 [i_6 - 3] [i_3] [i_5] [i_6 - 2])) : (((/* implicit */int) arr_13 [i_6 + 1] [i_3] [i_5] [i_6 - 2])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((3119836628U) < (((arr_20 [i_0] [i_3] [i_5] [i_5] [i_3] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7871439818225564768LL)) ? (var_12) : (7871439818225564741LL)))) % (arr_0 [i_0]))))));
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) > (((unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5])));
            }
            for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                arr_27 [i_0] [i_3] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_8 - 1] [i_8] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_3] [i_3] [i_8 - 1] [i_3] [i_0] [i_0])));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((int) ((2925009439815675614LL) >> (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_3] [i_8] [i_8 + 1]))))))));
                var_26 = ((((/* implicit */_Bool) ((int) var_0))) && (((/* implicit */_Bool) (-(arr_19 [i_0] [i_3] [i_3] [i_3] [i_3] [i_8])))));
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (-(7871439818225564734LL))))));
            }
            /* LoopSeq 3 */
            for (int i_9 = 2; i_9 < 8; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_28 += ((/* implicit */long long int) ((_Bool) ((unsigned char) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_9] [i_9] [i_9 + 1] [i_10] [i_11])))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                var_31 |= ((((/* implicit */_Bool) arr_15 [i_9 + 1] [i_9 + 1])) ? (var_3) : (((/* implicit */int) (signed char)80)));
            }
            for (long long int i_12 = 3; i_12 < 6; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_14]));
                            var_33 = ((/* implicit */unsigned int) arr_29 [i_0] [i_3] [i_12 - 3]);
                            arr_46 [i_0] [i_3] [i_13] [i_13] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11406247147213147918ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (306570983U)));
                            var_34 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)30)) : (743088111)))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_13 [i_0] [i_3] [i_3] [i_12]))));
                var_36 *= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_3] [i_0] [i_3] [i_0] [i_3]);
                /* LoopSeq 2 */
                for (signed char i_15 = 1; i_15 < 9; i_15 += 4) /* same iter space */
                {
                    var_37 += ((-7871439818225564757LL) > (arr_15 [i_15 + 1] [i_15 + 1]));
                    arr_49 [i_0] [i_3] [i_12] [i_15] = ((((/* implicit */_Bool) (unsigned short)7580)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [0LL] [i_3] [i_12 - 2] [i_15]))) : (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_20 [i_0] [i_3] [i_3] [i_3] [i_12 + 2] [i_12] [i_15 - 1]))));
                }
                for (signed char i_16 = 1; i_16 < 9; i_16 += 4) /* same iter space */
                {
                    var_38 |= ((/* implicit */long long int) var_10);
                    var_39 |= ((/* implicit */_Bool) ((unsigned int) arr_38 [i_0] [i_3] [i_12] [i_16 + 1]));
                }
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_3] [i_3] [i_12])) ? (-7871439818225564749LL) : (((/* implicit */long long int) 131040))))) ? ((+(arr_11 [i_0]))) : (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) var_0))))))))));
            }
            for (unsigned char i_17 = 3; i_17 < 7; i_17 += 4) 
            {
                arr_56 [i_17 + 2] [i_17] [i_0] = ((/* implicit */_Bool) ((-2925009439815675623LL) / (((/* implicit */long long int) arr_21 [i_17] [i_17 - 3] [i_17] [i_17] [i_17] [i_17 + 1]))));
                var_41 += ((/* implicit */int) (~(((long long int) arr_25 [4U] [i_3] [i_3]))));
                arr_57 [i_0] [i_3] [i_17] [i_0] = ((/* implicit */unsigned char) ((3137889933705988463ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_3] [i_17 - 2] [i_0])))));
            }
            var_42 += ((/* implicit */unsigned long long int) arr_15 [i_0] [i_3]);
            var_43 |= ((/* implicit */long long int) (((((~(var_3))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned long long int) var_0)) : (4702129752881070779ULL))) - (18446744071803478270ULL)))));
        }
        arr_58 [i_0] = 306570983U;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 10; i_18 += 4) 
    {
        arr_61 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_18] [i_18] [i_18])) | (2147483647)));
        arr_62 [i_18] = (+(var_1));
        arr_63 [i_18] = arr_45 [i_18] [i_18] [i_18] [i_18] [i_18];
    }
    var_44 = var_2;
}
