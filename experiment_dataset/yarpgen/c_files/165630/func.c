/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165630
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
    var_16 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65534)) << (((((((/* implicit */int) (signed char)-64)) + (84))) - (7)))))), (min((((/* implicit */long long int) (short)32767)), (9223372036854775807LL))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(-379426674811393768LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (var_7))))))) ? (min((var_14), (((/* implicit */unsigned long long int) (signed char)-80)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */signed char) var_0);
                                var_18 *= ((/* implicit */signed char) (-(((long long int) arr_6 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((((/* implicit */int) (signed char)-63)) + (87))) - (10)))))) <= (((unsigned int) arr_11 [i_0 - 1] [i_1] [(unsigned char)10] [(unsigned char)10] [i_1]))));
                }
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)97), ((signed char)65))))) + (max((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0 - 1] [i_1] [i_1])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (arr_7 [i_0] [i_0 - 1] [i_0] [(unsigned short)10]))))));
                /* LoopSeq 3 */
                for (int i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (min((arr_0 [i_0 - 1]), (arr_3 [(_Bool)1]))))) % (((/* implicit */int) ((_Bool) (signed char)54)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (875467361))) ^ (((/* implicit */int) ((arr_10 [i_0 - 1] [i_5]) && ((_Bool)0))))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)3] [i_1]))) / (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_0] [(_Bool)1])))) : (arr_7 [i_1 - 2] [i_5] [i_5] [i_5])))));
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_0 - 1] [i_5 - 2] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))) ? (((/* implicit */int) max((arr_16 [i_5 - 1] [i_1 - 3] [i_0 - 1]), (arr_16 [i_5 - 1] [i_1 - 2] [i_0 - 1])))) : (((/* implicit */int) max((arr_16 [i_5 - 1] [i_1 - 3] [i_0 - 1]), (((/* implicit */unsigned short) arr_4 [i_1 - 2] [i_1])))))));
                    arr_19 [i_1] = ((/* implicit */signed char) max((((arr_3 [i_0 - 1]) | (((/* implicit */int) var_13)))), ((+(((/* implicit */int) ((unsigned short) (signed char)(-127 - 1))))))));
                }
                for (int i_6 = 2; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    var_22 = (signed char)127;
                    arr_23 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) (signed char)-55);
                    arr_24 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [(unsigned char)4] [i_6])) : (((/* implicit */int) (short)32767))))) : (((unsigned int) (signed char)-64))))) ? (((((var_7) + (2147483647))) << (((max((arr_0 [i_6]), (((/* implicit */int) arr_21 [i_1] [i_1])))) - (1469860564))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (min((1437090685), (((/* implicit */int) (signed char)54)))) : (min((875467358), (((/* implicit */int) arr_1 [6LL])))))));
                    arr_25 [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_1]);
                }
                for (int i_7 = 2; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_1] [(unsigned short)3] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) (((((-(875467358))) / (((/* implicit */int) (short)-20973)))) % (((/* implicit */int) max((min((((/* implicit */signed char) arr_27 [i_0] [i_1])), ((signed char)-64))), (((/* implicit */signed char) arr_22 [i_0] [i_0 - 1] [i_1] [i_0 - 1])))))))) : (((/* implicit */unsigned int) (((((-(875467358))) / (((/* implicit */int) (short)-20973)))) * (((/* implicit */int) max((min((((/* implicit */signed char) arr_27 [i_0] [i_1])), ((signed char)-64))), (((/* implicit */signed char) arr_22 [i_0] [i_0 - 1] [i_1] [i_0 - 1]))))))));
                    arr_30 [i_1] [i_7] [(signed char)7] [i_1] = ((((/* implicit */int) arr_14 [i_7 - 1] [i_0 - 1] [i_1 + 1])) * (((((/* implicit */int) (signed char)34)) % (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 3])))));
                    arr_31 [11U] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((((/* implicit */int) arr_8 [i_7] [i_0] [i_1] [i_0] [i_0])) << (((arr_13 [(unsigned short)2] [(unsigned short)2] [i_7]) - (1090947619457586588LL))))) != (((/* implicit */int) var_3))))) + (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (-1151021739)))) ? (((/* implicit */int) var_15)) : (arr_5 [i_0] [i_0 - 1] [(unsigned char)3]))));
                }
                arr_32 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) max((min((((/* implicit */long long int) var_10)), (arr_13 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) min((arr_26 [i_0] [i_0] [(short)4]), (((/* implicit */unsigned short) (signed char)79))))))));
            }
        } 
    } 
}
