/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153119
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
    var_13 &= ((/* implicit */unsigned char) var_11);
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))));
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (104))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_9))));
                                arr_14 [i_0] [i_3] [i_0] [i_3] [3ULL] [(unsigned char)6] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5896))) | (7602101653830315631LL)));
                                arr_15 [8LL] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)41835))));
                                arr_16 [3] [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
