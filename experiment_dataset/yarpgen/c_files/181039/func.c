/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181039
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) arr_1 [i_0]);
        var_19 = ((/* implicit */int) var_3);
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) ((short) var_15)))), (arr_1 [i_0])));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_15))))));
        var_22 &= ((/* implicit */_Bool) ((((int) var_12)) ^ (((/* implicit */int) ((unsigned short) arr_1 [18LL])))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_23 -= max(((~(var_7))), (((var_17) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_3])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_24 ^= ((/* implicit */long long int) ((int) arr_9 [i_1] [i_2] [i_1]));
                        var_25 += ((/* implicit */long long int) ((var_15) <= (((/* implicit */int) arr_4 [i_2]))));
                        var_26 = ((/* implicit */short) 4294967295U);
                    }
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */int) var_12);
    var_28 = ((/* implicit */unsigned long long int) ((var_14) << (((/* implicit */int) var_3))));
}
