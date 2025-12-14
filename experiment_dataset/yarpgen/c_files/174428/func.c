/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174428
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
    var_16 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((-3) <= (var_2)))))), (var_6)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_4 - 2]), (arr_2 [i_4 - 2])))) ? (arr_2 [i_4 - 1]) : (min((arr_2 [i_4 - 2]), (((/* implicit */long long int) var_14))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-2362)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)9162)) : (arr_13 [i_0] [i_1] [i_0] [i_0] [i_0])))), (((((/* implicit */unsigned long long int) arr_2 [i_0])) * (var_11)))))));
                                var_20 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2386))) : (430569422U))))) + (((/* implicit */unsigned int) min((-1209697335), (((/* implicit */int) (unsigned short)61071)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) var_5);
                    var_22 = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
}
