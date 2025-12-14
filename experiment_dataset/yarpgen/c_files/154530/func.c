/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154530
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_1 [i_3] [i_3])))))));
                                arr_16 [i_4] [i_2] [i_2] [i_2] [i_0] = min((arr_5 [i_0] [i_1] [i_3] [i_4]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1] [(signed char)10] [(short)15])) == (((/* implicit */int) arr_5 [i_4] [i_3] [i_2] [i_1]))))));
                                arr_17 [i_0] [(signed char)14] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 + 1] [i_2 - 1])) ? (arr_13 [i_1] [i_1] [i_1] [i_2 + 1]) : (arr_14 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2] [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_7 = 2; i_7 < 22; i_7 += 3) 
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6 - 1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_1] [i_5])), (var_2)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_6 - 1] [i_6 - 1] [i_0])), (arr_2 [i_0] [i_1] [i_0])))) : (((((/* implicit */int) arr_6 [i_1] [i_1])) * (((/* implicit */int) arr_2 [i_0] [i_5] [i_7])))))))));
                                arr_27 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7] &= ((/* implicit */int) var_4);
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                            {
                                arr_31 [(signed char)19] [(signed char)19] [i_5] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_8] [i_0]))) + (((((/* implicit */_Bool) 278146600240910549ULL)) ? (arr_25 [i_0 - 2] [i_0 - 2] [14] [i_5] [i_6] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                                arr_32 [i_5] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_5] [i_6])), (var_1)))) ? (((((/* implicit */_Bool) 278146600240910562ULL)) ? (((/* implicit */unsigned long long int) arr_19 [i_0])) : (18168597473468641066ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */short) var_3)), (var_12))))))));
                                arr_33 [i_0] [i_1] [i_0] [i_6 - 1] [i_6 - 1] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) var_11))), (((((((/* implicit */_Bool) 278146600240910549ULL)) ? (18168597473468641054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_5] [i_1])))))));
                                arr_34 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_11);
                            }
                            arr_35 [i_0 - 1] [i_0 - 1] [i_1] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-57)) / (((/* implicit */int) (unsigned char)31))))) ? (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [2ULL] [i_1] [i_1] [i_5] [i_5] [i_6 - 1] [i_5]))) : (arr_9 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), ((short)8404)))))))));
                        }
                    } 
                } 
                arr_36 [i_1] = ((/* implicit */long long int) ((unsigned char) (-(arr_21 [i_0 - 2]))));
                arr_37 [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (-(var_8))))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_1] [i_1] [i_0 + 3] [i_1]))) : (278146600240910549ULL))) * (((18168597473468641080ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(18168597473468641080ULL)))) ? ((-(((/* implicit */int) var_2)))) : ((+(((/* implicit */int) (signed char)-19)))))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */signed char) max(((~(((/* implicit */int) max((var_2), (var_2)))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 278146600240910549ULL)) && (((/* implicit */_Bool) var_7))))) < (((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_9))))))))));
    var_15 = ((/* implicit */short) max(((((!(((/* implicit */_Bool) var_10)))) ? (((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) min((max((((/* implicit */unsigned short) var_2)), (var_6))), (max((((/* implicit */unsigned short) var_4)), (var_9))))))));
}
