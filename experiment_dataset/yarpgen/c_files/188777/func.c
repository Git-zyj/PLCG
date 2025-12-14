/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188777
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_10 = ((/* implicit */unsigned long long int) 2402134393U);
                        var_11 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-41))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27594))))) : (min((arr_0 [i_3] [i_3 + 2]), (arr_0 [i_0] [i_0]))));
                        var_12 = ((/* implicit */int) max((var_12), (var_1)));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) arr_0 [i_2] [i_3]);
                    }
                    for (long long int i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) arr_11 [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 1]));
                        arr_17 [i_0] [i_1] [i_2] [i_4 + 3] = ((/* implicit */short) (-(((/* implicit */int) max((arr_15 [i_0] [i_1] [i_2] [i_4 - 1] [i_4 - 1]), (arr_15 [i_0] [i_1] [(_Bool)1] [i_4 + 3] [(_Bool)1]))))));
                        var_13 = ((/* implicit */short) (~(((/* implicit */int) (short)20166))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_14 = (+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1])));
                        var_15 = ((/* implicit */signed char) arr_19 [i_0] [i_0]);
                        var_16 += ((/* implicit */short) (-(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_5]))))));
                    }
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) (+((~(arr_4 [i_0] [i_6])))));
                        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) (!(var_7)))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_2]))))));
                        var_19 ^= ((/* implicit */_Bool) arr_2 [i_2] [i_6]);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_6])), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_6])))))) : (((((/* implicit */_Bool) 157047025976775305LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (134217696U)))));
                    }
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (short)20160))));
                }
                arr_22 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(min((arr_20 [14] [i_1] [i_1] [i_1]), (arr_20 [i_0] [i_1] [i_0] [i_0])))));
                var_22 = ((/* implicit */signed char) ((((min((((/* implicit */int) (short)20155)), ((~(((/* implicit */int) (signed char)59)))))) + (2147483647))) << (((((min((((/* implicit */int) (signed char)33)), (min((((/* implicit */int) (short)-5393)), (0))))) + (5407))) - (14)))));
            }
        } 
    } 
    var_23 -= ((/* implicit */short) var_7);
}
