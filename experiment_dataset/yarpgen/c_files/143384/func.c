/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143384
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
    var_10 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((_Bool) arr_1 [i_0] [6LL]));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            var_12 = (!(((/* implicit */_Bool) ((65535U) << (((1793750618) - (1793750609)))))));
            var_13 = ((/* implicit */signed char) arr_4 [i_2] [i_2]);
        }
        var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)480))) & (arr_8 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [10])), (1774631902)))) : (arr_9 [i_1] [i_1]))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1774631904)))) ? (-1774631898) : (-1793942034))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_14 [i_4] = var_3;
                    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((arr_9 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9)))))) > (((/* implicit */unsigned long long int) 4261568230U))));
                    arr_15 [8] = ((/* implicit */long long int) (unsigned short)40436);
                }
            } 
        } 
        arr_16 [(unsigned short)1] = ((/* implicit */unsigned short) arr_13 [7U] [i_1]);
        arr_17 [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_2)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) << (((-1774631902) + (1774631918)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)30410))) : (((arr_19 [i_5]) ? (-8896830402179029537LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5])))))));
        var_17 = ((/* implicit */unsigned long long int) 1774631898);
        var_18 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) : (var_6));
    }
}
