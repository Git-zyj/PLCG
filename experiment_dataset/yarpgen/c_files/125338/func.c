/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125338
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (2ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (signed char)-1);
                                var_20 += ((/* implicit */signed char) (((~(arr_10 [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1]))) & (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)1))) << (((arr_6 [i_4 - 1] [i_2]) - (3749294474U))))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (signed char)1))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_7);
                    var_23 = ((/* implicit */int) min((var_14), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-10))))))));
                    var_24 += ((/* implicit */signed char) ((((/* implicit */long long int) (+(((var_4) - (((/* implicit */int) var_13))))))) - (((((/* implicit */_Bool) (unsigned char)0)) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))))) : (((/* implicit */long long int) ((int) 594560979)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (signed char)7);
}
