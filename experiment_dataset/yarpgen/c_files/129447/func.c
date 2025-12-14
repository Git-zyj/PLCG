/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129447
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
    var_18 -= ((/* implicit */long long int) min((var_1), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((8394685517636508347LL) / (-1LL))) > (((/* implicit */long long int) max((((((/* implicit */int) var_5)) << (((((-1810470273) + (1810470298))) - (12))))), (arr_9 [i_2] [i_1] [i_0]))))));
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */_Bool) var_12);
                                var_22 = max((((((/* implicit */_Bool) max((arr_12 [i_3] [i_4] [i_3] [9U] [i_0] [i_3]), (((/* implicit */long long int) var_3))))) ? (6795367939668755667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) var_5))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 3])) ? (((/* implicit */int) arr_8 [i_3 + 1])) : (((/* implicit */int) arr_8 [i_3 - 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_0])))) : (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_2])))));
                                var_24 = ((/* implicit */int) max((var_24), (min(((~(((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1])))), (((/* implicit */int) (unsigned short)3123))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_26 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 12LL)) ? (var_1) : (((/* implicit */int) arr_16 [i_5])))), (((((/* implicit */_Bool) (unsigned char)249)) ? (var_13) : (((/* implicit */int) var_16))))))), (max((((unsigned long long int) 2859471774970517783ULL)), (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */int) var_3)))))))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((-3LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))))))));
        var_28 &= ((/* implicit */unsigned int) max((((/* implicit */int) var_11)), ((+(((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 3) 
    {
        var_29 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (var_0) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) arr_16 [i_6 - 4])) : (var_7)));
        arr_20 [i_6] = ((/* implicit */int) ((signed char) arr_15 [i_6 - 1]));
        arr_21 [(signed char)22] &= ((/* implicit */unsigned char) ((long long int) 36028522141057024LL));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_14 [i_6] [i_6]))) | ((+(((/* implicit */int) arr_16 [i_6]))))));
    }
}
