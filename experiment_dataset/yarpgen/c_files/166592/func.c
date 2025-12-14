/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166592
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
    var_11 = ((/* implicit */_Bool) 9223372036854775793LL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((9223372036854775793LL) % (((/* implicit */long long int) 7864320))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3] [i_3 - 2] [i_3 - 4] [i_3] [i_3] [i_3 - 3])))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_3 - 3] [i_1 - 1])) ? (arr_8 [i_4 + 2] [i_3 - 3] [i_1 - 1]) : (((/* implicit */unsigned int) var_3))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_5))));
                            arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_3 - 3] [i_3 + 1] [i_3 + 1])));
                        }
                        var_16 = ((/* implicit */unsigned int) var_8);
                        var_17 = ((/* implicit */short) (+(((unsigned int) var_6))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) arr_12 [i_0] [i_0] [i_2])))));
                    }
                    for (short i_6 = 4; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6 - 4] [i_2] [i_1 + 1] [i_0])) ? ((~(((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_6] [i_6 - 1])))) : (((/* implicit */int) max(((signed char)-95), ((signed char)19)))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_6 - 3] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 265245651U)) : (var_9))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) 265245633U))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 15ULL))) ? (arr_15 [i_2] [i_1 - 1] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1324513062399129843LL)) ? (((((/* implicit */_Bool) (unsigned short)27442)) ? (((/* implicit */int) (unsigned short)27457)) : (((/* implicit */int) (signed char)118)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6005)))))))))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 4; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_4))));
                        arr_22 [(short)22] [i_1 + 1] [i_2] [i_7] = ((/* implicit */unsigned long long int) (-(1790513250832338869LL)));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)127))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_15 [i_0] [i_1 - 1] [i_2] [i_8]);
                            var_25 = ((/* implicit */int) 0ULL);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) ((unsigned short) ((var_9) == (var_9))));
                            arr_34 [i_10] [i_8] [i_2] [6] [i_0] = ((/* implicit */int) var_6);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_1] [i_8] [i_0] [i_2] [i_11] = ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)94))))) > (min((((/* implicit */unsigned long long int) var_8)), (14921420312748718428ULL)))));
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || ((_Bool)1)))), (123308375692723033ULL)))) ? (((/* implicit */unsigned long long int) var_3)) : (((arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) / (((/* implicit */unsigned long long int) var_3))))));
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((arr_33 [i_1 + 1] [i_1] [i_1] [11U] [i_1 + 1] [i_1] [i_1 + 1]) - (((/* implicit */unsigned int) 3)))))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_29 [i_0] [i_1] [i_2] [i_0] [i_12] [i_0] [i_12])))) : (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38065))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (-469537996))))));
                        }
                    }
                    arr_42 [i_0] [(unsigned char)19] [i_0] [(unsigned char)19] = ((/* implicit */signed char) ((unsigned int) (-(arr_31 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                    arr_43 [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [(short)21] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])), (arr_31 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1] [i_0])))));
                    arr_44 [21] [21] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)94)) ? (((((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0] [i_0])) - ((-(((/* implicit */int) var_0)))))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_0]))))));
                }
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        var_31 = arr_18 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13];
        var_32 = ((/* implicit */unsigned long long int) (signed char)112);
    }
}
