/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188355
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
    var_15 = ((/* implicit */unsigned char) var_5);
    var_16 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */short) var_9);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((~(5928714037210351122LL))) != (-7125213211392023313LL))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -7125213211392023289LL))))) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) arr_6 [i_1] [i_2]))))))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) var_6))), (max((((/* implicit */long long int) max((var_13), (var_2)))), (7125213211392023289LL))))))));
        }
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_21 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) << (((var_1) - (1146160356799255212ULL)))))) ? (arr_12 [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) var_9)) ? (arr_12 [i_1] [4U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) != (arr_10 [i_1] [i_1] [i_1])));
        }
    }
}
