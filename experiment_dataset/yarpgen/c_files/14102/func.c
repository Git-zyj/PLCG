/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14102
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((int) (unsigned short)2255));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) arr_2 [i_0 + 1])));
                            arr_9 [i_2] [i_2 + 1] [i_2 - 3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_0])))))) : (arr_2 [i_2])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_6 [i_1]))) >> (((((/* implicit */int) arr_1 [i_0 + 1])) + (64))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)20739)));
    var_23 += ((/* implicit */int) (+(min(((~(var_5))), (((/* implicit */unsigned long long int) min(((unsigned short)44796), ((unsigned short)44796))))))));
}
