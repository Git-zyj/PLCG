/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155227
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((max((((arr_0 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62115))))), (arr_0 [i_0 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1])))));
                var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) min((((/* implicit */int) ((var_2) <= (arr_2 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])) - (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -284670141))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-19012)))) : (((var_1) / (((/* implicit */int) var_8))))))) / (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_2)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6487580677090482489LL))) : (var_7)))));
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */int) (short)-19012);
}
