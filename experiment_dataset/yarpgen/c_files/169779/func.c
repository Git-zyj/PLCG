/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169779
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0]))) ? (((/* implicit */int) ((signed char) arr_6 [i_0] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 3])) <= (((/* implicit */int) arr_5 [i_1] [i_1] [i_2 + 3])))))))) ? ((-(((/* implicit */int) arr_7 [i_1] [i_2] [i_4 + 1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_4 - 1])) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) / (arr_0 [(unsigned short)7])))) != ((~(arr_9 [i_1]))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) arr_5 [(unsigned char)13] [i_1] [(unsigned char)13])) >> (((((/* implicit */int) arr_5 [i_4 - 1] [i_1] [i_1])) - (47969)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_4])) / (((/* implicit */int) arr_5 [i_1] [i_3 + 2] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_4] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */long long int) -2092549465)) : (9223372036854775780LL)))))));
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((arr_12 [i_2]) > (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] [(unsigned char)5])) ? (arr_10 [i_0] [10] [i_0] [(unsigned char)9] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_1])))))))));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */unsigned short) min((((((long long int) arr_6 [(signed char)5] [i_1])) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) <= (arr_0 [i_0]))))))), (((arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2]) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [(unsigned char)10])))))))));
                    arr_15 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [16LL] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_10 [(signed char)2] [i_1] [(signed char)2] [i_1] [(signed char)2] [i_1]))))) >> (((max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_12 [i_1]))) - (18446744072072910417ULL)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [16LL] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_10 [(signed char)2] [i_1] [(signed char)2] [i_1] [(signed char)2] [i_1]))))) >> (((((max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_12 [i_1]))) - (18446744072072910417ULL))) - (349919836243257164ULL))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_5 + 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_6])) >> (((arr_17 [i_5 - 1]) - (3215057110185550859ULL)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_6 + 1])) ? (((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? (arr_17 [i_6 - 1]) : (arr_17 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_6] [i_6 - 1])))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_17 [i_6]))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_5 - 2] [i_5 - 2]))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5 - 2]))) : (arr_17 [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_19 [i_6]))))))))));
                var_20 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_19 [i_5])) >> (((arr_17 [i_5]) - (3215057110185550873ULL))))) >= (((/* implicit */int) arr_16 [i_5 + 1] [i_5])))) ? (((/* implicit */int) max((arr_19 [i_6 - 2]), (((/* implicit */unsigned short) arr_16 [i_5 - 2] [i_6]))))) : (((((/* implicit */int) arr_16 [i_6 + 1] [i_5 + 1])) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_5])), (arr_19 [i_5]))))))));
            }
        } 
    } 
}
