/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162599
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
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */unsigned char) (short)-31923);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) (unsigned char)96);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (!(((arr_7 [i_2] [i_1] [i_2]) || (((/* implicit */_Bool) (unsigned char)159))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)161)) + (min((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)160)))), (((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_7))))))));
                            var_17 *= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((_Bool) var_4))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(_Bool)1]))) - (var_4)))))));
                            var_18 *= ((/* implicit */unsigned char) (!(((_Bool) (unsigned char)77))));
                        }
                    } 
                } 
            }
        } 
    } 
}
