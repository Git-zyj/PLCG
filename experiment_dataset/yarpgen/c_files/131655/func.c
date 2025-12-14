/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131655
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((arr_6 [i_0] [i_0] [3LL] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))) : (((/* implicit */int) arr_1 [i_0 - 2])))));
                    arr_8 [(unsigned char)4] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_6 [i_2 + 1] [i_1] [i_2] [i_1])))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_1] [i_2]) != (((/* implicit */int) var_6))))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2 + 1] [i_2] [i_1]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_1])))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41249)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) (unsigned char)246))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_4)))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_2)))))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))) - (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (var_1))))))));
    var_16 = (-(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)117))))))));
}
