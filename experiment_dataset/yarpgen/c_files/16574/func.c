/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16574
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
    var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26488)))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 2]))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 9595548170619875735ULL))));
                var_21 = ((/* implicit */unsigned long long int) max(((~(arr_2 [i_1 - 2] [(short)1] [11LL]))), (((/* implicit */int) max((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_1 - 3] [i_1 + 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) 8851195903089675881ULL)) ? (((/* implicit */int) (_Bool)0)) : (var_5))), (((/* implicit */int) var_1))))));
    var_23 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(952081425)))) && (((/* implicit */_Bool) max(((short)3072), (((/* implicit */short) (signed char)101)))))))))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~((~(((var_6) | (((/* implicit */int) (short)-101)))))))))));
                }
                arr_12 [i_2] = ((/* implicit */short) arr_5 [i_2] [i_2]);
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_2 [i_2] [i_2] [6LL]))));
                var_27 = ((((/* implicit */_Bool) (signed char)-6)) ? (arr_3 [i_2 - 2] [i_3]) : (((/* implicit */int) (_Bool)0)));
            }
        } 
    } 
}
