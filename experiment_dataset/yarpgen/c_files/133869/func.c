/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133869
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-112)), (arr_0 [i_0])));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)3584)) / (((/* implicit */int) max(((short)-3600), (((/* implicit */short) (signed char)-85)))))));
        var_17 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [(short)11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3600))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (var_4))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_18 = (+((-(18446744073709551615ULL))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_0)))))));
                    var_19 = ((/* implicit */_Bool) (short)3582);
                    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-21922)) & (((/* implicit */int) (signed char)37)))) | (((/* implicit */int) min(((short)-32762), (((/* implicit */short) var_6)))))))), (((((4294881399U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_1]), ((signed char)16)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((signed char) arr_3 [(signed char)13]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_11)), (arr_12 [i_1] [i_1] [i_4]))))) : (max((((/* implicit */unsigned int) var_11)), (var_12))))), (((/* implicit */unsigned int) max((((/* implicit */short) var_5)), ((short)-3600))))));
            arr_16 [i_4] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_4]);
        }
        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [1U])) : (((((/* implicit */int) var_2)) | (((/* implicit */int) arr_15 [(unsigned short)13]))))))));
        var_23 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)84)) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((signed char) arr_15 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    }
    var_24 = ((/* implicit */signed char) var_0);
    var_25 = ((signed char) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        arr_19 [i_5 + 2] [i_5] = ((/* implicit */short) min((arr_0 [i_5 - 1]), (((unsigned long long int) var_4))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 3; i_6 < 9; i_6 += 1) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_17 [i_6 - 2]), (arr_17 [i_6 + 1])))) ? (arr_21 [i_6] [i_5] [(short)6]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6]))) & (var_12))))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) min((((/* implicit */short) var_6)), (var_10))))) : (((/* implicit */int) (unsigned short)6104))));
            arr_22 [i_6] = arr_8 [i_5] [i_6 - 2];
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || ((!((!(((/* implicit */_Bool) var_9))))))));
            arr_26 [i_7] [i_7] [(short)1] = ((/* implicit */unsigned int) min((max(((-(var_0))), (((/* implicit */unsigned long long int) arr_10 [i_5] [i_7] [i_5 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_5] [i_7] [i_5] [i_5]))))) ? (((/* implicit */int) max((arr_11 [i_5 + 1] [i_7] [7ULL] [i_5]), (var_14)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_24 [i_7] [i_5])) : (((/* implicit */int) var_13)))))))));
            arr_27 [i_7] = ((/* implicit */signed char) (-(var_12)));
        }
        /* LoopNest 2 */
        for (short i_8 = 4; i_8 < 9; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    arr_34 [i_9] = ((/* implicit */short) (~(((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (signed char)-108))))));
                    var_28 = ((/* implicit */short) ((signed char) (short)8894));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        for (short i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_7 [i_5 + 1])))), (((/* implicit */int) ((signed char) arr_7 [i_5 + 1])))));
                                arr_40 [i_5] [i_8] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 494831008U)) ? (1592328024U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3590))))) / (((((/* implicit */_Bool) (short)0)) ? (arr_1 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_6)), ((short)(-32767 - 1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_5 + 2] [i_5 + 1] [i_5 - 1]))))) * (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [(short)4]))))), (min(((short)0), (arr_24 [(signed char)7] [i_5 - 1]))))))));
    }
}
