/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103576
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (short)21421))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_17 |= ((/* implicit */int) (signed char)81);
                        arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned int) (signed char)101)), (arr_5 [i_1]))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_10 [i_3] [i_3] [(unsigned short)2])) + (29321)))))), (min((var_14), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)7] [i_0]))))))));
                        var_18 = ((/* implicit */unsigned int) (~(var_15)));
                    }
                }
                for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_4 + 2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */int) var_13)) <= ((-(((/* implicit */int) (short)2047))))));
                                arr_20 [i_0] [i_0] [i_4] [i_4] [(unsigned char)10] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((long long int) var_7)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16)))))))) ? (((((var_10) || ((_Bool)1))) ? ((((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((/* implicit */unsigned long long int) var_15))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 1; i_7 < 13; i_7 += 2) 
                {
                    var_20 |= ((/* implicit */long long int) var_11);
                    var_21 -= ((/* implicit */short) (_Bool)1);
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)7492)) < (((/* implicit */int) (unsigned char)28)))))));
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) < (var_5)));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) (((~(18446744073709551615ULL))) << (((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))) - (1017922133U)))));
                        arr_27 [i_8] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_9)) << (((((arr_13 [i_1] [i_8]) + (1459950830659152993LL))) - (15LL))))));
                        var_25 -= ((/* implicit */unsigned int) arr_23 [i_0] [i_0]);
                        arr_28 [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((/* implicit */int) ((short) var_16))) : (((/* implicit */int) min((var_6), (((/* implicit */signed char) var_13)))))))) + (max((((/* implicit */long long int) -1)), (min((((/* implicit */long long int) (short)-18214)), (var_7)))))));
                    }
                }
                var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)(-32767 - 1))), (-1763751340743653501LL)));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (max((((((/* implicit */int) (unsigned char)18)) >> (((((/* implicit */int) (unsigned char)227)) - (227))))), (((/* implicit */int) var_4))))));
}
