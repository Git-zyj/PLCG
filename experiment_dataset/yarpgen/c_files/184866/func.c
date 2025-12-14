/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184866
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
    var_13 = ((/* implicit */_Bool) ((14419070146044624988ULL) + (((/* implicit */unsigned long long int) -2037145414))));
    var_14 |= ((/* implicit */unsigned int) (-(((-2037145427) / (2037145414)))));
    var_15 = ((/* implicit */unsigned char) ((min((var_11), (((/* implicit */unsigned int) -2037145427)))) / ((~(max((var_7), (((/* implicit */unsigned int) (unsigned short)25412))))))));
    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? ((-(var_8))) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (13U) : (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((arr_0 [(_Bool)1] [(_Bool)1]), (arr_0 [i_0] [i_1]))), ((unsigned short)25412)))) ? ((-(min((arr_3 [i_0] [i_1]), (((/* implicit */int) var_9)))))) : (((((/* implicit */int) (short)32756)) << (((((((((/* implicit */_Bool) (unsigned short)0)) ? ((-2147483647 - 1)) : (-2037145416))) + (2037145433))) - (6)))))));
                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)9] [(short)9] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_1]))) : (3582731538U))))));
                arr_5 [i_0] [i_1] [15] = ((/* implicit */unsigned int) max((min((((/* implicit */int) (unsigned short)11596)), ((~(((/* implicit */int) (short)-11297)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2037145429)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_2 [i_1] [i_0 - 1] [i_1])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
            }
        } 
    } 
}
