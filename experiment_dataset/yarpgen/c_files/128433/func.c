/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128433
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)127);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2801306837291201168LL)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_7 [(signed char)5] [i_0] [(unsigned short)6] [(signed char)5] [i_3]))))) != (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (2050619617U) : (2541895486U))))))));
                        arr_9 [9U] [9U] [9U] = ((/* implicit */signed char) var_14);
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_2] [i_0] [i_2] [i_0] [i_0])) ^ ((-(((/* implicit */int) var_12)))))))));
                            var_22 |= ((/* implicit */long long int) arr_4 [i_4 - 2] [i_4 + 2]);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2] [(unsigned char)6] [i_2] [i_2] [i_4 + 2])) >> (((((/* implicit */int) ((short) var_8))) - (23008))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) ((2525836709U) != (1181762026U)))))))));
}
