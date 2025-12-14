/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172132
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
    var_10 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_4)));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-717083455) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_0 + 3] [i_1 - 3] [i_1]))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_0 + 1])) << (((-473350467) + (473350486)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) var_1)), (arr_9 [i_0 + 2] [i_1 - 3]))));
                            var_14 = ((/* implicit */short) -518675292);
                            arr_10 [i_1 - 3] [i_3] = ((/* implicit */signed char) max((var_1), (((((/* implicit */_Bool) 518675291)) ? (-518675292) : (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
