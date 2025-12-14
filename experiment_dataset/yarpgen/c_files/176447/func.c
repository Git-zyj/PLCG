/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176447
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
    var_16 = min(((-(min((((/* implicit */long long int) var_14)), (var_2))))), (((/* implicit */long long int) min((((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)-1)))), (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_4] [i_3] [i_2] [i_2] [(short)5] [i_1] = arr_4 [i_1] [i_1] [i_4];
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_0] [(signed char)6] [(signed char)6] [(signed char)0]), (((/* implicit */int) arr_5 [i_2] [i_3] [i_3]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [12] [i_1] [i_2] [i_1] [i_2] [i_4]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) arr_1 [(signed char)16] [i_1])), (min((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_5])), (9223372036854775807LL))))) + (9223372036854775807LL))) << (((((((arr_9 [i_0] [(signed char)7] [i_1] [i_2] [i_5]) / ((+(((/* implicit */int) (unsigned short)32512)))))) + (37383))) - (63)))));
                        var_17 = ((/* implicit */unsigned short) (_Bool)1);
                        var_18 = ((/* implicit */unsigned char) ((((min((11038107163087953579ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [(signed char)9] [i_1]))))) + (((/* implicit */unsigned long long int) min((32640U), (((/* implicit */unsigned int) arr_17 [i_5] [3U] [i_1] [i_0])))))));
                    }
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 1) 
                    {
                        arr_22 [4ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967295U)) & (12753117203604858377ULL)))) ? (max((2147479552U), (((/* implicit */unsigned int) (short)-12301)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min(((((_Bool)1) ? (arr_9 [i_0] [(signed char)11] [10] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_5 [i_2] [20ULL] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (arr_17 [i_0] [i_1] [i_0] [i_6]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-12301)) || (((/* implicit */_Bool) 4398046494720ULL))))) << (min((max((4398046494707ULL), (((/* implicit */unsigned long long int) (signed char)25)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 20U)) || (((/* implicit */_Bool) 2181321056U)))))))));
                            var_20 &= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_23 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 3])) | (((/* implicit */int) arr_23 [i_6 + 3] [i_6 - 1] [i_6 - 2] [i_7])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 - 2] [i_6 + 2] [i_6 + 3] [i_7])) && (((/* implicit */_Bool) arr_23 [i_6 - 2] [i_6 - 1] [i_6 - 3] [i_6 - 3])))))));
                        }
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_2] [3ULL] [3ULL] [i_0])) || (((((/* implicit */int) arr_21 [i_0] [i_2] [i_1] [i_1] [i_1] [i_0])) > (((/* implicit */int) arr_5 [6ULL] [(_Bool)1] [i_2]))))))) : ((~(((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (short)-12301))))))));
                    }
                }
            } 
        } 
    } 
}
