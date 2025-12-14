/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132586
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
    var_17 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1023)) & (var_14)))) > (var_2)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_5 [i_1]);
                    arr_9 [i_1] [i_1] [i_1] [i_2] = arr_6 [i_0] [i_0] [i_0] [9];
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                                var_19 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1]);
                                var_20 = ((/* implicit */short) arr_6 [i_0] [i_1] [i_2 - 2] [i_3]);
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_2 - 1] [i_2 - 1] = ((/* implicit */signed char) -2079086360);
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -750720533)) || (((/* implicit */_Bool) arr_2 [i_0])))))) / (arr_0 [i_0])));
        var_21 = ((/* implicit */unsigned long long int) (signed char)-1);
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */short) ((arr_2 [i_5 + 2]) / (arr_2 [i_5 + 3])));
        arr_20 [i_5 + 2] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_18 [i_5 + 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20269))))))));
    }
    var_23 = ((/* implicit */short) (+((-(((var_10) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92)))))))));
}
