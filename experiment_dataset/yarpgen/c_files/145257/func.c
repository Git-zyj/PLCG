/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145257
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
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = var_9;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)6] [i_0]))) : (arr_2 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) * (((/* implicit */int) (signed char)33))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_11)))) : (((/* implicit */int) arr_6 [i_0])))) : (((((/* implicit */_Bool) (signed char)-11)) ? ((~(((/* implicit */int) (signed char)-38)))) : ((+(((/* implicit */int) (signed char)51))))))));
                    var_18 = ((/* implicit */long long int) 1965345366);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((max((var_6), (arr_13 [i_1] [i_2] [i_4]))) >> (((((unsigned int) (signed char)-11)) - (4294967252U)))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_3] [i_1] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_13 [i_4] [i_1] [i_2]) == (((/* implicit */long long int) ((var_2) << (((var_3) - (2653530715U))))))))) | (((((int) (signed char)73)) - (((/* implicit */int) ((unsigned char) (short)25798)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
