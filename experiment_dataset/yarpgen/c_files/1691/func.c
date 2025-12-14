/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1691
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
    var_17 = var_9;
    var_18 ^= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (arr_6 [i_0] [i_1])));
                                arr_15 [i_3] [i_4] [i_3] [i_3] [i_2] [i_1] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) > (((/* implicit */int) (unsigned char)112))));
                                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) > (((/* implicit */int) (unsigned char)93)))))));
                                arr_16 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 1990384636391454364ULL);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((/* implicit */int) ((-1725223287924395514LL) > (var_9)))) : (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1]))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 4])) ? (((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 2] [i_2 - 4] [i_2])) : (((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 4] [i_2 + 1] [i_2]))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) >= (arr_6 [i_1] [i_2 - 4])));
                        var_21 = ((/* implicit */unsigned short) arr_0 [i_5] [i_1]);
                        var_22 = ((/* implicit */unsigned long long int) -1725223287924395514LL);
                        var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) 70368744177663ULL));
                    }
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_6] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_2 + 1] [i_2] [i_1] [i_6])) ? (((/* implicit */int) (unsigned short)14308)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 3] [i_2] [i_2 - 2]))) : (((unsigned long long int) arr_22 [i_0] [i_6]))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_6))));
                        arr_25 [i_1] [i_1] [i_6] [i_6] [i_2] = arr_13 [i_2 + 2] [i_2 - 1];
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_0]))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))) > (((((/* implicit */_Bool) 14602432525277818819ULL)) ? (var_4) : (8ULL))))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), ((-(2860413153066135366ULL)))));
    }
}
