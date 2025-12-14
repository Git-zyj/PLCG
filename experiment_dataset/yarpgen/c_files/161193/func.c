/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161193
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
    var_18 &= ((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_5)))) % (((/* implicit */int) var_16))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)103)) < (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)103))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-103))));
                var_20 = ((/* implicit */unsigned int) ((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) < (((((/* implicit */int) (signed char)91)) ^ (((/* implicit */int) (signed char)-104))))));
                var_21 &= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((long long int) var_13));
    var_23 = ((/* implicit */short) var_2);
}
