/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100261
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) 953002015)))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(var_0))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            var_14 = ((/* implicit */short) min((((/* implicit */unsigned short) arr_4 [i_0])), (((unsigned short) arr_1 [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_9 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((arr_7 [i_1] [i_2]) ? (arr_0 [i_0]) : (((/* implicit */int) arr_7 [i_1] [i_0]))));
            }
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 1]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0]))))) : (arr_6 [i_0] [i_1] [i_0] [i_1]))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!((!(((/* implicit */_Bool) 953002029))))))), ((+(((/* implicit */int) arr_4 [0LL]))))));
        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)8379)))) || ((_Bool)1))))));
        var_16 = ((/* implicit */short) arr_1 [i_0]);
    }
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) && (var_7))) && (((/* implicit */_Bool) max((1385446226U), (819661004U))))))), (((((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */long long int) 953002015)))))) - ((+(var_8)))))));
    var_18 = ((/* implicit */_Bool) 3317662047U);
}
