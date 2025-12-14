/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175794
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
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) -240981532))));
                    var_18 = ((/* implicit */unsigned short) -240981527);
                    var_19 = ((/* implicit */unsigned long long int) max((arr_3 [i_2 - 1]), (((/* implicit */unsigned int) (short)-2))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_0);
    var_21 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-38)), (var_0)))) / (var_4)));
    var_22 = ((/* implicit */_Bool) min((var_4), (var_12)));
    var_23 = ((/* implicit */unsigned short) var_8);
}
