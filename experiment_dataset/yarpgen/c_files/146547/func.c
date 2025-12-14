/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146547
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
    var_11 += ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (short)1022))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_0 [i_0])))))) * (max((((/* implicit */unsigned long long int) ((signed char) arr_2 [i_1 - 2] [i_0] [i_0]))), (max((arr_3 [i_0] [(_Bool)1] [i_0]), (arr_1 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3 + 1] [i_2] [i_1 + 3] [i_0] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51565)))))) >> (((((arr_3 [i_0] [i_3 + 2] [i_1 + 3]) - (((/* implicit */unsigned long long int) ((int) 528482304U))))) - (11121203756069281200ULL)))));
                        }
                    } 
                } 
                arr_10 [(short)10] [i_1 - 2] [i_0] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                arr_11 [9ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
}
