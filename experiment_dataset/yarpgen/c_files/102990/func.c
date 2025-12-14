/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102990
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
    var_16 = ((/* implicit */short) max((((((unsigned int) (short)22266)) % (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((unsigned int) var_11))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22280)) ? (((/* implicit */int) (unsigned short)59900)) : (((/* implicit */int) (short)-32566))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) -6856853986014023082LL))))))));
            var_18 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)170)))) >= (((/* implicit */int) ((((/* implicit */int) var_3)) >= (arr_1 [i_1] [i_0]))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_12 [8] [14ULL] [i_3] |= ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                var_19 = (+(((/* implicit */int) (short)22285)));
                var_20 = ((/* implicit */short) (+(arr_1 [i_2 - 1] [i_2])));
            }
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)5635)))))));
        }
        arr_13 [i_0] = ((/* implicit */short) ((unsigned long long int) max((arr_5 [i_0]), (arr_5 [i_0]))));
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 7; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) (~(arr_5 [i_4 + 1])));
        arr_17 [i_4] = ((((((/* implicit */int) (short)-26424)) + (2147483647))) >> (((((/* implicit */int) (short)-18522)) + (18527))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3))));
        var_24 = ((/* implicit */long long int) (unsigned char)176);
    }
    var_25 = var_10;
    var_26 = ((/* implicit */unsigned char) var_14);
    var_27 = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_8)))) <= (((/* implicit */int) var_6)))) ? (((((var_0) < (((/* implicit */long long int) 4194303U)))) ? (((((/* implicit */int) (unsigned short)59908)) % (((/* implicit */int) var_15)))) : (((/* implicit */int) var_8)))) : ((((((~(((/* implicit */int) (short)21385)))) + (2147483647))) >> (((var_2) - (11581326503737296236ULL)))))));
}
