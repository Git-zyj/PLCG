/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175590
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
    var_19 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) max(((signed char)83), ((signed char)-48))))));
    var_20 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_6)))))))), (var_15));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_2 [3ULL] [i_0])), (min((max((((/* implicit */unsigned int) arr_4 [i_1] [i_0] [i_1])), (arr_0 [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) - (arr_0 [i_0])))))));
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_8);
}
