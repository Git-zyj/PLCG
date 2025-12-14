/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168952
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
    var_16 = ((/* implicit */int) var_12);
    var_17 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~((((~(-5256200897730510918LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 8894502662644154135LL)) ? (arr_5 [i_0] [i_0 + 1] [i_0]) : (-1148981237)))))))))));
                        arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) var_15)), (((var_7) + (2233785415175766016LL)))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_13 [i_4] [i_4 - 1] [i_0] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_0] [i_4 - 1] [i_4 - 1] [i_4])))))))));
                        arr_14 [i_4] [i_2] [i_0] = ((/* implicit */signed char) 1932490142);
                    }
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        var_20 ^= ((/* implicit */_Bool) ((signed char) min((arr_3 [i_0 - 2] [i_0 + 2]), (arr_3 [i_0 + 1] [i_0 + 2]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((-1110472951504761387LL), (arr_16 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_1 + 1] [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_2] [i_2] [i_5])), (var_3)))) ? (((((/* implicit */_Bool) (signed char)-101)) ? (-1085341123) : (((/* implicit */int) (signed char)-30)))) : ((~(((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_2] [i_5]))))))) : (min((min((((/* implicit */long long int) arr_11 [i_0] [15] [i_2] [i_5])), (arr_0 [i_5] [20LL]))), (((/* implicit */long long int) ((_Bool) (_Bool)1)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_2] [i_2] [i_0] = (!(((/* implicit */_Bool) max((((int) arr_6 [i_0] [i_1] [i_2])), (((arr_5 [i_6] [(signed char)5] [i_0 + 2]) << (((((/* implicit */int) (_Bool)1)) - (1)))))))));
                        var_22 += ((/* implicit */signed char) ((1096395695952486685LL) - (((/* implicit */long long int) max((((/* implicit */int) max(((signed char)-102), (((/* implicit */signed char) var_4))))), ((+(arr_18 [i_0]))))))));
                        var_23 ^= ((((/* implicit */int) arr_10 [i_0 - 2] [6] [i_0] [i_0] [i_0 - 2] [i_0 + 2])) * (((arr_4 [i_1 + 2] [i_2] [i_6]) ? (1069547520) : (((/* implicit */int) arr_4 [i_6] [(signed char)18] [i_0])))));
                    }
                    arr_23 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min(((~((-(arr_5 [i_2] [22] [i_0 - 2]))))), (((/* implicit */int) var_11))));
                    arr_24 [i_0] [i_0] &= min((((((_Bool) 6)) ? (max((var_12), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))), (var_2));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_14);
}
