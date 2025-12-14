/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115001
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
    var_17 = var_9;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_1))));
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(arr_1 [i_2] [i_2])))) ? (((((/* implicit */_Bool) var_14)) ? (10458435996229524269ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)3] [5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1]))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0 - 2])) && (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))))));
                    var_19 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (17248311531755974881ULL)))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)146)), (arr_7 [i_2]))), (((/* implicit */unsigned long long int) ((var_15) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 2]))))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1198432541953576729ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_14))))), (min((var_5), (8989607068696576LL))))))));
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_5 + 1])) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_6 [i_5] [i_5] [i_3] [i_5])))) : (arr_16 [i_5 - 1] [i_0] [i_0]))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_5 + 1]))));
                                var_22 = ((/* implicit */int) (unsigned short)48913);
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_5] [i_5 + 1] [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_7)))))) ? (((/* implicit */long long int) max((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_6 [i_5] [i_3] [i_5] [i_5])))), (arr_14 [i_0] [i_1] [i_3] [i_4] [i_4])))) : ((~((-(-8989607068696590LL)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_0 - 2])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))));
                }
                var_24 |= (+(((/* implicit */int) min((arr_17 [i_0] [i_1] [i_0 - 2] [i_1]), (arr_17 [i_0] [i_0] [i_0] [i_0])))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 2] [i_0]))))), (17248311531755974904ULL)))));
            }
        } 
    } 
    var_26 = ((((((/* implicit */int) var_13)) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) : ((-(1198432541953576723ULL))))) : (((/* implicit */unsigned long long int) min((-1784983310), (((/* implicit */int) (!(((/* implicit */_Bool) 1023LL)))))))));
    var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))))) : (min((((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (12968079564525285900ULL))), (((/* implicit */unsigned long long int) var_13))))));
}
