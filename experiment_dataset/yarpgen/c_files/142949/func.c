/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142949
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 7; i_2 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) (((!(var_15))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))));
                    var_20 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                    arr_6 [i_0] [i_1] [i_2 + 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_18))))));
                }
                for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_8)))));
                    arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) 1978947093U)) ? (868456634U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))) : (var_6)));
                    arr_12 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(1978947093U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 3])) : (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 3] [i_3 + 1]))))) : (max((((/* implicit */long long int) max((arr_3 [i_1]), (arr_3 [i_1])))), (-2826962408459409305LL)))));
                }
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (min((((/* implicit */unsigned char) var_11)), (arr_5 [i_0] [i_1] [i_0])))))) ? (0LL) : (((/* implicit */long long int) (~((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))))));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 1382522805)) : (1978947093U))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_2);
    var_24 = min((var_3), (var_5));
}
