/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161961
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (arr_0 [i_0])))) && (((/* implicit */_Bool) ((unsigned long long int) var_9))))), (min((min((var_2), (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) || (((/* implicit */_Bool) arr_4 [i_0 - 1])))));
                            arr_14 [i_0] [i_0 - 1] [i_1] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 - 1] [4ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1])))))) : (arr_8 [i_1 - 1]))), (arr_11 [i_1])));
                            arr_15 [i_0 - 1] [i_1] [i_2] [i_3] [16ULL] &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((_Bool) var_8))), (((arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0]) ? (11562216255324032767ULL) : (6884527818385518835ULL))))), (((/* implicit */unsigned long long int) ((((arr_1 [14ULL]) ? (11562216255324032752ULL) : (var_8))) != (arr_11 [(_Bool)1]))))));
                        }
                    } 
                } 
                var_10 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1 + 1]), (arr_8 [i_1 + 2])))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]))) ^ (arr_9 [i_0] [17ULL] [i_1] [i_0]))), ((-(11562216255324032767ULL))))) : ((-(((arr_8 [i_0]) | (11562216255324032767ULL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_4 + 3] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_6))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_5]))) : (arr_0 [i_1])))))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) ((_Bool) ((6884527818385518849ULL) << (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_4 - 2]))))))));
                            var_11 -= var_9;
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [10ULL])) ? (arr_18 [i_0] [i_0] [(_Bool)1] [(_Bool)0]) : (arr_4 [i_1])))) ? ((+(var_6))) : (max((((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [(_Bool)1] [i_4])), (1041524848769468021ULL))))) >> (((((var_7) | (((unsigned long long int) arr_4 [i_0])))) - (18442339154143067620ULL))))))));
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_4 - 1] [i_1 + 2] [i_0] [i_0 - 1]) > (((arr_10 [i_0] [i_1 - 1] [i_1] [i_5]) ? (arr_9 [i_5] [i_4 - 1] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))))))) > (((((/* implicit */_Bool) ((arr_11 [i_1]) * (16821139945220162774ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_5]))))) : (11562216255324032767ULL)))));
                            arr_22 [i_0] [i_1 + 3] [i_1] = max((arr_18 [(_Bool)1] [(_Bool)1] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 *= (~(min((((/* implicit */unsigned long long int) var_2)), ((-(var_1))))));
    var_14 = ((/* implicit */_Bool) max(((-(var_3))), (min((1041524848769468021ULL), (((var_7) & (var_4)))))));
    var_15 ^= ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_9))) >= (min((17405219224940083595ULL), (var_4))))))));
}
