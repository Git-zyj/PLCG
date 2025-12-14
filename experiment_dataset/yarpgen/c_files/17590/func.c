/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17590
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18181561879534802139ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_0 [i_0]))))) % (arr_2 [i_0])))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)0));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) (_Bool)1));
                            }
                        } 
                    } 
                } 
                var_20 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0]))))));
                var_21 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) ((unsigned long long int) var_15)))));
    var_23 = ((/* implicit */_Bool) (~((+((-(-18)))))));
    var_24 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_1))))) & (((var_2) << (((((/* implicit */int) var_9)) - (1))))))));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_9))));
}
