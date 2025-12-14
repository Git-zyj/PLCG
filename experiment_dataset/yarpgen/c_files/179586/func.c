/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179586
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (max((max((((/* implicit */int) arr_2 [i_0] [i_0])), (0))), (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [(short)2] [i_0]))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)126))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_3]))))))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 4) /* same iter space */
                    {
                        var_16 *= ((/* implicit */signed char) (+((~(arr_12 [i_0])))));
                        arr_16 [i_1] [i_1] [i_2] [i_4 - 3] = ((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) arr_0 [i_4])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            arr_20 [i_5] [i_5] [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            var_17 = ((/* implicit */signed char) var_8);
                        }
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_7 [i_0] [i_1] [i_2] [i_6])));
                        var_19 = (~(((/* implicit */int) min((arr_17 [i_1 - 3] [i_6 + 2]), (arr_17 [i_1 - 3] [i_6 + 2])))));
                        var_20 = (((!(((/* implicit */_Bool) max(((unsigned char)141), ((unsigned char)161)))))) ? ((((!(((/* implicit */_Bool) (unsigned char)161)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_4 [i_0] [i_0]))))) : ((+(((arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 4) /* same iter space */
                    {
                        var_21 = (!(((/* implicit */_Bool) var_10)));
                        /* LoopSeq 4 */
                        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) var_10);
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            arr_32 [i_9] [i_7] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                            arr_33 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (signed char)100);
                        }
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) arr_8 [i_0]);
                            arr_36 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (unsigned char)0)))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-9223372036854775807LL - 1LL)))));
                        }
                        for (long long int i_11 = 3; i_11 < 11; i_11 += 3) 
                        {
                            arr_39 [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            var_26 = arr_0 [i_0];
                            var_27 = ((/* implicit */unsigned char) min((var_27), ((unsigned char)94)));
                        }
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)150)))) & (((/* implicit */int) arr_15 [i_7 - 2] [i_1 + 1] [i_1] [i_1] [i_1])))))));
                        var_29 |= ((/* implicit */unsigned long long int) arr_28 [i_1 - 3] [i_1 - 3] [i_7 - 2]);
                    }
                }
            } 
        } 
        arr_40 [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) arr_8 [i_0]))) + (2147483647))) << ((((((-(((/* implicit */int) (unsigned char)126)))) + (130))) - (4)))))) + (((unsigned long long int) var_2))));
    }
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned int) (unsigned short)43673);
        var_30 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_42 [i_12] [i_12])))));
    }
    for (unsigned short i_13 = 2; i_13 < 10; i_13 += 4) 
    {
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_13] [i_13])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)47))))) ? (((/* implicit */int) ((unsigned short) arr_15 [i_13] [i_13 + 2] [i_13] [i_13] [i_13]))) : ((~(((/* implicit */int) var_9))))))));
        arr_48 [i_13] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4291744119U)))))) % (arr_4 [3] [i_13]))))));
    }
    var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_10)) << ((((~(var_13))) + (3699177028064483089LL)))))));
    var_33 = ((/* implicit */long long int) var_6);
    var_34 = ((/* implicit */unsigned char) var_11);
}
