/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17138
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                var_14 &= ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)121)) == (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (+(((min((var_3), (((/* implicit */long long int) var_4)))) / (((/* implicit */long long int) var_9))))));
                var_15 = ((/* implicit */short) ((int) var_11));
                var_16 = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    var_17 |= max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-106))))), (var_3))), (((/* implicit */long long int) ((var_5) | (((((/* implicit */int) (short)652)) + (((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_5 - 1] = ((/* implicit */unsigned char) ((max((arr_9 [i_6 - 1]), (arr_9 [i_6 + 4]))) >> (((/* implicit */int) ((arr_1 [i_6 - 1]) <= (min((((/* implicit */unsigned long long int) var_7)), (arr_9 [i_6]))))))));
                                arr_20 [i_6] [i_6] [i_4] [i_6] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) * (max((((/* implicit */unsigned long long int) var_4)), (arr_9 [i_2 - 1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)652)))));
                                arr_21 [i_6] [i_3] [i_4 + 1] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((((((((/* implicit */int) min((arr_15 [(short)11] [(unsigned char)10] [(unsigned char)10] [i_5] [i_6 + 3]), (((/* implicit */short) var_10))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0))))))) + (62))) - (5)))));
                                var_18 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (unsigned short)64220)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1316))) : (2305843008945258496ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)59377))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2])))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) arr_1 [i_2]);
                }
            } 
        } 
    } 
}
