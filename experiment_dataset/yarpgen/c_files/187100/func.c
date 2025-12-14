/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187100
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) var_0)))))));
    var_21 = ((/* implicit */unsigned int) var_9);
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)26)), (((((/* implicit */_Bool) (unsigned short)40158)) ? (var_1) : (min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)94))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) < (((/* implicit */int) (unsigned char)161))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) (unsigned char)152);
                            var_24 = ((/* implicit */unsigned short) (-2147483647 - 1));
                        }
                    } 
                } 
            }
        } 
    } 
}
