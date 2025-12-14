/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180667
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
    var_18 = (~(((/* implicit */int) ((-1597685751) <= (((/* implicit */int) var_4))))));
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min(((~(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)65520)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (arr_0 [i_0])))))))));
                var_20 = ((/* implicit */unsigned long long int) (~((~(((int) 2622766324U))))));
            }
        } 
    } 
}
