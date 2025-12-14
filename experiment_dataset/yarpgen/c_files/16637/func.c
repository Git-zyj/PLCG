/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16637
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((_Bool) ((_Bool) arr_6 [i_0] [i_1] [i_2])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_12 [i_4 + 1] [i_4] [4LL] [i_4 + 1] [i_4]) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_4 + 1] [i_4])) : (((/* implicit */int) var_13)))));
                            arr_15 [i_3] [i_3] [i_2] [i_1] [i_4 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_4 - 1])))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((arr_13 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_1] [i_1]) < (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3] [i_4])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            var_17 = arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 1];
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_0] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 1]))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])) : (arr_13 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                            var_19 = ((/* implicit */unsigned char) ((unsigned short) ((signed char) var_6)));
                        }
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
                            var_21 -= ((/* implicit */unsigned long long int) arr_1 [i_6 - 1]);
                            var_22 = ((/* implicit */unsigned short) ((((long long int) arr_16 [i_6 + 1] [i_6] [i_6 - 2])) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_1] [i_1])))) : (arr_21 [i_0] [3ULL] [i_3])))));
                            arr_23 [i_1] [i_2] [i_6] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_3]);
                            arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(8070450532247928832LL)))) == (((arr_17 [i_6 + 1] [i_6 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_2)))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_23 -= ((/* implicit */_Bool) ((((long long int) ((long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_7]))) & (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_0] [i_3] [i_7])) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_2]))))))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) var_11));
                            arr_29 [i_0] [i_3] [i_7] |= ((long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_7])) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (((/* implicit */int) arr_3 [i_1] [i_3]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned int) var_8))));
                            var_26 ^= ((((/* implicit */_Bool) (-(arr_31 [i_2])))) ? (((unsigned int) arr_31 [i_8])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_31 [i_0])))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)24))))) && (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_7))))))));
                            arr_33 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_8])) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_0))), (var_5))) : (((long long int) ((((/* implicit */_Bool) var_12)) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_36 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9] = ((/* implicit */signed char) var_3);
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_9))) ? (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_7))))) ? ((~(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (arr_21 [i_1] [i_1] [i_9])));
                        var_29 -= ((/* implicit */unsigned long long int) var_5);
                        arr_37 [i_0] [i_1] [(short)12] [i_9] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [0U] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_14)))))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) var_1);
}
