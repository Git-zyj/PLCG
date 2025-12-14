/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136146
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
    var_18 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_9)) - (((((/* implicit */int) var_17)) - (1673325677)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) (short)21589)), (var_16)))));
                                arr_15 [i_4 - 1] [i_4] [i_2] [i_4] [i_0 - 4] = ((/* implicit */unsigned short) arr_13 [i_4] [i_4 - 2] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 2]);
                                arr_16 [i_4] [i_1] [(unsigned char)9] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [11ULL] [i_4 - 2] [i_0 + 2]))))) ? (((int) arr_5 [i_0 + 2] [i_4 - 2] [i_0 + 2])) : ((~(((/* implicit */int) arr_5 [i_0 - 3] [i_4 + 1] [i_0 - 3]))))));
                                arr_17 [i_4] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((((_Bool) -1LL)) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)206)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6 - 3] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_11 [i_0 - 4] [12ULL] [(signed char)4]) : (((/* implicit */long long int) 2540864039U)))))));
                                var_19 += ((/* implicit */unsigned int) (_Bool)0);
                                var_20 -= max((((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_5 + 3] [i_6 - 3] [i_6 - 2] [i_6 - 4] [i_6 - 2])) ? (((/* implicit */int) arr_13 [i_0 - 4] [i_5 + 1] [i_6 - 4] [i_6 + 1] [i_6] [i_6 - 4])) : (((/* implicit */int) arr_13 [i_0 - 4] [i_5 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6])))), (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_5 - 1] [i_6 - 4] [i_6 - 2] [i_6 - 4] [i_6 - 4])) ? (((/* implicit */int) arr_13 [i_0 - 2] [i_5 - 1] [i_6 - 4] [i_6 - 3] [i_6 - 4] [(unsigned char)1])) : (((/* implicit */int) arr_13 [i_0 + 2] [i_5 + 2] [i_6 - 4] [i_6 - 2] [i_6 - 2] [i_6 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
