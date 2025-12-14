/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177236
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((long long int) (_Bool)1)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_16 = ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [(unsigned short)16])))) ? (((((/* implicit */_Bool) ((long long int) (signed char)-27))) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_14)) <= (arr_1 [i_0] [i_0])))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [5U])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25522))) : (((unsigned int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (_Bool)1);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)-33)) * (((/* implicit */int) (short)-1)))))))));
                        var_20 = ((/* implicit */unsigned short) ((long long int) var_13));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_12 [(short)1] [i_4] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1649530498208322087LL) : (((/* implicit */long long int) -792114783))))) ? ((-(var_8))) : (((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (11940988612976909571ULL) : (((/* implicit */unsigned long long int) var_6)))))));
        var_21 = ((/* implicit */_Bool) 2147483647);
        var_22 = ((/* implicit */short) (_Bool)1);
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_10 [i_4]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-27)))) : ((-(((/* implicit */int) var_10)))))), ((~((-(((/* implicit */int) var_3)))))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_17 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (12503169736889430327ULL) : (((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_5]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_7))) : (((/* implicit */long long int) arr_5 [i_5] [i_5] [i_5])));
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                {
                    var_24 |= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)0)), (((6505755460732642045ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24990))))))), (((/* implicit */unsigned long long int) arr_21 [i_7] [i_5]))));
                    var_25 ^= ((/* implicit */signed char) arr_19 [i_5] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_9))));
                                arr_29 [i_9] [i_9] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_7 [i_8 + 2] [i_8] [(_Bool)1] [i_7 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [0ULL])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) var_13)))) == (((var_12) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-27)))))) ? (((/* implicit */unsigned long long int) min((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((6505755460732642044ULL) - (6505755460732642043ULL))))))))) : (((((var_12) ? (6505755460732642045ULL) : (((/* implicit */unsigned long long int) 267655874)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (arr_20 [i_5] [i_5])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5])) && (((/* implicit */_Bool) ((long long int) var_5))))))) | (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : ((-9223372036854775807LL - 1LL)))))))));
    }
    var_28 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -1959132518)) : (11940988612976909570ULL))))));
    var_29 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))) ? (((/* implicit */long long int) 1073741823)) : (var_6)))), (6853681437359562154ULL)));
    var_30 = ((/* implicit */short) var_14);
    var_31 = ((/* implicit */long long int) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_12))))));
}
