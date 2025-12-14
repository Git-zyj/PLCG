/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150237
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
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)8191);
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) -21)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (unsigned char)55))));
                var_20 ^= ((/* implicit */long long int) arr_2 [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) 2);
                    var_22 = arr_3 [i_2];
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_3 + 1] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1]);
                        var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) var_9)) <= (670141266572660859ULL)))));
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)12636);
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = arr_1 [i_4];
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2])))))));
                        var_25 = ((/* implicit */int) 17776602807136890757ULL);
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0]);
                        arr_19 [i_1] [i_1] [i_2] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                        arr_23 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) ((int) arr_7 [i_1] [i_2 + 2] [i_6]));
                        arr_24 [i_0] [14LL] [14LL] [i_1] = ((/* implicit */unsigned int) var_0);
                        arr_25 [i_0] [i_1] [16ULL] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
                        arr_26 [i_6] [i_1] [i_1] [i_1] [(unsigned char)10] &= ((/* implicit */_Bool) (~(17776602807136890757ULL)));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) var_14);
                    var_29 += ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0]))));
                    arr_30 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */signed char) -2093803240);
                }
                var_30 *= 5757612351811516703ULL;
            }
        } 
    } 
    var_31 -= ((/* implicit */unsigned short) (~(((unsigned int) ((5512907749058371119ULL) * (670141266572660858ULL))))));
}
