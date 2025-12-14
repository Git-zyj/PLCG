/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11703
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)2] [i_0]))) : (arr_3 [i_0] [i_1 - 1]))) : (arr_3 [i_1] [i_0]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 3210195182U)) ? (12582912) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-18576)) + (18597)))))))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_3 [i_1] [i_0]), (((/* implicit */long long int) arr_4 [i_1]))))) || (((/* implicit */_Bool) -3905721855103526874LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1]))) + (3905721855103526874LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)111), (((/* implicit */signed char) (_Bool)1))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)64))))))) : (max(((+(-3905721855103526874LL))), (((/* implicit */long long int) min((1501113029U), (((/* implicit */unsigned int) (signed char)112))))))))))));
    var_23 &= (((!(((((/* implicit */unsigned long long int) var_3)) > (13930013998390611555ULL))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : ((~(((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1801300131U))))));
}
