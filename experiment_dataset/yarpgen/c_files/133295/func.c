/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133295
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
    var_18 &= ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) ((unsigned short) arr_2 [i_1])))), (((int) (short)4032))));
                var_20 *= ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) var_6);
                            arr_12 [i_0] [i_2] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((_Bool) (_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
}
