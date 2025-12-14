/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188480
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [4ULL])) ? (max((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_1 [(unsigned char)0] [i_0 + 1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)16]))))))) : (((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                arr_8 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) max((((unsigned long long int) (unsigned char)217)), (((/* implicit */unsigned long long int) (((-(4294967291U))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0]))) - (8050LL))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) max(((+((-(arr_7 [i_0] [i_1] [i_3] [i_1]))))), (((/* implicit */int) arr_10 [i_0]))));
                        var_18 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)250))))), ((+(var_14))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)217)) <= (((/* implicit */int) (unsigned char)12))))))));
                        var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)))) ? (((/* implicit */int) max((arr_0 [i_1]), (var_1)))) : (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_1])))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-((-(max((((/* implicit */unsigned int) (unsigned char)83)), (4294967281U))))))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (unsigned char)20);
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) ((var_14) >> (((4294967286U) - (4294967242U)))));
                    var_23 = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(arr_13 [i_1 + 2] [i_1 - 2] [i_1 + 3] [i_1]))))));
                    var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)48124))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_1] [i_6]))) / ((~(((/* implicit */int) var_10))))));
                        var_27 *= (~((+(14U))));
                    }
                    for (unsigned int i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */int) (+(3484682699U)));
                        var_29 = ((((/* implicit */_Bool) arr_5 [i_0] [i_5 + 1])) ? (arr_5 [i_0] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))));
                    }
                }
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) (+((~(4U)))));
                        var_31 = ((/* implicit */unsigned char) arr_22 [4] [i_1] [i_1] [i_1] [i_0]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_18 [i_0 + 1] [i_0 + 1]), (arr_18 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)243))))) : (min((((/* implicit */unsigned int) arr_18 [i_0 + 1] [i_0 + 1])), (var_3)))));
                        arr_31 [i_0] [i_1] [i_1] [i_8] [i_10] = ((/* implicit */short) min((max((arr_15 [i_0 + 1] [i_0 + 1] [i_8 - 1] [i_10] [i_10]), (((/* implicit */long long int) (+(var_12)))))), (((/* implicit */long long int) ((unsigned int) 4U)))));
                    }
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        arr_36 [i_0] [i_0] [i_2] [i_0] [i_11] = ((/* implicit */unsigned char) (((~(var_14))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [19U] [i_8 + 2] [i_11] [i_11])) ? (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_8 - 1] [(unsigned short)1] [i_11])) : (arr_15 [i_2] [i_2] [i_8 - 1] [i_8] [i_11]))))));
                        var_33 = ((/* implicit */long long int) ((unsigned char) var_7));
                    }
                    var_34 = ((/* implicit */_Bool) (-(4294967284U)));
                }
            }
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)13))))) == ((+(var_5))))))));
        }
        /* vectorizable */
        for (long long int i_12 = 2; i_12 < 19; i_12 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) ((8U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))))))));
            var_37 = (!(((/* implicit */_Bool) arr_24 [i_0] [i_12 - 2] [i_12])));
        }
        for (unsigned short i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            arr_42 [i_0] = ((/* implicit */unsigned int) var_6);
            var_38 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (max((arr_13 [i_0] [i_0] [i_13] [i_0]), (((/* implicit */int) arr_4 [i_0] [i_0]))))))), (((((/* implicit */_Bool) max((3367135242U), (((/* implicit */unsigned int) (unsigned char)217))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_28 [i_0] [i_0] [13U] [i_13 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (min((((/* implicit */unsigned long long int) var_7)), (var_14)))))));
            var_39 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)64054)) << (((/* implicit */int) (unsigned char)7)))));
        }
        var_40 ^= ((unsigned long long int) arr_1 [(unsigned char)12] [(unsigned char)12]);
    }
    var_41 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) (unsigned char)8))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)15)), (2U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15U))))) : (((/* implicit */int) var_9))))));
    var_42 = min((max((((/* implicit */unsigned int) (unsigned char)217)), (36U))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (1822065118) : (((/* implicit */int) var_9))))) | (var_0))));
}
