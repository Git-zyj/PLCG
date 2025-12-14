/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180313
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_15);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) (short)-2962))))))), (((((var_16) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0])))))));
            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2962))) & (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_12)), ((signed char)2))))) : (6695910066012240234LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (var_15)))) ? (((/* implicit */int) var_12)) : (((-2064568741) + (((/* implicit */int) var_2)))))))));
        }
        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))) | (min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (var_10)))), (arr_0 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((var_10) | (max((((/* implicit */long long int) var_5)), (6695910066012240221LL))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) | (-5518657249288015457LL)))))));
}
