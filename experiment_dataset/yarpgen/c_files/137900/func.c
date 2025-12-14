/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137900
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 -= min((((unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) * (((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) ? (5575089548336726300LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) % (((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_1 [2U])))))))));
                arr_5 [(signed char)17] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0])))) : (min((((/* implicit */long long int) ((short) 5575089548336726269LL))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -5575089548336726301LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2605085871U))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1156313419U)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 + 2])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) 7260313812385851783LL);
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? ((-(5575089548336726264LL))) : (((var_1) / (4887180851466812158LL))))), (((/* implicit */long long int) ((signed char) ((long long int) 1158231674)))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (int i_3 = 4; i_3 < 16; i_3 += 2) 
        {
            for (short i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                {
                    var_23 *= ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) arr_9 [i_3 - 4] [i_3])) != (((/* implicit */int) arr_9 [i_3 - 2] [i_3]))))), (((short) 5575089548336726269LL))));
                    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 64LL)) || (((/* implicit */_Bool) 5575089548336726300LL)))), (((_Bool) arr_4 [i_3] [i_4 - 1] [i_4 - 1]))));
                    arr_13 [i_2] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) arr_8 [i_2]))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (arr_8 [i_2])))));
                    arr_14 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_9 [i_4 - 1] [i_2]), (arr_9 [i_4 + 1] [i_2])))), (((((/* implicit */_Bool) arr_9 [i_4 + 3] [i_2])) ? (arr_12 [i_4 + 3] [i_3 - 2] [i_3 - 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 3] [i_2])))))));
                }
            } 
        } 
    } 
}
