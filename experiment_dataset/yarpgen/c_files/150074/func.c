/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150074
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
    var_13 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (((max((((/* implicit */unsigned long long int) var_8)), (72057594037665792ULL))) | (((/* implicit */unsigned long long int) min((573032563), (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    var_14 = ((/* implicit */signed char) var_2);
                    arr_8 [(signed char)0] [i_1 - 2] [i_0] [(signed char)0] &= ((/* implicit */int) arr_4 [i_0 - 3]);
                    arr_9 [i_0] [i_0] [i_2] = (+(((((/* implicit */int) arr_4 [i_0 - 2])) & (((/* implicit */int) (unsigned char)254)))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    arr_12 [i_0] = ((/* implicit */short) ((unsigned char) (unsigned char)205));
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_3] [i_0 - 2])) >> (((((/* implicit */int) arr_6 [i_0 - 2] [i_3 + 1] [i_1 + 1] [i_0 - 2])) - (48)))));
                }
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 3099037521U))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    for (int i_5 = 4; i_5 < 8; i_5 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)148)))))));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned short)65535))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_11))));
                            var_19 += ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
}
