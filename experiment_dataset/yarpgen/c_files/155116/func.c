/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155116
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
    var_20 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
    var_21 = ((/* implicit */unsigned char) var_9);
    var_22 ^= ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */int) (~(((((arr_0 [i_1] [i_0 + 2]) | (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 2])))) << (((((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (3189085071389194192LL)))))));
                var_24 = max((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [i_1 + 1])) && (((/* implicit */_Bool) (short)10444))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */int) var_18))))) ? (((arr_2 [i_1 + 1] [i_0] [i_0]) - (-1735813491))) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_10)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 3307103767U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1]) != (((/* implicit */long long int) 3943133792U)))))) : (((((/* implicit */_Bool) 3969109876U)) ? (((/* implicit */unsigned long long int) var_19)) : (2978324178681280303ULL)))))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 3] [i_1 + 3])))) ? (((/* implicit */unsigned int) max((min((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1 + 1] [i_2]))), (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) 24576)) : (3307103747U))))))));
                    arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (14461529905324663748ULL) : (((/* implicit */unsigned long long int) 987863528U))))) ? (((((/* implicit */_Bool) 15468419895028271337ULL)) ? (12121171428077925340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6758))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) ^ (15468419895028271337ULL)))))) ? ((~(((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_8)))))) : (var_11)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_2 + 1] [i_0 - 1])) ? (var_16) : (arr_2 [i_2 - 1] [i_1 + 1] [i_0 + 1])))) ? (min((((/* implicit */unsigned int) arr_10 [i_1 + 1] [i_1] [i_0 - 1] [i_1 + 1] [i_4] [i_0 + 2])), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -809415802)) != (var_19)))))));
                                var_28 = max((max((arr_7 [i_4] [i_2] [i_1]), (((arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]) ? (((/* implicit */int) (short)-5152)) : (arr_2 [i_0] [i_0 - 1] [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))));
                                arr_11 [i_2] [12ULL] [(short)6] [i_1 + 3] [12ULL] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (arr_7 [i_0] [i_0] [i_0]) : (((int) arr_8 [i_0 + 1] [i_1 + 3] [i_0] [i_3])))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)64303))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-3589))) - (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5])))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] = ((/* implicit */int) ((min((arr_16 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_6]), (arr_16 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 3]))) == ((+(((/* implicit */int) (short)0))))));
                                var_29 += ((/* implicit */signed char) 3307103733U);
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 4; i_8 < 23; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_5] [i_8]))))), (min((arr_13 [i_0] [i_1 + 1] [i_5] [i_8]), (arr_19 [i_1] [i_1] [i_5] [i_8] [i_0] [i_8])))))) ? (((((/* implicit */_Bool) -1710133990)) ? (((/* implicit */int) arr_17 [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_0] [i_0])))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_8]))));
                        arr_24 [i_0] [i_0] [i_5] [i_0] [i_8] = ((/* implicit */short) min(((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (15468419895028271312ULL)))))), (((/* implicit */int) ((((/* implicit */_Bool) min((299810087), (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_8]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (arr_22 [i_0])))))))));
                        var_32 = arr_7 [i_8] [i_5] [i_0];
                    }
                }
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) var_3);
}
