/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128220
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)21767)))), (max(((+(var_4))), (((/* implicit */unsigned long long int) (unsigned char)121))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (arr_0 [6] [i_1]))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))))) * (max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((unsigned int) max((((/* implicit */unsigned int) var_10)), (3958382587U)))))))));
                var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)139)) << (((((/* implicit */int) (signed char)-64)) + (72))))), (((/* implicit */int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_1)));
}
