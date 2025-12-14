/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105197
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
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)0))))))), (((unsigned long long int) (_Bool)0))));
        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11)))))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) - (arr_0 [i_1]))))));
        var_17 ^= ((/* implicit */short) ((((/* implicit */long long int) (+(min((var_6), (arr_0 [i_1])))))) - ((-(arr_1 [i_1])))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_2]));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_19 &= ((/* implicit */unsigned short) ((short) max((((/* implicit */int) arr_7 [i_1] [i_2])), (min((((/* implicit */int) (_Bool)1)), (var_1))))));
                var_20 = ((/* implicit */unsigned char) (_Bool)0);
                arr_12 [16U] [i_2] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_2] [9U])) >= (((/* implicit */int) arr_7 [i_1] [i_2])))))) <= (max((((arr_0 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) < (((/* implicit */int) arr_4 [i_2] [i_3])))))))));
            }
        }
        var_21 = ((/* implicit */long long int) (+(arr_0 [i_1])));
    }
    var_22 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_3))));
}
