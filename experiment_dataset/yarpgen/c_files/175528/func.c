/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175528
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
    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30017)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))) ? (((18014397972611072LL) + (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_1))))))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (arr_3 [i_0 + 4])));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 4])) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)2047))))))));
        var_12 = ((/* implicit */unsigned long long int) var_3);
        var_13 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0])), (((unsigned char) 2983168535U))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_14 |= ((/* implicit */short) ((arr_6 [i_1] [0ULL]) >= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [(signed char)14]))))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (short)-15735)))));
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (2983168535U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [(short)5]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            var_17 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (1311798761U)));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_18 = ((/* implicit */short) (!(arr_10 [i_3] [i_1 - 1] [i_2] [i_1 - 1])));
                var_19 = ((/* implicit */short) arr_2 [i_1 - 1] [i_2 + 1]);
            }
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (3648209553U)));
                arr_14 [i_1] [i_2] [i_1] [i_1] = (((!(((/* implicit */_Bool) (unsigned short)33461)))) ? (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_2 + 1] [i_1])) : ((+(2983168535U))));
                var_21 = ((/* implicit */short) (+(arr_8 [7LL] [i_2] [i_1 + 1])));
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1016U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_7 [i_1] [i_2] [i_5])))) : (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) var_1)))))));
                var_24 &= var_1;
            }
        }
        var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_1 - 1] [(unsigned char)0] [i_1]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) max((min((min((4256449592037829073ULL), (((/* implicit */unsigned long long int) 2983168531U)))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_0 [13]))));
        var_27 ^= ((/* implicit */short) (_Bool)1);
    }
}
