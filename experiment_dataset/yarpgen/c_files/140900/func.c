/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140900
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : ((~(arr_0 [i_0] [i_0])))));
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1 - 1] [i_1 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (arr_4 [i_1]))), (((/* implicit */unsigned int) min((arr_1 [i_1]), (arr_0 [i_1] [i_1])))))))));
        arr_6 [1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -207312765)), (16LL))))));
        var_11 += ((/* implicit */_Bool) arr_3 [i_1 - 3]);
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((arr_3 [i_1 - 4]) >> (((arr_3 [i_1 - 1]) - (1842984862U))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)96)))), (((/* implicit */int) ((7LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))))))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_13 -= ((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) ((1099511627775LL) > (((/* implicit */long long int) 268435455)))))));
                    arr_17 [i_2] [i_3] = ((/* implicit */int) ((min((5059205518501725668LL), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4])) <= (((/* implicit */int) (_Bool)1))))))) == (((/* implicit */long long int) -268435442))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 1099511627780LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_15 = max((((/* implicit */long long int) (~(arr_0 [i_4] [3])))), (((((-1099511627771LL) + (9223372036854775807LL))) >> (((1099511627772LL) - (1099511627747LL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_6 + 1])), (((max((arr_1 [i_4]), (arr_0 [i_2] [i_5]))) / (((/* implicit */int) (unsigned short)53467))))));
                                var_17 = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
