/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156416
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
    var_17 |= ((/* implicit */unsigned char) ((_Bool) var_8));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) 33550336LL);
                    arr_11 [i_2] [i_2] [i_2] [(unsigned short)9] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 2])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        arr_16 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)43628)) : (((/* implicit */int) (_Bool)1))));
                        arr_17 [i_2] = ((/* implicit */unsigned short) arr_15 [i_1 - 1] [i_2 + 2] [i_3 - 2] [i_3]);
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_0] [3LL] [21LL]))));
                        var_18 = ((/* implicit */long long int) ((unsigned int) 5106508501719114113ULL));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_19 &= arr_15 [i_1] [i_1] [i_1 + 2] [i_5];
                            arr_24 [i_0] [i_0] [13U] [17LL] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -347308135)) ? ((+(6793477835229189269ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1])))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) var_7);
    var_21 = ((/* implicit */short) var_13);
}
