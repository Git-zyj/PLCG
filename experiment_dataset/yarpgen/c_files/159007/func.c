/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159007
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
    var_12 += ((/* implicit */int) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (var_0)))) && (((_Bool) var_1)))))));
    var_13 &= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((short) var_9));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_2 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */short) ((2467788107U) != (((/* implicit */unsigned int) var_9)))))))) * (((((/* implicit */_Bool) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 1])))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))), ((~(1988571406134224430LL)))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0 + 1]))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0])))))))));
        }
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min((((/* implicit */unsigned short) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (var_8)))));
    }
    var_18 = ((/* implicit */unsigned short) (+(0U)));
}
