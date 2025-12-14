/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146289
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
    var_19 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)7)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_2]))))), (arr_4 [i_2 + 4] [i_2] [i_2 + 1])))) ? ((((((~(((/* implicit */int) var_10)))) + (2147483647))) >> (((/* implicit */int) arr_3 [5U] [i_2 + 2])))) : (((/* implicit */int) arr_1 [i_0] [i_0])));
                    var_21 = ((/* implicit */_Bool) ((unsigned int) ((var_18) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((unsigned char) (signed char)7))) < (((/* implicit */int) arr_1 [(signed char)3] [i_2]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? ((-(((/* implicit */int) arr_6 [1LL] [i_1] [i_2] [i_2])))) : (((/* implicit */int) ((signed char) -1107775138)))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned long long int) min((-2005841145864922236LL), (((/* implicit */long long int) var_2))))), (arr_2 [i_0 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_2])) & (var_5)))) ? (min((var_0), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [(unsigned char)0] [i_2])))) : (((arr_5 [i_2] [i_2] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))))));
                }
            } 
        } 
    } 
}
