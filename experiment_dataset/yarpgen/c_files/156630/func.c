/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156630
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned short) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23517))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7109)))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 268435424))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [5] [i_4] [i_3 + 1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 4278392803U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4278392786U))));
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)37691))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) -1965447036))));
                            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_7] [i_1 - 1] [i_7] = ((/* implicit */unsigned int) var_1);
                var_21 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)12] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [(unsigned short)8]))) : (((unsigned int) var_4))));
            }
            var_22 = ((/* implicit */int) var_8);
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (var_7)));
        }
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
    {
        var_24 += ((/* implicit */_Bool) (short)-32767);
        arr_26 [(unsigned short)16] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_24 [i_8])) / (1595615426U)))) ? (((unsigned long long int) arr_24 [i_8])) : (((/* implicit */unsigned long long int) max((var_10), (arr_25 [(signed char)18])))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20308)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((unsigned long long int) var_15))))));
    }
    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
    {
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (+(arr_24 [i_9]))))) % (arr_25 [(_Bool)1])));
        arr_29 [i_9] [i_9] = ((/* implicit */unsigned char) (unsigned short)65525);
        arr_30 [i_9] = ((/* implicit */unsigned short) ((int) min((((((/* implicit */_Bool) 1965447014)) ? (((/* implicit */int) (unsigned short)62958)) : (((/* implicit */int) arr_27 [19] [(unsigned char)9])))), (((((/* implicit */int) var_6)) >> (((arr_24 [18]) - (577446527))))))));
    }
    var_26 = ((/* implicit */unsigned short) (signed char)-94);
    var_27 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) : (min((16574490U), (var_11)))))), (((((/* implicit */_Bool) min((9223372036854775800LL), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) 2331036147U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)65519)) : (var_4))))))));
    var_28 += ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) != ((~(((/* implicit */int) (signed char)17)))))))));
    var_29 |= ((/* implicit */unsigned int) var_2);
}
