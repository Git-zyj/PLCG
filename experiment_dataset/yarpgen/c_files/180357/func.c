/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180357
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
    var_17 = ((/* implicit */int) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = min((min(((-(var_1))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1759796362)) <= (17103827539818100286ULL)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (127ULL) : (((/* implicit */unsigned long long int) var_12)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) var_16);
                            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -1759796389)) ? (arr_2 [i_1 + 1] [i_3 - 1]) : (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 1] [i_3 - 2] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
