/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168274
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned char) arr_3 [2]);
        var_15 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)232))))))) ? (((/* implicit */int) ((unsigned char) ((var_13) << (((((/* implicit */int) arr_3 [i_0])) - (22089))))))) : (((/* implicit */int) arr_3 [i_0])));
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((var_7) - (var_7)))) + (arr_0 [i_0 + 3] [i_0 + 2]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_11) : (((/* implicit */unsigned int) arr_1 [i_0 - 2]))))))))));
        var_18 = ((/* implicit */short) arr_2 [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            {
                arr_11 [i_1] [(unsigned char)20] = ((unsigned int) ((unsigned long long int) arr_4 [i_1 + 3]));
                var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)230)) - (arr_6 [i_2]))) - ((~(((/* implicit */int) var_4)))))))));
                var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (-(arr_6 [i_2])))) + ((-(arr_4 [i_2]))))), (((/* implicit */long long int) (unsigned char)218))));
                arr_12 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
