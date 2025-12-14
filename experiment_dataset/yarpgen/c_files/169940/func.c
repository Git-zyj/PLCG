/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169940
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) (((_Bool)0) ? (min((((var_9) ? (((/* implicit */int) arr_2 [3])) : (((/* implicit */int) var_11)))), (((arr_3 [i_0]) * (((/* implicit */int) arr_4 [i_0] [i_2])))))) : (((/* implicit */int) min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))))));
                    arr_7 [2U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_2])) : (var_4))) - ((+(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) : (((15182179685711361650ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        for (unsigned short i_4 = 4; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22767)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)1)))))));
                                var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3 - 1] [i_4 - 4] [i_4])) < (((/* implicit */int) var_10))));
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                            {
                                arr_24 [i_3] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_3 - 1] [i_4 - 2] [i_5])) : (((/* implicit */int) arr_14 [i_3 - 1] [i_4 - 2] [i_5])));
                                var_17 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) arr_1 [(unsigned char)1])))));
                            }
                            arr_25 [i_3] [i_3] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_21 [i_3 - 1] [i_3 + 2] [i_4 - 1] [i_4 - 2] [i_6])) : (((/* implicit */int) var_9))))));
                            var_18 = ((/* implicit */signed char) (short)-21722);
                            var_19 -= var_3;
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_8 [(unsigned short)13] [i_4])) && ((_Bool)0))) ? (((/* implicit */int) arr_14 [i_3 + 2] [i_3 - 1] [i_4])) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_5))))))), (((((/* implicit */int) arr_20 [i_3 + 2] [i_4 - 2] [i_4] [i_4 + 1])) | (((/* implicit */int) (_Bool)1))))));
                var_21 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_4] [i_4])) != (((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_3] [9U] [(unsigned short)14] [13U])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1492193007))))) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((min((((/* implicit */unsigned int) (_Bool)1)), (var_3))), (((/* implicit */unsigned int) 1492193024)))))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_36 [(signed char)12] [i_4] [i_9] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1492192998)) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_4 - 1] [i_3] [i_10] [i_4 - 4] [i_9]))) / (arr_8 [i_4] [(short)3]))), (((/* implicit */unsigned int) arr_4 [i_3 + 2] [i_9])))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_19 [i_3 + 2] [i_4] [i_3] [i_9] [i_10] [i_11])) + (2147483647))) << (((var_8) - (3610342784U))))) << (((((/* implicit */int) arr_0 [i_3] [i_11])) - (206))))))));
                                arr_37 [i_3] [i_4] [i_3] [10LL] [i_10] [11U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) min((1492193039), (((1492193014) * (((/* implicit */int) (_Bool)0))))))) : ((-(arr_22 [14U] [i_4 - 1] [i_3 + 1] [4U] [i_4 + 2])))));
                                arr_38 [i_3] [i_4] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (-1492193039)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_40 [i_12]) ? (((/* implicit */int) min((var_13), (((/* implicit */short) arr_39 [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12])))))))) ? (var_4) : ((+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_39 [i_12])))))))));
        var_24 -= ((/* implicit */long long int) var_9);
        arr_42 [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_12]))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_2)), (var_3))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (var_11))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_9))))) : (min((var_7), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))))))));
    var_26 = -1492193039;
}
