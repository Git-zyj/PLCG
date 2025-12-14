/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180483
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2496608172U) : (var_7))))))), ((((!(((/* implicit */_Bool) 2496608172U)))) ? (max((((/* implicit */unsigned int) var_4)), (var_0))) : (max((((/* implicit */unsigned int) (short)32754)), (1798359124U)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) 1798359125U);
                    var_12 = ((/* implicit */_Bool) min((var_12), (var_9)));
                }
                var_13 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((arr_6 [(_Bool)0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))) % (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) var_3);
                            var_15 = (~(((((/* implicit */_Bool) ((2496608163U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 1] [i_3])))))) ? (min((((/* implicit */unsigned int) var_8)), (2496608172U))) : (2496608160U))));
                            var_16 = ((((/* implicit */_Bool) max(((-(2496608172U))), (((/* implicit */unsigned int) arr_12 [i_3] [i_4]))))) ? (max((-1748549160474106659LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_4 + 1]) : (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                arr_22 [i_3] [i_4] [(unsigned short)6] = min((1748549160474106658LL), (((/* implicit */long long int) (-(arr_21 [i_3 - 1] [i_4] [i_3] [(_Bool)1] [i_4] [i_3])))));
            }
        } 
    } 
}
