/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130625
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
    var_13 -= ((/* implicit */unsigned char) var_2);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((~(max((((/* implicit */int) var_2)), (var_6))))) | (var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (7930222870625779947ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) 2147450880)) ? (((/* implicit */unsigned long long int) ((int) 10516521203083771670ULL))) : (7930222870625779945ULL)));
                    var_16 = ((/* implicit */short) 10516521203083771669ULL);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_4)))) ? (var_6) : (((((int) 7930222870625779947ULL)) * (((/* implicit */int) (!(var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (var_5) : (((/* implicit */int) var_10)))))))))))));
                                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((4007509659U), (287457620U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)8649))) : (((((/* implicit */_Bool) 3894768636U)) ? (9141984012528915567ULL) : (((/* implicit */unsigned long long int) 2)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((int) var_9))))), (var_4)));
                                arr_26 [i_0] [i_1] [i_1] [i_1] [i_7 + 1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) max((arr_24 [i_0] [i_1] [(_Bool)1] [i_6] [3U]), (((/* implicit */unsigned long long int) -6))))) ? (((/* implicit */int) var_2)) : (min((var_0), (735389557))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_29 [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)8672)), ((unsigned short)28047)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10516521203083771657ULL)) ? (-3) : (var_6)))) : (max((arr_23 [i_1]), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) 7U))));
                    arr_30 [i_0 + 3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (short)8649)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -283654956)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3]))) : (var_11))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_35 [i_0] [i_1] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) -1221521503106598003LL)), (var_11))), (((/* implicit */unsigned long long int) var_0))));
                    arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((long long int) (unsigned char)63)) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [(_Bool)1] [i_1] [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)8649)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((int) var_10)))))));
                    arr_37 [i_1] [i_1] = var_3;
                }
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    arr_40 [2] [i_1] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) arr_4 [12LL] [i_0 + 2] [12LL]))))));
                    arr_41 [i_0] [i_1] [i_1] = ((/* implicit */int) (-(max((arr_5 [5] [5]), (((/* implicit */unsigned long long int) ((1800645744U) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                }
                for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    arr_44 [i_0] [i_0] [i_11] [i_11] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)51))))) : (((((/* implicit */_Bool) arr_15 [i_0])) ? (arr_23 [i_11]) : (((/* implicit */unsigned long long int) arr_18 [i_11] [i_11] [i_11] [i_11]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_48 [i_0] [i_1] [i_0] [i_1] [i_11] [i_12] = ((/* implicit */unsigned char) max((((var_5) | (((((/* implicit */_Bool) 13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28047))) > (6597608456732076709ULL))))) ? (max((((((/* implicit */unsigned int) -2)) * (arr_25 [i_12] [(unsigned short)13] [(_Bool)1] [i_1] [(short)13]))), (((/* implicit */unsigned int) ((var_9) + (-7)))))) : (arr_32 [i_12] [i_11] [i_0 + 2]))))));
                        arr_49 [i_0] [i_1] [i_11] [i_12] = ((/* implicit */short) max((min((((((/* implicit */_Bool) var_7)) ? (9223372036854775780LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((var_0) & (-1)))))), ((~(((((/* implicit */_Bool) 2892684322U)) ? (((/* implicit */long long int) var_6)) : (var_4)))))));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (unsigned short)127);
}
