/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117223
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) arr_2 [(signed char)10] [i_1]);
                    arr_8 [i_0] [i_0] [0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 4]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_3] [5U] [2LL] = ((/* implicit */unsigned char) arr_2 [i_0 - 2] [i_0]);
                                var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [(unsigned short)5] [i_1 + 4]))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_12 [(_Bool)1] [i_2 + 1] [i_1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (1356844312U)));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        for (short i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((arr_1 [i_5 - 1] [i_5 - 1]) / (((unsigned int) arr_1 [i_5 - 1] [i_6]))));
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(_Bool)1] [i_6 + 1] [(_Bool)1] [i_6])) << (((((/* implicit */int) ((unsigned char) (unsigned char)79))) - (63)))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_6 - 1])))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6]))) | (289078112U)))))));
            }
        } 
    } 
}
