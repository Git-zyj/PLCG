/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11638
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
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((1152921504606842880LL) + (((/* implicit */long long int) 3769165358U)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_4))))))) << (min((min((var_1), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_0))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (~(arr_5 [i_0] [i_1] [i_1])));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_1 [i_0 - 1]) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36299)) && (((/* implicit */_Bool) var_12))))))) ? (min((min((((/* implicit */int) arr_4 [i_0] [3ULL])), (arr_1 [i_0]))), (min((arr_1 [i_1]), (var_10))))) : (((((/* implicit */int) arr_4 [i_0 - 1] [i_1])) % (((/* implicit */int) arr_4 [i_0 + 1] [i_2]))))));
                    var_19 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) arr_4 [i_0] [i_0])), (arr_1 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_4])) * ((+(((/* implicit */int) (unsigned char)188))))))) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) arr_3 [i_3 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
