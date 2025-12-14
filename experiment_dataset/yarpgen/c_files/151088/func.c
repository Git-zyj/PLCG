/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151088
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
    var_18 = ((/* implicit */long long int) var_8);
    var_19 += ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
            var_21 = ((((unsigned long long int) min((var_9), ((unsigned short)51852)))) / (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)5))))) & (max((8248972931605763025ULL), (((/* implicit */unsigned long long int) -2656520671447999034LL)))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                var_22 = ((/* implicit */signed char) var_5);
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2656520671447999051LL)))) ? (((((/* implicit */_Bool) arr_1 [i_2 + 1] [(unsigned short)9])) ? (((/* implicit */int) (unsigned short)37429)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_7))))))))));
            }
            var_24 = ((/* implicit */unsigned int) max((max(((unsigned short)36064), (arr_9 [i_0] [i_1] [i_1]))), (((unsigned short) arr_5 [i_0] [i_0] [i_0]))));
        }
        var_25 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)36072)), (var_0)));
    }
    var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_11))))));
}
