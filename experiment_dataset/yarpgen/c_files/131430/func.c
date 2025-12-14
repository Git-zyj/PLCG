/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131430
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
    var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((7578322699997292346ULL) != (((/* implicit */unsigned long long int) var_10))))), (max((var_7), (((/* implicit */unsigned long long int) var_14)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */_Bool) -3775254706247527948LL);
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) min((arr_3 [i_0 + 4]), (min((arr_3 [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((min((((((/* implicit */_Bool) 7578322699997292346ULL)) ? (((/* implicit */int) (short)-5276)) : (((/* implicit */int) (short)32497)))), (((/* implicit */int) ((_Bool) (unsigned char)68))))) / (arr_6 [16U] [i_0 + 3] [i_0 + 3] [i_0]));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_1]))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_8 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)68)) << (((((((/* implicit */int) (short)-32497)) + (32522))) - (10))))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-14190)) && (((/* implicit */_Bool) var_12)))))))))));
}
