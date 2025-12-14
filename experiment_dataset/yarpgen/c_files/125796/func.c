/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125796
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max(((+(((var_4) / (((/* implicit */unsigned long long int) 6)))))), (var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) arr_2 [i_0])))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((unsigned long long int) arr_11 [i_0] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0])), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)29312)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */long long int) (!(var_10)))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (var_3))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((_Bool) (_Bool)1)))));
                            var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62979))))), (var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_4)));
}
