/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183450
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
    var_13 = ((/* implicit */unsigned int) ((((var_1) ? (var_7) : (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) var_9)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6023293940339327694LL)) ? (((/* implicit */int) (short)28535)) : (((/* implicit */int) (signed char)-5))))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) var_10)))), (max((((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_10)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (var_12)))), (((var_1) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))))));
        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8)))) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned long long int) var_8)), (var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (var_12))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (var_5)))));
                    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_4) : (var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_10)) : (var_8))) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (var_8)))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (var_9))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_12) & (var_12)))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 667933205)) ? (3932160U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
}
