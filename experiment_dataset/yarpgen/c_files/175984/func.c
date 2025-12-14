/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175984
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_2] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) ((unsigned short) 17305586172134331837ULL))), (var_4))));
                                var_20 = ((/* implicit */int) ((long long int) min((arr_4 [i_1 - 1] [i_2] [i_4 - 1]), (arr_4 [i_1 + 3] [i_1 + 3] [i_4 + 1]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((max((arr_4 [i_0] [i_1] [i_1 - 1]), (arr_4 [i_1] [i_1 - 1] [i_1 - 4]))), (((/* implicit */unsigned long long int) var_4))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1 - 1])) ? ((-(arr_8 [i_0]))) : (max((((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1 - 4])))), (((/* implicit */int) (short)1023))))));
                    var_23 -= ((/* implicit */unsigned long long int) ((long long int) 1552685368));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) min((1141157901575219779ULL), (1141157901575219779ULL)));
    var_25 = ((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((+(((-639649902) + (((/* implicit */int) (unsigned short)50194))))))));
    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_19)), (max((((/* implicit */unsigned long long int) (_Bool)0)), (17305586172134331837ULL)))));
}
