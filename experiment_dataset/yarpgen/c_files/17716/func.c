/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17716
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
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) 18446744073709551604ULL);
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((long long int) arr_10 [i_0] [i_0])) : (max((2184709643106715815LL), (((/* implicit */long long int) arr_5 [i_1]))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_2]))))) : (((/* implicit */long long int) 2006340397))));
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */unsigned long long int) min((((-1893119021) / (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */int) var_0);
}
