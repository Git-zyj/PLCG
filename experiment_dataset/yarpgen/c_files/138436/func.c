/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138436
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
    var_14 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2 + 2] = ((/* implicit */short) (((+((+((-9223372036854775807LL - 1LL)))))) / ((-(((((/* implicit */_Bool) -2052055308)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5534)))))))));
                    var_15 += ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) > (9223372036854775807LL)))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_2 + 1] [(signed char)3] [i_0])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_1 + 2] [i_0])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (var_4)));
}
