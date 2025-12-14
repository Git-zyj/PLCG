/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13371
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [(_Bool)1])) ? (var_9) : (((/* implicit */long long int) arr_10 [16ULL] [i_1] [i_2] [i_3])))))))) ? ((+(((/* implicit */int) arr_13 [i_1 + 1] [i_3 + 1] [i_4 - 3])))) : (((/* implicit */int) arr_3 [(unsigned short)20]))));
                                arr_15 [(unsigned char)17] [(unsigned char)17] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_0] [i_0] [i_0] [i_4]) & (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_5)))))));
                            }
                        } 
                    } 
                    var_12 *= ((/* implicit */short) arr_13 [i_0] [i_1 + 3] [i_2]);
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (unsigned short)50581))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_2)) <= ((~(((unsigned int) var_2))))));
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((unsigned int) (_Bool)0))))));
}
