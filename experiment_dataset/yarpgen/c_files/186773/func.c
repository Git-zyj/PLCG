/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186773
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [(signed char)10])))) ? (((/* implicit */int) (signed char)-107)) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (signed char)107)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_5)) % (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (600781337)))))))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_4 [i_1 - 2]))))));
        arr_5 [i_1] &= ((/* implicit */int) (signed char)-107);
        var_14 = ((unsigned int) (~(((/* implicit */int) var_4))));
        var_15 = ((/* implicit */signed char) ((((var_1) >= (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 1])) * (0)))))) || (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [(unsigned char)0])))), (((((/* implicit */int) var_10)) / (var_6))))))));
        var_16 = ((/* implicit */unsigned char) arr_1 [i_1 - 2]);
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)19875)))) + (((/* implicit */int) ((var_6) <= (((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((var_6) / (var_6)))))))) : (var_1))))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 4; i_3 < 9; i_3 += 1) 
        {
            {
                arr_11 [i_3] [i_3] = ((/* implicit */short) arr_4 [(unsigned char)0]);
                arr_12 [i_3] = ((/* implicit */unsigned char) (+((+(arr_7 [i_3 - 3] [i_2 - 1])))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_10 [i_3 + 4] [i_3] [i_3 + 2])), (min((arr_4 [i_2]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned char) ((unsigned int) (+(((arr_17 [i_3] [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6]))))))));
                                arr_19 [i_3] [i_3 + 2] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? ((~(((((arr_17 [i_3] [i_3 + 4]) + (9223372036854775807LL))) << (((var_6) - (804578897))))))) : ((~(((((((arr_17 [i_3] [i_3 + 4]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_6) - (804578897)))))));
                                arr_20 [i_4] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_5])) >> (((var_9) + (1459662797870910312LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_10))));
}
