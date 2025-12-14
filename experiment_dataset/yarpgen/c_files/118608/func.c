/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118608
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_2 - 1] [(_Bool)1]))) : (-4102770137197343504LL))), (((long long int) var_13)))))));
                    var_16 = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))));
                    arr_9 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))))) <= (((int) (_Bool)1)))))) - (((-4102770137197343504LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                }
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [3ULL])) - (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_1] [i_1])) <= (var_2))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) var_14)))))) <= (1871379651U)))) : (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (arr_0 [i_1])))) - (((/* implicit */int) ((unsigned char) arr_8 [i_1]))))))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_5))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_0))))))) <= (((/* implicit */int) ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) var_13))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) -8))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))))))))) - (var_12)));
}
