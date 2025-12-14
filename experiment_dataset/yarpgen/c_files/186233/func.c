/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186233
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
    var_19 = ((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_17)))) && (((/* implicit */_Bool) min((((/* implicit */int) (signed char)75)), (var_8)))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = max((max((((((/* implicit */_Bool) (signed char)75)) ? (3656848088U) : (arr_3 [i_2 - 1] [i_2]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_5 [i_0 - 3] [i_1] [i_2])), (arr_7 [i_0 - 2] [i_0] [i_0])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [4ULL])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [11LL])))))))));
                    var_21 = ((/* implicit */unsigned short) (((((-(-1331247467))) == (((/* implicit */int) min(((signed char)75), ((signed char)75)))))) ? (((((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))) : (((/* implicit */int) (unsigned short)127))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_2 - 1] [i_3]);
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (arr_8 [i_0] [i_1] [i_3 + 1] [i_0] [i_3 + 1] [6LL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94)))))) ? (((((/* implicit */_Bool) arr_8 [10LL] [i_1] [i_1] [(short)2] [i_3] [i_4])) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((arr_5 [i_0] [i_0] [7U]) || (((/* implicit */_Bool) -256385061)))))))), (((long long int) arr_6 [i_0] [i_2] [i_3])))))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0]);
                    var_24 = ((/* implicit */unsigned long long int) ((min((-467448629), (((/* implicit */int) ((signed char) arr_7 [i_2] [i_2] [i_2]))))) - (((/* implicit */int) ((arr_4 [i_0 - 2] [i_1] [i_0]) != (max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_2])))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_4);
    var_26 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_1), (max((((/* implicit */int) var_15)), (var_8)))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37833))) <= (2394677613U))) ? (((((/* implicit */_Bool) -3948942500949822844LL)) ? (((/* implicit */long long int) var_1)) : (-787060134895775741LL))) : (min((-2191578228237844880LL), (((/* implicit */long long int) var_8))))))));
    var_27 = ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)1536)), (var_12))) - (var_12)))) ? (max((var_11), ((~(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))))))));
}
