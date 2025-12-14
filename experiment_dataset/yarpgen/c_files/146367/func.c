/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146367
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (min((((/* implicit */unsigned long long int) var_11)), (max((11547250816326991521ULL), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-2075)) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? ((~(677629271U))) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (unsigned short)65535)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)2101)) ? (((((/* implicit */_Bool) var_5)) ? (arr_9 [2ULL] [2ULL] [2ULL] [4ULL]) : (arr_14 [1ULL] [i_1] [1] [(signed char)9]))) : ((-(((/* implicit */int) var_3)))))) ^ (min(((+(((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_4))))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */short) min(((~((~(((/* implicit */int) var_0)))))), (((/* implicit */int) (short)-9184))));
            }
        } 
    } 
}
