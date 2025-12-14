/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171020
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_4 [4U] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % ((((+(arr_3 [i_1]))) ^ (((((/* implicit */int) (short)32767)) << (((var_1) - (4245912089U)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [(unsigned char)3] [i_3] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 3] [i_2]))))) / (arr_7 [i_0] [(unsigned char)10])));
                                arr_14 [i_0] [i_0] [(signed char)10] [(signed char)10] [i_4] = ((/* implicit */signed char) (+((-(((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) var_4)))))))));
                            }
                        } 
                    } 
                    var_12 &= ((/* implicit */unsigned int) (short)32767);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_0] = ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-10549)) : (((/* implicit */int) var_2))));
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)96))));
                }
            }
        } 
    } 
}
