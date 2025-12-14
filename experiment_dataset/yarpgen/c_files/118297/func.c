/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118297
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
    var_14 = ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!((_Bool)0)))), (min((var_5), (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        arr_3 [i_0 - 1] = ((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (var_8))), (((/* implicit */unsigned long long int) var_12))))));
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1 + 2] [i_1] = max((((/* implicit */unsigned int) 0)), (3694331072U));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_12 [i_1] = ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 + 1] [i_1])) ? (var_5) : (((/* implicit */long long int) arr_10 [i_1 - 1] [i_1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3] [i_3 + 1])) ? ((+(1104844828U))) : (((/* implicit */unsigned int) arr_6 [i_1 - 1]))));
                arr_17 [i_3] [i_2] = ((/* implicit */signed char) (+(arr_9 [i_1] [i_1] [i_1])));
            }
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(3977999195764987888LL)))) ? ((+(var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 2]))))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 23; i_4 += 1) 
    {
        arr_21 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-117)) > (((/* implicit */int) var_1))));
        arr_22 [i_4] = ((/* implicit */unsigned long long int) ((var_13) % (var_13)));
    }
    var_18 -= ((/* implicit */signed char) var_0);
}
