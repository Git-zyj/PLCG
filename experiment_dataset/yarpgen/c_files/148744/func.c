/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148744
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18098)) ? ((-(1673088388U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47410)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)196))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18098)) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_1])) : (((/* implicit */int) arr_0 [i_1 - 3] [i_1])))))));
                    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47421))) : (min((2161727821137838080LL), (((/* implicit */long long int) (unsigned short)47410)))))), (((/* implicit */long long int) arr_0 [9] [i_2]))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!((_Bool)0)));
                }
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21322)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (short)-21324)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))) : (max(((+(arr_10 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                    var_18 = ((/* implicit */_Bool) ((-2147483636) % (((/* implicit */int) (_Bool)1))));
                }
                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) (unsigned short)5)) ? (var_9) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 + 3]))))) | (((long long int) (unsigned char)205))));
                var_20 = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] = ((/* implicit */short) var_4);
                arr_20 [5] = ((/* implicit */unsigned char) arr_1 [(unsigned short)4]);
            }
        } 
    } 
}
