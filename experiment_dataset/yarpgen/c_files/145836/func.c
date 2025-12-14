/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145836
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    arr_8 [i_0] [i_3] [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((((int) var_1)) >= (arr_2 [i_3 + 1] [i_0] [i_0])));
                    arr_9 [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                }
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) var_4))));
            }
            for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                var_19 *= ((/* implicit */short) ((unsigned long long int) arr_4 [i_0] [i_1 - 1]));
                var_20 = ((/* implicit */unsigned short) 1632328836);
            }
            for (int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1812741104)))) ? (((/* implicit */int) ((unsigned char) var_17))) : (((((/* implicit */int) var_15)) - (-1812741104)))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-747240662074947027LL) % (((/* implicit */long long int) 4294967295U))))) ? (var_8) : (((/* implicit */int) arr_13 [i_0 + 1] [i_1 + 1]))));
                arr_16 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_5]);
                var_23 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_0 + 2])))) - (((((/* implicit */int) var_6)) & (arr_6 [i_1]))));
            }
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [6] [i_0 - 1] [6]))) != (arr_14 [i_1 + 1])));
        }
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)68))) * (((((-2150322422446672641LL) * (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (min((var_3), (((/* implicit */long long int) var_16))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_6]))) && ((!(((/* implicit */_Bool) arr_18 [i_6]))))));
        var_27 = ((/* implicit */_Bool) (~(min((arr_18 [i_6]), (arr_18 [i_6])))));
        var_28 = ((/* implicit */signed char) var_11);
    }
    var_29 = var_18;
    var_30 *= ((/* implicit */long long int) ((((((var_9) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) | (max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_18))))), ((~(((/* implicit */int) var_2))))))));
}
