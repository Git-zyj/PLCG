/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135556
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) 16711680ULL)) ? (18446744073692839934ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))))));
                var_18 = ((/* implicit */_Bool) (short)120);
                arr_4 [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-331))) & (-1LL)))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0 + 4] [i_0 - 2]))))) : (var_2)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_9);
                            arr_10 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */int) (-(max((arr_3 [i_3] [i_1 + 1]), (((/* implicit */unsigned long long int) var_0))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0 - 2])) ? (arr_3 [i_2] [i_3]) : (arr_3 [i_1 + 1] [i_0 + 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) var_4))))) : ((+(((((/* implicit */_Bool) var_15)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9)))))))))));
}
