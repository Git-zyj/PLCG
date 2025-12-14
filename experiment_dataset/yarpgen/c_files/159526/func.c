/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159526
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_10 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 528482304LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) var_2)))));
                            arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_1 [i_1 - 1])))));
                            arr_10 [i_0] [i_0] [i_2] [i_1] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) ((long long int) arr_5 [i_0] [i_3] [(_Bool)1]))))));
                            arr_11 [i_0] [12U] [i_0] [i_3] = ((/* implicit */unsigned char) (~(3875480700373302309LL)));
                        }
                    } 
                } 
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-(-3875480700373302309LL))))));
                var_12 += ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((_Bool) (~((~(((/* implicit */int) var_7)))))));
}
