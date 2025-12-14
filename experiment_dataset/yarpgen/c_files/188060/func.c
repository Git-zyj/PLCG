/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188060
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
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_10 *= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */int) (signed char)-18)) != (((/* implicit */int) (signed char)-118)))))));
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_1]))));
                var_12 = ((/* implicit */short) arr_2 [i_0]);
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)62029);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((int) arr_3 [i_2]));
        var_15 = ((/* implicit */unsigned short) ((int) ((int) arr_1 [i_2 + 2])));
    }
    var_16 = max((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_2)) % (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))))), (var_4));
}
