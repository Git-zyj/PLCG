/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100084
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
    var_17 = ((/* implicit */signed char) var_9);
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)4080)) <= (2147483647)))) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) var_9)))) == ((-(((/* implicit */int) (signed char)-120)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = (~(((((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_4 [i_2] [i_0])))) ? (arr_7 [i_1 + 1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((((arr_0 [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_1] [i_2])) - (203)))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1] [i_2])), (arr_3 [i_0] [i_0]))))))) && (((/* implicit */_Bool) (((+(arr_5 [i_1]))) | (arr_6 [(signed char)5] [i_2] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((var_5), (var_5)))))) ? (((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) (signed char)-123)))) : (((var_12) | (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1))));
    var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61437))))) ? (max((((/* implicit */unsigned int) var_1)), (var_0))) : ((-(var_8)))))));
}
