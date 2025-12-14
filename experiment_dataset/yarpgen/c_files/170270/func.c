/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170270
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_1))));
                }
                var_20 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) % (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 6151356550250045239LL)))) : (var_14)))));
                var_21 *= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) - (-2615039884244923273LL)))));
                arr_11 [10ULL] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) != (((unsigned int) (signed char)-1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) : (max((((/* implicit */long long int) 3758096384U)), (min((((/* implicit */long long int) (unsigned short)27671)), (var_10)))))));
            }
        } 
    } 
    var_22 = max((min((((((/* implicit */_Bool) 2143569341U)) ? (((/* implicit */unsigned int) -1021515845)) : (var_1))), (var_8))), (((/* implicit */unsigned int) (unsigned short)37850)));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
}
