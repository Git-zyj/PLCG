/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171986
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
    var_11 *= ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (short)16687))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) arr_1 [(signed char)12]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (+(max((var_4), (((/* implicit */unsigned long long int) 9090241594377059319LL))))));
                                arr_12 [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((max((var_4), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16683))))))) / (((/* implicit */unsigned long long int) ((((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-119)))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (unsigned char)120))))) - (14602))))))));
                                var_14 += ((/* implicit */unsigned short) arr_7 [(_Bool)0] [i_3]);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_2 - 3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (min((((/* implicit */unsigned short) (signed char)-113)), (arr_0 [13LL]))))))) > (var_5)));
                }
            } 
        } 
    } 
}
