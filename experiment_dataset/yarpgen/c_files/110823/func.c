/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110823
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
    var_13 = ((/* implicit */short) max((var_13), (var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0 - 1] [(unsigned short)19] [i_0 - 1] [i_3] [i_4] [i_1] [(signed char)6] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) & (var_5))) >> (((((((-3359819312957722361LL) + (9223372036854775807LL))) >> (((3359819312957722359LL) - (3359819312957722323LL))))) - (85325908LL)))));
                                var_14 = ((/* implicit */int) (_Bool)0);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 ^= (unsigned short)16148;
                    var_16 ^= ((/* implicit */unsigned char) ((long long int) var_10));
                    arr_16 [i_0] [5LL] [i_5] = ((unsigned long long int) var_5);
                    var_17 *= ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_4))) + (((/* implicit */int) var_1))))) + (var_2));
                    arr_17 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) ((unsigned int) var_8));
                }
                for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_8))));
                    var_19 -= ((/* implicit */signed char) (_Bool)1);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_7);
    var_21 ^= var_9;
}
