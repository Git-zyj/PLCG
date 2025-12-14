/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10383
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((short) ((int) (unsigned char)15))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((_Bool) min((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (807834722U))), (((/* implicit */unsigned int) ((_Bool) -1330620263))))));
                                var_17 |= ((/* implicit */_Bool) var_12);
                                arr_13 [i_2] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(min(((-(var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_1 [4ULL])))))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (-1330620242)))) || (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned short) max((max((arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) (short)-4073)))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
}
