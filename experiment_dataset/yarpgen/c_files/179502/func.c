/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179502
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) ((arr_2 [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))), (min((((((/* implicit */_Bool) -5369638924403565408LL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_2 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 2] [i_2] [i_2 - 3] [i_2 - 2] [i_3])) ? (arr_6 [i_2 - 3] [i_0 + 1] [i_0] [i_0]) : (max((3169654960885103257LL), (((/* implicit */long long int) var_11))))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), ((-(arr_2 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))));
                            arr_11 [4] [4] [i_1] [i_3] = ((/* implicit */signed char) arr_5 [i_0 + 2]);
                            var_14 = ((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0] [i_3]);
                            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [4ULL] [4ULL] [(signed char)6] [i_2])) ? (5369638924403565408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [6] [i_0])))))) ? (((5369638924403565407LL) & (-8531260150291778311LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))) != (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)0)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                        }
                    } 
                } 
                arr_12 [i_0 - 2] [i_1] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_1)) ? (arr_2 [1]) : (((/* implicit */unsigned long long int) 5369638924403565407LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_4);
    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) (signed char)99))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)188)), (var_2))))))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                arr_25 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) max(((-(11050332523669165295ULL))), (((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (unsigned short)9773))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_4]))))) ? (min((arr_15 [i_4] [i_5]), (((/* implicit */long long int) (unsigned short)0)))) : (((((/* implicit */_Bool) arr_15 [i_8] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4]))) : (arr_15 [i_4] [(_Bool)1])))));
                                var_19 |= max((min(((-(((/* implicit */int) (signed char)109)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4])) || (((/* implicit */_Bool) arr_23 [1U] [i_5] [i_7] [i_6] [i_5] [i_4]))))))), (((/* implicit */int) var_4)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_28 [i_4] [i_4] [i_4] [i_4] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [i_6] [i_4] [i_6] [(unsigned short)11] [i_6] [i_5]), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */int) arr_19 [i_4] [(unsigned char)5] [(unsigned char)5])) : (((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) (short)30161)) : ((~(arr_23 [i_9] [i_9] [i_6] [i_6] [i_5] [i_4])))));
                        var_20 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_7 [i_6] [i_5] [i_6] [i_6])), (arr_9 [i_4] [i_4])))) % (((((/* implicit */_Bool) arr_17 [i_6] [i_9])) ? (-450071233) : (((/* implicit */int) arr_19 [(unsigned short)10] [(signed char)10] [i_9]))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))), ((~(14295515781342260022ULL)))))));
                        var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4]))) : (arr_17 [i_4] [i_5])))) : (3581932456227798070LL)));
                        arr_29 [i_4] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) max((arr_23 [i_9] [i_4] [i_6] [i_4] [i_4] [i_4]), (((/* implicit */int) (signed char)-125))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) / (arr_17 [i_9] [i_9])))));
                        var_22 |= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_20 [i_9])))));
                    }
                    for (short i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        arr_33 [10LL] [i_5] [i_6] [i_6] |= ((/* implicit */signed char) ((_Bool) max((((((/* implicit */int) arr_32 [i_4])) >> (((arr_2 [i_6]) - (10891589083244494748ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                        var_23 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 2254920182U)))));
                    }
                }
                arr_34 [i_4] [(_Bool)1] |= ((/* implicit */int) max(((~(max((arr_30 [i_5] [(unsigned short)10] [i_5] [i_4] [(unsigned short)10] [i_4]), (((/* implicit */unsigned long long int) -1)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (arr_3 [i_4]))), (arr_15 [i_4] [i_5]))))));
                var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) min((1481784944U), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)116)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) - (arr_15 [i_4] [i_5]))))), (((/* implicit */long long int) var_10))));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_25 = ((/* implicit */int) (-(((unsigned long long int) max((-8287203850180355155LL), (((/* implicit */long long int) arr_20 [(_Bool)1])))))));
                    arr_38 [i_4] [i_11] |= ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_11])) ? (((long long int) arr_21 [i_4] [i_4] [0LL] [i_4] [i_4])) : (((/* implicit */long long int) var_5)))) : (((((/* implicit */long long int) (((_Bool)1) ? (var_5) : (((/* implicit */int) (signed char)-125))))) & (arr_24 [i_11]))));
                    arr_39 [i_4] = ((/* implicit */unsigned int) -9223372036854775777LL);
                }
            }
        } 
    } 
}
