/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13988
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
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned char)159))));
                    arr_8 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) var_2);
                    arr_9 [i_0] [i_2] [i_1] = ((/* implicit */int) ((max(((!(((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1] [i_0])))))) ? (min((((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0 + 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [15ULL] [i_0])) || (var_1)))))) : (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1] [i_1 + 1] [(short)8]), (arr_3 [i_1 + 1] [i_1 + 1] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6418493489416102208ULL)) || (((/* implicit */_Bool) 2188057776U)))) ? (((/* implicit */int) min((arr_14 [i_4] [i_4 - 1]), (arr_14 [i_4] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_4] [i_4 - 1])))))))));
                arr_17 [i_3] [i_4 - 1] = ((/* implicit */int) ((((unsigned long long int) max(((short)1534), (((/* implicit */short) (_Bool)0))))) - (var_3)));
                arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((signed char) max((((_Bool) var_14)), (((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
}
