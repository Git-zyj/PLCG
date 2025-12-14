/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161403
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_12))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_12))));
    var_15 -= ((/* implicit */short) ((long long int) var_0));
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4 - 2] = ((/* implicit */short) (~((-(min((arr_10 [(signed char)8] [i_2 - 2] [i_0]), (((/* implicit */unsigned long long int) (signed char)-105))))))));
                                arr_13 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4 - 2] [i_4] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19191))) + (var_2)))) : (max((((/* implicit */unsigned long long int) var_12)), (var_0)))))));
                                arr_14 [i_4] [i_3] [i_2 - 2] [i_1] [7ULL] [(unsigned char)12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (1267808464U)));
                            }
                        } 
                    } 
                } 
                var_17 = ((((var_3) == (((/* implicit */long long int) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (var_2))))) : ((~(min((((/* implicit */long long int) var_6)), (arr_8 [i_1] [i_1] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_0]))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (signed char i_6 = 3; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_20 [i_6 - 2] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((arr_8 [i_0] [i_5] [i_5] [i_1] [i_6 - 3] [i_0]) - (((/* implicit */long long int) var_7))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((var_3) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (1267808470U) : (var_2)))))) : (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (unsigned char)255)), (1267808487U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) > (max((((/* implicit */unsigned int) min(((short)-8187), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [3U] [i_1] [i_1])))))))));
                arr_22 [i_0] &= ((/* implicit */short) ((long long int) max((2147483647), (((/* implicit */int) (signed char)127)))));
            }
        } 
    } 
}
