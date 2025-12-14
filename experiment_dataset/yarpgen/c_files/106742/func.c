/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106742
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
    var_12 = ((/* implicit */short) (unsigned char)30);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (58539)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)225))));
                arr_5 [i_1] = ((/* implicit */signed char) var_6);
                var_14 = ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_1]);
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_15 -= ((/* implicit */short) (_Bool)1);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)15755))))))))));
                    var_17 -= ((/* implicit */signed char) (unsigned char)189);
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) var_7);
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)193)) : (var_5)));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) ((var_7) ^ (((/* implicit */int) var_3))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_3] [i_1] [i_3])))) ? (((/* implicit */int) (unsigned short)35916)) : ((~(((/* implicit */int) var_9))))));
                        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (var_7) : (((/* implicit */int) (unsigned char)171)))))));
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)80)) & (((var_7) | (-1787213652)))));
                    }
                    arr_16 [i_1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1 + 3] [i_1 + 3] [i_3]);
                }
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_21 = var_11;
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_1 + 3] [i_1] [i_1 - 1]), (((/* implicit */long long int) var_0))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 2]))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    arr_23 [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) 237524739U);
                    arr_24 [i_1] = ((/* implicit */long long int) var_5);
                    var_23 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                    var_24 = ((/* implicit */short) var_2);
                }
            }
        } 
    } 
}
