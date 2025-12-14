/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149129
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_11)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5)))))))) ? (var_5) : (max((min((8252982996906843823ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 4742909627011289425LL)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = arr_8 [i_0] [i_1] [i_2] [i_2 - 1];
                    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0 - 3]) / (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_2]) >> (((arr_6 [i_2] [i_1]) - (2423919983U))))))))) && (((/* implicit */_Bool) ((signed char) (~(4186112U)))))));
                    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_0 [i_0 + 2]) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) arr_1 [i_1]))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2])) >= (arr_7 [i_1] [i_1])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13537)))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((min((((/* implicit */unsigned int) arr_13 [i_0] [1U] [i_2] [i_3] [i_4])), (var_7))) + (((/* implicit */unsigned int) var_12))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [18ULL] [i_4])) && (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62192))) != (arr_4 [i_1] [i_3 + 4] [i_3 + 4])))))) <= (((arr_5 [i_0] [i_2 + 1] [6ULL]) * (((/* implicit */int) ((1939539077) > (((/* implicit */int) (short)31842)))))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_4 [i_0] [i_2] [i_4])))) ? (((/* implicit */int) ((short) ((arr_4 [i_1] [i_2] [i_1]) & (((/* implicit */unsigned int) arr_9 [(_Bool)1] [i_1] [i_2])))))) : (((((/* implicit */_Bool) min((arr_8 [i_0] [3U] [i_2] [i_3]), (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (long long int i_9 = 2; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 2] [i_7]))) / (arr_26 [i_5 + 1] [i_5] [i_5] [i_5]))), (((((/* implicit */_Bool) arr_24 [i_9])) ? (arr_1 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [1U]))))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4290781183U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -1939539069)) <= (4290781190U))))))))))))));
                                arr_31 [i_6] [i_6] [i_7 + 3] [i_6] [i_5 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((arr_20 [(short)10] [(short)10]) < (((/* implicit */unsigned int) arr_17 [i_5])))) ? (((/* implicit */int) ((arr_0 [i_5]) <= (((/* implicit */int) arr_13 [i_5] [i_6] [i_7 + 1] [i_7 + 1] [i_9 - 2]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [i_8] [6] [i_6] [i_5]))) > (arr_26 [i_8] [i_6] [i_7] [i_8]))))))), (max((((/* implicit */unsigned long long int) arr_1 [i_6])), (arr_3 [i_5 - 1])))));
                                var_22 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_2 [i_7] [i_6])) : (((/* implicit */int) arr_16 [i_5]))))) ? (((6991283U) ^ (2080768U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (arr_17 [i_5]) : (((/* implicit */int) arr_12 [i_9] [i_6] [i_9] [i_8] [i_9 - 1]))))))) + (((((/* implicit */_Bool) min((4294967295U), (1800502921U)))) ? (arr_4 [(unsigned short)11] [i_5 - 1] [(unsigned short)11]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1] [13ULL] [i_8] [13ULL])) + (((/* implicit */int) arr_2 [i_7] [6]))))))));
                                arr_32 [i_5] [i_5] [i_5 + 1] [11LL] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_9])) || (((/* implicit */_Bool) arr_20 [i_5 + 1] [i_6]))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_9 + 1] [i_8] [i_7 - 2] [i_6] [i_5 + 1])))))) / (((arr_6 [i_6] [i_6]) | (max((((/* implicit */unsigned int) arr_14 [i_7 - 2] [i_8] [i_7 - 2] [i_6] [i_5])), (1224938290U)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) max((arr_7 [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_24 [(unsigned char)11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1907611312193879926ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6])) && (((/* implicit */_Bool) 5663311704790549940ULL))))))))));
                }
            } 
        } 
    } 
}
