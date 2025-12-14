/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1224
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
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((arr_7 [i_0] [i_1] [i_1] [i_3 + 1]) ? (((/* implicit */unsigned int) max((arr_4 [i_3 - 1] [i_3 - 2]), (arr_4 [i_3 - 1] [i_3 - 1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_0])), ((unsigned short)6144))))) & (max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [(short)17])), (2054427703U)))))));
                                arr_14 [i_0] = (signed char)-42;
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 2] [(signed char)14])) >> (((/* implicit */int) ((_Bool) arr_4 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 2] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46472))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-58)), ((short)-16258))))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57344)) <= (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((signed char) arr_6 [i_1] [i_0] [i_0]))) : (((/* implicit */int) arr_0 [(unsigned short)19]))))));
            }
        } 
    } 
}
