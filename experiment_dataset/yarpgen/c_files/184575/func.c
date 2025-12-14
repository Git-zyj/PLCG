/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184575
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-20838))) & (3503725629U)))))) ? (((((((/* implicit */int) (signed char)-2)) + (2147483647))) >> (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) var_11)))) - (24547))))) : (((/* implicit */int) var_10))));
    var_13 = var_3;
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) 791241666U);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [(short)2] [(signed char)1] [i_4] = ((/* implicit */unsigned int) var_3);
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (((signed char) var_10))))) ? (((/* implicit */int) (unsigned short)40695)) : (((((/* implicit */_Bool) arr_9 [i_3] [(signed char)16] [i_4 + 1] [i_4])) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)53530)))) : (((/* implicit */int) (signed char)19))))));
                                var_16 = ((/* implicit */unsigned short) arr_1 [(short)4]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_11))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (signed char i_6 = 4; i_6 < 20; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_11))));
                    var_19 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [(short)7])) : (((/* implicit */int) arr_16 [i_0] [i_0])))), (((/* implicit */int) (signed char)-124))));
                    var_20 *= ((/* implicit */unsigned int) min((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) (+(((unsigned long long int) ((signed char) var_10)))));
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) -13);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((arr_24 [i_7 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26484))))))));
        arr_26 [i_7] = ((((/* implicit */_Bool) arr_25 [i_7 - 2] [i_7 - 2])) ? (((unsigned long long int) (signed char)-8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)12)))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((~(arr_24 [(unsigned char)6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1852))))))));
    }
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_9)) : (var_3)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : ((~(1085429746U)))))));
}
