/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164657
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((var_12) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (((unsigned int) var_2)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_17))))))));
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_2 + 1])))));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (short)(-32767 - 1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-1586383296) + (2147483647))) << (((9223372036854775807LL) - (9223372036854775807LL)))))) || ((!(var_12)))));
                                var_21 = ((/* implicit */unsigned char) ((short) max((((0U) / (17U))), (((/* implicit */unsigned int) arr_12 [i_2 - 1] [i_2 - 1] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (~((~(((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))));
}
