/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137934
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 3154156534U)) || ((_Bool)1)))) : (((/* implicit */int) (unsigned char)78))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 3] [14ULL] [i_3] [i_2] [i_0] = ((/* implicit */short) (+(arr_3 [i_1 - 3])));
                                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10259))) % (((arr_6 [i_4] [i_1] [i_2] [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] &= (short)5851;
                                var_20 = arr_0 [i_1] [i_1];
                                arr_22 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1 + 2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 266338304U)))) : (arr_17 [i_6] [i_5] [i_0] [i_0])));
                                var_21 = ((/* implicit */short) arr_9 [i_1 - 3] [i_1] [i_2] [(unsigned short)16]);
                                arr_23 [i_2] [(short)9] [i_5] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_5] [i_6]);
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1350668523U)) ? (((-3215286600647687213LL) / (((/* implicit */long long int) ((/* implicit */int) (short)19940))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    arr_25 [4] [(unsigned char)14] [i_2] [i_2] = ((/* implicit */long long int) arr_20 [i_0] [i_1] [i_2]);
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) max((var_22), (((long long int) arr_4 [i_0] [i_0] [i_0]))));
    }
    var_23 |= ((/* implicit */unsigned short) var_4);
}
