/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183248
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)4640)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) (signed char)90)))), ((~(((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned int) min((arr_4 [i_0]), (arr_4 [i_1 + 1])))))));
                arr_8 [10U] [i_0] [(short)2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((long long int) ((arr_5 [i_0]) == (((/* implicit */int) arr_0 [15ULL] [i_0]))))) : ((-(var_7)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_0);
    var_15 = ((/* implicit */_Bool) -1417728923);
}
