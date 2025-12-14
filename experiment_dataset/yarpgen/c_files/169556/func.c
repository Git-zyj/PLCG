/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169556
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_4 [i_0] [i_2 - 2])))), ((+(523776)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_17 *= min(((-(arr_6 [i_0] [i_1 - 1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0] [4LL]))));
                        var_18 = ((((/* implicit */_Bool) (short)14406)) || (((/* implicit */_Bool) -523778)));
                        var_19 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [(unsigned short)10] [(signed char)8] [i_1] [10U]))))), (((long long int) (short)14406))))), (min((max((arr_2 [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6403)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)15360)))))))));
                        arr_10 [(signed char)5] [i_2] [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) * (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))))))) ? (4460869282573544708LL) : (((/* implicit */long long int) ((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51364)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (35787829U))))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_20 = ((arr_3 [i_4] [i_1 + 1]) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1 + 2] [i_0] [10LL] [i_2])) : (((((/* implicit */_Bool) ((1048575U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) 4345082121827638796LL)) : (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4])), (arr_5 [i_2]))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) 10483942773707263941ULL))), (max((((/* implicit */long long int) 25U)), (5167663452221526804LL)))))))))));
                        var_22 = ((/* implicit */_Bool) ((unsigned int) var_9));
                        arr_14 [i_2] = arr_9 [i_0] [i_1] [i_2] [i_4];
                    }
                    arr_15 [1] [(_Bool)1] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) (unsigned short)16444)), (arr_7 [i_2] [i_1] [(_Bool)1] [i_2 + 2] [i_2] [i_2 - 1])))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) 609399569U)), (-9223372036854775790LL)))))) : (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)11))))) ? ((~(7133611533760156946ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_23 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 3] [i_2 - 3]))) <= (((((/* implicit */_Bool) 9223372036854775805LL)) ? (arr_7 [15LL] [12] [i_2] [i_2] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))));
                        var_24 -= ((/* implicit */long long int) (signed char)35);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_22 [i_2] [i_1] [i_2 - 3] [0LL] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4345082121827638800LL)) ? (67043328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))));
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */int) ((short) var_3))) : ((-(((/* implicit */int) (short)6228))))));
                            arr_23 [(short)8] [i_1] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (arr_16 [i_0] [i_1] [i_2] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) >= (((/* implicit */int) arr_4 [1] [i_5]))))))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */short) (~(max((((/* implicit */int) ((arr_16 [i_0] [i_0] [(_Bool)0] [i_2] [i_7]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516)))))), ((-(((/* implicit */int) arr_20 [i_0] [8] [i_2] [0] [i_2] [i_0]))))))));
                        arr_27 [6] [i_2] [i_2] [i_7] [i_0] = ((/* implicit */unsigned long long int) min(((short)15349), ((short)5646)));
                        var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 74409372)) ? (18LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 3])) ? (-9061871847102151722LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 3] [i_2 - 2])))))) : (((((/* implicit */_Bool) -74409386)) ? (((/* implicit */unsigned long long int) 477365596)) : (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) var_3);
}
