/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172909
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
    var_13 = ((/* implicit */unsigned short) max((3652737119919771641LL), (((/* implicit */long long int) 3260864448U))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min(((~(max((((/* implicit */unsigned long long int) arr_4 [6] [i_1] [i_2])), (arr_7 [i_0] [2LL] [i_2 + 1] [(short)2]))))), (((/* implicit */unsigned long long int) (-((~(arr_2 [i_2 + 2] [i_2])))))))))));
                    var_15 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) (!(arr_6 [4U] [i_0] [i_1] [i_2 + 2])))), (max((arr_0 [(unsigned char)2] [i_1 - 4]), (arr_1 [i_0])))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), ((~(arr_1 [i_0])))))))))));
                }
            } 
        } 
    } 
}
