/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158701
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
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) >= (((((/* implicit */int) var_19)) / ((~(var_9)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) 2147483636)) - (min((arr_6 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */long long int) arr_5 [i_1] [i_2]))))));
                    var_23 = ((/* implicit */_Bool) min(((signed char)50), (((/* implicit */signed char) ((((/* implicit */int) var_17)) > (((((/* implicit */int) arr_4 [i_0] [i_1])) * (((/* implicit */int) var_6)))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((int) max((-2147483637), (14))))));
                }
            } 
        } 
    } 
}
