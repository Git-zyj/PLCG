/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113239
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
    var_19 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 8101969203424826999ULL);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */long long int) (_Bool)0)), (arr_2 [i_0])))));
        var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-22653)) ? (1616731786) : (((/* implicit */int) (short)-6508)))), (((/* implicit */int) (signed char)122))))) && (((_Bool) (unsigned short)14150))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) -1LL)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_10) / (arr_2 [i_0]))))) : (max((var_10), (((/* implicit */long long int) max(((short)-14264), (((/* implicit */short) var_12)))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            {
                arr_10 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max((((/* implicit */int) var_12)), (var_8))))) >> (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) - (15612)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max((((/* implicit */int) var_12)), (var_8))))) >> (((((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) - (15612))) + (22843))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) arr_7 [i_2] [i_2] [i_2])))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_6 [i_1]))))))), (-27LL))))));
            }
        } 
    } 
}
