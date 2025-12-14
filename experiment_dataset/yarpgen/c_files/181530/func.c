/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181530
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
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */unsigned int) 2147483647);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) min((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 - 1])))))));
                    var_16 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((long long int) 3377782532531859776ULL)) : (((((/* implicit */_Bool) 573056037)) ? (2304055742569354160LL) : (((/* implicit */long long int) var_1)))))));
                    var_17 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0 - 1] [0] [i_1 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) == (arr_5 [i_0] [i_1 + 1] [i_1 + 1] [i_1]))))) : (((((/* implicit */_Bool) 2573857677U)) ? (((/* implicit */unsigned long long int) -573056026)) : (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3377782532531859777ULL) << (((((/* implicit */int) arr_2 [9] [5U] [(unsigned short)14])) - (165)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -8LL)))) : (arr_5 [i_0] [i_1] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
}
