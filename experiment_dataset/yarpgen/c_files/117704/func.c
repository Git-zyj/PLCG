/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117704
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0] [i_1]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                var_20 = ((/* implicit */long long int) ((_Bool) max((3599829208U), (((/* implicit */unsigned int) ((short) arr_0 [i_0]))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_1])))) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [(unsigned char)15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_1] [i_2] [i_1] [i_0] = ((arr_11 [i_3 + 3] [i_2 - 2] [i_2] [i_2 - 2] [i_1]) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_0])) : (((/* implicit */int) ((arr_0 [i_0]) < (var_13)))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (arr_3 [i_1])))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) ((11422076135112442068ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_14 [5] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        arr_17 [(_Bool)1] [i_2] [i_2] [i_5] [i_1] [i_1] |= ((/* implicit */unsigned short) ((var_16) != ((~(var_16)))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((arr_8 [i_5 + 2] [i_2 + 1] [i_2] [i_2 - 2]) ? (arr_19 [i_2 + 1] [i_5 + 2] [i_2 + 1] [i_2 - 2] [i_2 - 2]) : (arr_19 [1ULL] [i_5 + 2] [i_2 + 1] [i_2] [i_2 - 2]))))));
                            var_25 |= ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_5 + 1] [i_6]);
                        }
                        for (int i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (-(arr_10 [i_7 - 1] [i_5 + 3] [i_2 - 2])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 - 1] [(short)17] [10LL] [i_5 + 1] [10LL]))) : (var_10)));
                            var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)2135)))) ? (((((/* implicit */unsigned long long int) var_13)) / (arr_4 [i_1] [i_1] [i_2] [i_5]))) : (((/* implicit */unsigned long long int) var_5))));
                        }
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((arr_12 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 2]) ? (((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 2])) : (((/* implicit */int) (unsigned short)63385)))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((arr_12 [i_0] [i_5] [i_2] [i_5] [i_2]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                            var_31 = ((/* implicit */long long int) arr_11 [i_0] [21LL] [i_2] [i_5] [10LL]);
                        }
                        for (short i_9 = 3; i_9 < 23; i_9 += 3) 
                        {
                            arr_26 [i_0] [i_1] [(unsigned short)8] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (arr_22 [i_9 - 3] [i_0] [i_2] [i_0] [i_0]))))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))));
                            var_33 += arr_10 [i_1] [i_2] [i_1];
                        }
                    }
                    arr_27 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (arr_10 [i_2 + 1] [i_2] [i_2 - 2])));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_0] [i_1] [i_2 - 2] [i_2] [i_2] [i_0] [i_2])))))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)0))));
    var_36 = ((/* implicit */signed char) (short)2005);
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned char)217), (((/* implicit */unsigned char) var_8))))), (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_7)))))));
}
