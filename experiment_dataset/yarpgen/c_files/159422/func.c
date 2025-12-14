/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159422
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) var_6);
                    var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_0 [i_2 - 1])), (1297475914U)))))), (max((max((var_3), (arr_5 [i_1 - 3]))), (((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_0] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_2);
    var_14 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)30720)))) ? (var_0) : (2997491382U)));
}
