/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122384
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((max((max((((/* implicit */int) (_Bool)0)), (-1156406381))), ((+(1156406400))))) >= (min((((int) (_Bool)1)), (((var_7) ? (15) : (((/* implicit */int) var_0)))))));
        var_12 = ((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (-(1156406400))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) min((var_13), (arr_3 [i_0] [i_0] [i_1])));
            var_14 = ((/* implicit */long long int) var_10);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned int) arr_1 [i_2]);
        arr_7 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))) ? ((((_Bool)1) ? (arr_2 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) min((arr_4 [i_2]), (((/* implicit */unsigned int) var_8)))))));
    }
    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        var_15 = ((/* implicit */signed char) arr_9 [i_3 + 3] [i_3 - 1]);
        var_16 = ((/* implicit */_Bool) (+(((-1945409262) * (((((/* implicit */int) (_Bool)0)) / (var_9)))))));
    }
    var_17 = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_5)))))))));
}
