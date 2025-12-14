/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183339
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 += (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_1 + 1] [i_0 + 2]), (((/* implicit */unsigned short) var_2)))))) * (2251799545249792ULL))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) * (var_7)))) ? (arr_4 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) (signed char)(-127 - 1)))))))))) ? (((((/* implicit */unsigned long long int) 1U)) / (arr_4 [i_1 + 2] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 2] [i_0 + 2]) >> (((arr_3 [i_1 + 2]) + (5553172712301362722LL))))))));
                arr_7 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65517))))) * (((long long int) (unsigned short)27))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) & (((/* implicit */int) (signed char)115)))) - (2147483636)));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((var_10) <= (min((2251799545249773ULL), (((/* implicit */unsigned long long int) (unsigned char)253))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) -2147483627))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) var_14)))))));
}
