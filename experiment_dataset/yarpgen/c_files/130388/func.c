/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130388
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
    var_13 = ((/* implicit */unsigned char) max(((~(((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) ((var_6) > (((/* implicit */int) ((unsigned short) var_7))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((((var_12) | (((/* implicit */unsigned long long int) 1568092625)))) < (13494581744352955794ULL)))) : ((+(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_1] [(unsigned char)2]) : (arr_1 [i_1] [i_0])))) ? (((/* implicit */int) ((arr_1 [i_1] [i_0]) != (arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((short) 1568092625)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_1] [1])))) + (((/* implicit */int) min((var_10), (((/* implicit */short) var_7))))))), (((/* implicit */int) ((signed char) var_0)))));
                    arr_9 [i_0] [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-95)) && (((/* implicit */_Bool) (signed char)123))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_3] = var_6;
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (~((-((+(13494581744352955794ULL)))))));
                                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22))))) : (((int) arr_15 [i_0] [i_3] [i_4])))), (((((/* implicit */_Bool) ((int) arr_1 [i_1] [i_4]))) ? (((((/* implicit */_Bool) var_11)) ? (arr_10 [i_0] [i_1] [i_0]) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1966428241)))))))));
                                var_17 = max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (var_5)))) - (((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (arr_7 [i_0] [i_0]) : (arr_15 [i_5] [i_3] [i_3]))))), (((/* implicit */unsigned long long int) arr_0 [i_1])));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0]);
                            }
                        } 
                    } 
                    var_18 |= (+(((((((/* implicit */int) var_8)) | (((/* implicit */int) var_3)))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_6))) + (100))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) var_6)) ? (((((unsigned long long int) arr_15 [i_0] [i_1] [i_1])) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1]))) + (arr_16 [6] [i_0] [i_1] [(signed char)10] [6] [0U])))) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    var_20 |= ((/* implicit */signed char) ((((((var_6) + (2147483647))) >> (((((/* implicit */int) var_10)) - (1982))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [2])) || (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6])))))));
                    var_21 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_6)) - (arr_15 [(unsigned char)8] [(unsigned char)8] [(unsigned short)3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 1568092625)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)0)))));
                        arr_25 [i_0] [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((var_5) % (((/* implicit */int) var_11))))));
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_7 - 1] [i_1] [i_1] [i_7]))));
                        var_23 -= ((/* implicit */int) var_1);
                        var_24 = ((/* implicit */signed char) var_11);
                    }
                    arr_27 [i_0] [(unsigned short)9] [(short)3] [i_6] = ((/* implicit */unsigned short) ((arr_5 [i_6]) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (arr_5 [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_33 [i_0] [i_0] [i_0] [(signed char)9] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)11))));
                                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >= (var_6)));
                                var_28 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                }
                arr_34 [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) * (((((/* implicit */int) arr_2 [i_1])) / (var_6))))), (((((/* implicit */_Bool) arr_14 [i_0])) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))))))));
                arr_35 [i_1] [i_0] [(short)5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_0])) ? ((-(arr_16 [i_0] [i_0] [i_0] [9] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_21 [i_0] [i_1] [i_0])))))) - (((/* implicit */unsigned long long int) ((var_6) & (((((/* implicit */_Bool) arr_4 [(_Bool)0] [i_0] [i_0])) ? (arr_14 [i_0]) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_3)))))) ? (var_5) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9)))))))));
    var_30 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_1))))), (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
}
