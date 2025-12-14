/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124092
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_16)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (7433)))))) : (var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1 - 1] [i_2 + 3] [3U])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_2 - 1]) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))) * (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_0)))))))) > (((long long int) arr_8 [i_0] [i_1 - 1] [i_1 - 1])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) arr_5 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_5 [i_0])))))));
                                var_21 = ((((arr_7 [i_2 + 3]) >> (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1])) >= (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_0 [(short)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0])))))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) == (var_11))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
