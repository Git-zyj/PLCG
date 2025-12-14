/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118687
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
    var_19 = var_17;
    var_20 = var_18;
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (signed char)-113)))))) == (var_18))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_5 [i_2] [i_2] [i_2 - 2] [i_1]), (arr_5 [i_0] [i_0] [i_2 - 2] [i_1])))) ^ (((((/* implicit */long long int) (-(9)))) + ((+(var_3)))))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) == (var_13)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (max((((/* implicit */int) var_17)), (var_9))) : (((/* implicit */int) var_6))))));
}
