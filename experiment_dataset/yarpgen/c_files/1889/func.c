/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1889
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_0 [(short)1] [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)5] [i_1]))))) && (((/* implicit */_Bool) 9223372036854775807LL))))), (max((arr_3 [3U] [i_1] [i_1]), (arr_4 [i_0])))));
                var_18 = ((/* implicit */short) min((((((1) + (((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_1] [0LL])) && (((/* implicit */_Bool) 1))))))), (arr_4 [i_0])));
                var_19 &= ((/* implicit */unsigned long long int) ((((arr_2 [i_0]) + (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) (short)-8162)))))) <= (max((-651135127), (arr_3 [i_1] [i_0] [i_1])))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1417771152), (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_8))))) ? (max((var_9), (var_4))) : (((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */int) (short)-27193)) : (((/* implicit */int) var_10))))))));
}
