/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144670
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
    var_19 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_0 + 2] [i_0])))) / (((/* implicit */int) arr_4 [i_0]))));
                    var_21 = ((/* implicit */signed char) (~(((int) arr_2 [i_1]))));
                    var_22 = ((/* implicit */signed char) max((min((((arr_5 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (arr_6 [i_1 + 2] [i_0 + 2]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0 + 1] [i_2])))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((unsigned long long int) (unsigned char)85);
                    var_23 = ((/* implicit */signed char) (~(((unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_13)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (~(var_5)));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_2))));
}
