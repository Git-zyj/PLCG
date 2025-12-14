/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124177
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
    var_12 -= ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_3)) + (12240))))))))) ? (max((min((var_1), (((/* implicit */unsigned long long int) var_2)))), (min((((/* implicit */unsigned long long int) var_2)), (var_4))))) : ((((~(var_1))) << (((((/* implicit */int) var_10)) - (67))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) var_2)) ^ (var_11)))))) | (((((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) & (max((((/* implicit */unsigned long long int) var_3)), (var_6)))))));
    var_14 += min((((min((((/* implicit */unsigned long long int) var_11)), (var_1))) << ((((~(((/* implicit */int) var_7)))) + (20098))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))) - ((+(var_2)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = min((((((min((arr_0 [i_0]), (((/* implicit */long long int) var_7)))) + (9223372036854775807LL))) << (((((max((arr_0 [i_0]), (arr_0 [i_0]))) + (2588510003354488792LL))) - (11LL))))), (((((((arr_0 [i_0]) + (9223372036854775807LL))) << (((var_6) - (11065777336540231ULL))))) & ((~(arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_5)), (arr_0 [(unsigned char)19]))) >> (((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (3912033022U)))))), (min((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) var_5)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-12530)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)6760)) - (6758))))) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)42)) != (-27))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                arr_10 [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
            }
            for (int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                arr_14 [i_3] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned short)2] [i_1])))) % (max((var_2), (((/* implicit */int) var_10))))))), (var_6)));
                var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((var_11) << (((var_8) + (8050535437324999546LL))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-21)))))))), (((((arr_0 [i_1]) | (((/* implicit */long long int) arr_1 [i_0])))) - (min((4783724667922227756LL), (((/* implicit */long long int) var_5))))))));
                arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(min((var_8), (((/* implicit */long long int) var_5)))))) > (((min((arr_0 [i_1]), (var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -27)) < (3205624520502721939ULL)))))))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) max((arr_9 [i_0] [i_1] [i_3] [i_3]), ((+(((/* implicit */int) var_3))))))) % (min((((/* implicit */long long int) arr_13 [i_3] [i_1] [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0]))))))))));
            }
            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_5)))) || (((/* implicit */_Bool) ((arr_4 [i_0] [(_Bool)1]) | (((/* implicit */int) var_0))))))))) * (min((max((((/* implicit */unsigned int) var_0)), (var_11))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1])))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                var_20 -= var_0;
                arr_20 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) arr_1 [i_1]);
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & ((+(((((/* implicit */_Bool) arr_17 [(unsigned char)15] [i_0] [i_0] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) var_11))))))));
                var_22 = ((/* implicit */unsigned int) var_3);
            }
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_23 ^= max((((/* implicit */int) (short)-12530)), (2132068537));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_2))));
            }
        }
        arr_26 [i_0] [i_0] = (+((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_5)) : (arr_16 [i_0]))))));
    }
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        arr_29 [i_7] [i_7] |= ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_6 [i_7]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_7] [(unsigned char)17] [18])), (var_8)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_17 [i_7] [i_7] [i_7] [i_7]), (var_3))))))))));
        var_25 -= ((/* implicit */long long int) (~((-((+(((/* implicit */int) arr_18 [i_7] [i_7] [i_7]))))))));
    }
}
