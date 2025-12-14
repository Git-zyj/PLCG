/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17037
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
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) % (((((/* implicit */_Bool) 98924178)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (3217678261U))))), (((/* implicit */unsigned int) var_14))));
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                    arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (524287LL)));
                    arr_12 [(unsigned char)4] [i_1] [i_2] = ((/* implicit */signed char) (!(((((/* implicit */int) var_10)) != (((((/* implicit */int) arr_2 [i_2])) / (((/* implicit */int) var_14))))))));
                }
            } 
        } 
    } 
}
