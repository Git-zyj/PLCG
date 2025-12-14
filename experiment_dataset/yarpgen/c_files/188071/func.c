/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188071
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_2 + 1] [1ULL] [i_0] = max((((((16237314474399142450ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)63)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(short)12]))))));
                    arr_11 [i_0] [i_1] [i_2 + 1] [5LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned char)224)), (0))), (((((/* implicit */_Bool) (unsigned char)156)) ? (262588939) : (((/* implicit */int) var_8)))))))));
                    arr_12 [i_0] [i_0] [9] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_4 [i_2 - 2])), (((/* implicit */unsigned long long int) ((arr_4 [i_2 - 1]) ? (((/* implicit */int) arr_4 [i_2 - 3])) : (((/* implicit */int) arr_4 [i_2 - 1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_15 += ((/* implicit */short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (4ULL))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (18446744073709551612ULL)))))), (((/* implicit */int) arr_13 [i_4]))));
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_24 [i_4] [i_3] [i_3] = ((/* implicit */long long int) 1486110291);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                            {
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_5 - 2] [i_3]))));
                                arr_27 [i_3] [i_4] [i_4] [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) arr_6 [i_6]);
                                arr_28 [11LL] [11LL] [(_Bool)1] [i_3] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) var_6)))));
                                var_17 = ((/* implicit */_Bool) var_11);
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                            {
                                arr_33 [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_8 [i_3] [i_5 + 1] [i_8]);
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-3515998486270198485LL)));
                                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551611ULL))))) == (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_9)))))));
                                var_20 = ((/* implicit */signed char) (_Bool)1);
                            }
                            for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                            {
                                arr_36 [i_3] [i_4] [6LL] [i_3] [i_6] [i_9] = ((/* implicit */int) ((unsigned int) arr_30 [i_3]));
                                arr_37 [i_3] [i_4] [i_5 + 1] [i_3] = min((((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) 1413732206U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_4] [(signed char)4] [i_6])) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)111)))))) : (((unsigned long long int) var_12)))));
                            }
                            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                            {
                                arr_42 [i_3] [i_4] [(short)6] [i_6] [9ULL] = ((/* implicit */signed char) ((_Bool) arr_20 [i_3] [i_4] [1ULL] [i_4]));
                                var_21 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_32 [i_6] [i_3 - 1] [i_5 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_5]))))));
                                var_22 = ((/* implicit */unsigned int) ((signed char) ((short) (!(((/* implicit */_Bool) var_4))))));
                                var_23 &= ((/* implicit */short) (((!(arr_21 [i_10] [i_3 - 1] [i_3] [i_5 + 2]))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_22 [i_4])))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_22 [i_4]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_3))), (var_7))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))));
}
