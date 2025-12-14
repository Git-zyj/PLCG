/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142597
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
    var_19 = ((/* implicit */long long int) min((var_19), (((((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) var_3)) : (var_1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_0)))))))) : (((((-2826228809293589146LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)65535)) - (65534)))))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((max((max((((/* implicit */unsigned long long int) 0U)), (var_14))), (max((((/* implicit */unsigned long long int) var_1)), (var_0))))), (((/* implicit */unsigned long long int) ((long long int) ((var_5) ? (((/* implicit */unsigned long long int) -393490498)) : (9202731510744277755ULL)))))))));
    var_21 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_17))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_2] [i_2])), (arr_0 [i_0] [i_1]))))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((min((((/* implicit */long long int) 393490497)), ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) + (9223372036854775807LL))) >> ((((+((+(var_13))))) - (1643113687706299538LL))))))));
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_14) : (var_14)))) && (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2023813249)) ? (((/* implicit */int) var_8)) : (arr_13 [i_0] [i_0] [i_2] [i_3 - 2] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) << (((/* implicit */int) (unsigned char)7))))) : (((unsigned int) var_7))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((-5152909083704101734LL) / (var_17))), (min((((/* implicit */long long int) var_6)), (9223372036854775807LL)))))) ? (((/* implicit */int) (signed char)-105)) : (min(((+(-1))), (((/* implicit */int) arr_4 [i_3 - 2]))))));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */unsigned char) ((signed char) (+(9223372036854775807LL))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_23 [i_2] = ((/* implicit */int) (unsigned char)7);
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) var_11);
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) % (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)86)) || (((/* implicit */_Bool) (unsigned short)39232))))) : (((/* implicit */int) (unsigned char)7)))))))));
                                arr_25 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) (+(min((-3564305931831506111LL), (9223372036854775807LL)))));
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */unsigned int) (+((((+(arr_10 [i_0] [i_1] [6]))) | (((var_8) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 2) 
                    {
                        arr_28 [i_0] [i_2] [i_0] [i_0] = (((+(((/* implicit */int) (unsigned char)41)))) >> (((((/* implicit */int) var_9)) + (101))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_18))))) : (arr_27 [i_0] [i_2] [i_7])));
                    }
                    for (long long int i_8 = 3; i_8 < 22; i_8 += 4) 
                    {
                        arr_32 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */int) (_Bool)0))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)255)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_19 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))))) : (((((/* implicit */_Bool) max((arr_13 [i_0] [i_1] [i_1] [i_8] [i_8 - 1]), (((/* implicit */int) var_18))))) ? (arr_31 [i_0] [i_1] [i_2] [i_8] [i_0] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0])), ((unsigned short)28499)))))))));
                        arr_33 [i_2] [i_1] [i_2] [i_8] [i_8 - 2] [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (signed char)-44)), (-8912959384287347853LL)))));
                    }
                }
            } 
        } 
    } 
}
