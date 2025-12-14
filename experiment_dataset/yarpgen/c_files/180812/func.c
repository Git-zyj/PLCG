/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180812
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
    var_13 = ((/* implicit */int) (~(((long long int) -5))));
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_12), (((/* implicit */short) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_5);
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [16U] [i_3] = ((/* implicit */unsigned int) var_8);
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_7 [i_1]))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)127))));
                        }
                    } 
                } 
            }
        } 
    } 
}
