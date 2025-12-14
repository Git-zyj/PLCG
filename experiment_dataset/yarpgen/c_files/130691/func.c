/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130691
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
    var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (!(var_7))))) * (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_0))))), (((/* implicit */long long int) (~(var_2))))));
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)38520))) ? (((/* implicit */unsigned long long int) ((var_14) & (((/* implicit */int) (unsigned short)20305))))) : (min((var_1), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_16)), (((((/* implicit */int) (signed char)101)) ^ (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) max((((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - (1180801646)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32118))) : (var_2)))) : (var_9))), ((~(11073966814735771522ULL)))))) : (((/* implicit */short) max((((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) >> (((((arr_2 [i_0] [i_0]) - (1180801646))) - (367601969)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32118))) : (var_2)))) : (var_9))), ((~(11073966814735771522ULL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((min((arr_0 [i_0] [i_2]), (((((/* implicit */int) (short)-16094)) ^ (var_14))))) / (max((((/* implicit */int) arr_4 [i_1])), ((~(((/* implicit */int) arr_6 [15] [i_0] [i_2]))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)100)))))) > (max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_0] [i_0])), (9959775573498437155ULL)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)11]))))), ((~(8796093022207LL))))) - (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) arr_4 [i_0])))))));
    }
}
