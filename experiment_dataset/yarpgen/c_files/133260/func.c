/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133260
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
    var_20 = ((/* implicit */unsigned long long int) var_19);
    var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) min((var_12), (((/* implicit */short) var_10))))) + ((-(var_13))))));
    var_22 ^= var_5;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (short)-8192);
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [3ULL])))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(short)0] [i_1] [i_2] [i_4])) || (((/* implicit */_Bool) arr_2 [i_0]))));
                                arr_13 [i_0] [i_1] [(signed char)12] [i_1] [i_3] [i_1] = ((/* implicit */signed char) var_13);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */short) var_19);
            }
        } 
    } 
}
