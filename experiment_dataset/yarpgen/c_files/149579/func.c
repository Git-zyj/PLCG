/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149579
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
    var_13 = max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (short)-6397))) < (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((unsigned char) (_Bool)1))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(17441071464354264640ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1617)))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(arr_11 [i_1])))), ((+(arr_3 [i_0] [i_0 - 1] [i_0 - 2])))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((unsigned char) arr_6 [i_0])), (((/* implicit */unsigned char) (_Bool)0)))))));
                        }
                        arr_15 [(_Bool)1] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(arr_4 [i_0]))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((+(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2] [i_0]))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned short) ((short) (_Bool)1));
                        var_17 -= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)72))))));
                        var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_3 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                        arr_19 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)19676))))));
                        var_19 |= ((/* implicit */unsigned char) var_8);
                    }
                    arr_20 [i_0] [i_2] = ((/* implicit */_Bool) arr_3 [0ULL] [0ULL] [i_2]);
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_9)), (arr_22 [i_6])))))));
                    var_21 *= (((!(((/* implicit */_Bool) min((((/* implicit */short) arr_4 [i_1])), ((short)-17822)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((~(min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_0]);
                                arr_30 [i_7] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)19671));
                                arr_31 [i_6] [i_6] [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) % (var_0))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (18446744073709551614ULL) : (var_6)))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_9)))))))));
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_8])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)45))))) : (max((var_0), (((/* implicit */unsigned long long int) var_10))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_0] [i_0] [i_6] [i_6]))))));
                }
                var_24 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))))) <= (((((/* implicit */int) var_10)) * (((/* implicit */int) max((((/* implicit */short) var_2)), (var_7)))))));
            }
        } 
    } 
}
