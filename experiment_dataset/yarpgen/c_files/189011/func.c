/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189011
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_17)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) == (arr_2 [i_0] [i_1])))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) var_10));
                    arr_9 [19LL] [i_0] [7] = ((/* implicit */unsigned int) arr_2 [i_0] [(short)6]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((int) (!(((((/* implicit */int) var_16)) == (arr_0 [i_3]))))));
                    arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_2 [i_0] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) arr_6 [i_3] [i_1] [i_0])))))) : (((((/* implicit */_Bool) 536870911U)) ? (536870920U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [19ULL] [19ULL] [i_0] [19ULL])) == (((/* implicit */int) var_16))))) == (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_3])) == (var_10)))))))));
                    arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) + (var_6)))) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_1] [i_1])))))))))));
                }
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_19 = ((((long long int) var_16)) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_4])), (var_5))))));
                    var_20 = ((/* implicit */int) var_1);
                }
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (arr_10 [i_0] [(signed char)20]))))) == (((((arr_18 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) arr_0 [i_7])))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [21ULL])) ? (arr_21 [i_0] [(signed char)10] [i_1] [8LL] [i_6] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))));
                                arr_28 [i_0] [(short)5] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) 984448526)) == (3758096384U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        for (short i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [i_9] [i_9 - 1] [i_9] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_32 [i_8] [i_9 + 2])) << (((((/* implicit */int) arr_33 [15U] [15U] [i_10])) - (12990))))), ((~(((/* implicit */int) arr_29 [i_9 + 1] [i_9 + 1]))))));
                    arr_37 [i_9] = min((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_30 [i_8])))))), ((~(((/* implicit */int) arr_30 [i_9])))));
                }
                arr_38 [i_9] = ((/* implicit */int) arr_32 [i_9 - 1] [i_9 + 1]);
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_22 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) arr_32 [i_8] [i_9])), (var_15)))) || (((/* implicit */_Bool) max((var_14), (arr_32 [i_8] [10U])))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_2))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), ((+(min((((/* implicit */unsigned int) arr_32 [i_9 - 1] [i_9 - 1])), (536870911U)))))));
                    arr_41 [i_8] [i_9] [i_11] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)76))))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) == (max((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_32 [i_8] [i_11])))))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) == (((/* implicit */int) ((((/* implicit */int) arr_32 [i_9 - 1] [i_9])) == (((/* implicit */int) arr_32 [i_9 - 1] [i_9]))))))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (signed char)-77))));
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_16))));
    var_27 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (var_15) : (var_15))) & (((((/* implicit */int) var_7)) | (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((((unsigned long long int) 2196460352U)) == (((/* implicit */unsigned long long int) var_4))))) : (((/* implicit */int) ((unsigned char) var_14))));
}
