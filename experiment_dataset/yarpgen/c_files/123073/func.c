/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123073
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
    var_17 *= ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_3 [i_2])) >> (((((/* implicit */int) (signed char)-3)) + (19))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+((-(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned char) var_15);
        var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51029))));
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) (!(arr_3 [i_3])));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            {
                arr_18 [i_4] = ((/* implicit */signed char) (((_Bool)1) ? ((-(((arr_12 [11]) - (((/* implicit */int) (signed char)13)))))) : ((-(min((((/* implicit */int) (signed char)66)), (arr_2 [(_Bool)1] [8])))))));
                var_22 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_7 [i_5 + 2])), (arr_5 [i_5 + 1]))) << ((((~(arr_5 [i_5 + 3]))) - (307040383U)))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (unsigned char)19)) : (1368395319))), (((((/* implicit */_Bool) var_15)) ? (var_12) : (196608))))))))));
            }
        } 
    } 
}
