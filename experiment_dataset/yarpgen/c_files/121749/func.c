/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121749
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
    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) != (((((/* implicit */_Bool) (unsigned short)26716)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_1 [i_0]))));
                    var_17 += ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-4108038810649581464LL)))) ? (((arr_4 [i_0] [i_0] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [2U] [i_0]))) : (arr_0 [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (arr_3 [i_0]))))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_2]))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
}
