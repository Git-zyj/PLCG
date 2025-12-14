/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151506
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
    var_11 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((int) var_5)) <= (-1439185691)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_0);
                            arr_11 [i_0] [i_0] [i_0] [21ULL] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [17LL] [i_0] [17LL]);
                        }
                        for (unsigned char i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */short) var_1);
                            var_14 = ((/* implicit */unsigned int) var_6);
                            var_15 = ((/* implicit */signed char) ((long long int) -1439185691));
                        }
                        var_16 = ((/* implicit */int) var_0);
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_20 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */int) ((var_9) < (((((-1439185691) + (2147483647))) >> (((/* implicit */int) (signed char)0))))));
                        var_17 ^= ((/* implicit */unsigned char) 0LL);
                    }
                    var_18 = ((/* implicit */short) -7560452665094739812LL);
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_23 [i_7] [22LL] [i_2] [22LL] = ((/* implicit */unsigned char) ((unsigned long long int) 15ULL));
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 21; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_5 [i_0]))));
                            var_20 = ((/* implicit */long long int) 1653457779887857396ULL);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_6))));
                        }
                        for (int i_9 = 1; i_9 < 20; i_9 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned long long int) ((unsigned int) -1439185666));
                            arr_30 [i_2] [i_7] [i_2] [i_9 - 1] [i_9] = ((/* implicit */unsigned long long int) (unsigned char)99);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_33 [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) ((short) var_5));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && ((_Bool)1))))));
                        }
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_4 [i_1] [i_1] [i_2]))));
                    }
                    var_25 = ((/* implicit */int) 3320794305390505848LL);
                }
            } 
        } 
    } 
}
