/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163039
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
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (unsigned char)117))));
                                var_17 &= ((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (unsigned char)13))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (unsigned char)98)))));
                arr_11 [(signed char)1] [(signed char)1] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (arr_3 [(unsigned short)7] [i_1] [(unsigned char)10]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_0] [i_1])), (var_8))))));
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) var_12);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((short) 0U))), (var_11))))));
}
