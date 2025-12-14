/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123707
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) 2304717109306851328LL)) ? (((/* implicit */int) (unsigned short)37924)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2]))))), (((-2304717109306851328LL) & (-2304717109306851329LL))))));
                    var_18 = ((/* implicit */unsigned short) min(((-(arr_1 [i_1] [i_0]))), (((/* implicit */unsigned long long int) 1898609968U))));
                    var_19 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)27620)) <= (((/* implicit */int) arr_2 [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned char) var_11);
}
