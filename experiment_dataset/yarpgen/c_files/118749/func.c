/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118749
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
    var_20 += min(((_Bool)1), ((_Bool)1));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-4)) % (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((/* implicit */unsigned int) min((((((/* implicit */int) var_4)) + (arr_5 [i_0]))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65517)) >= (((/* implicit */int) (_Bool)1)))))))), (max((((/* implicit */unsigned int) min((arr_5 [i_0]), (((/* implicit */int) (_Bool)1))))), (max((var_5), (((/* implicit */unsigned int) arr_5 [i_1])))))))))));
                var_23 = ((/* implicit */unsigned short) arr_3 [i_1 + 2] [i_1 + 2]);
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (0LL)));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (_Bool)1))))) << (((-550666094) + (550666098)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((arr_3 [i_0] [i_1 + 1]) + (arr_3 [i_1 + 2] [i_0])))));
            }
        } 
    } 
}
