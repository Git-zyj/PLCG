/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172939
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_5))))), ((~(arr_6 [i_2] [i_0])))))) ? (((/* implicit */int) var_2)) : ((+(min((((/* implicit */int) var_10)), (var_13)))))));
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2])) | (((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2]))))) ? ((~(((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (short)3584))))))) : (((/* implicit */long long int) var_13))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_3);
    var_19 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) max((var_4), (var_7)))))));
    var_20 = ((/* implicit */_Bool) ((((unsigned long long int) ((var_15) > (((/* implicit */int) var_5))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
