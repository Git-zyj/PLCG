/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117603
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned short)0] [i_1] [(unsigned char)7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 422920204811412569ULL)) ? (3932850999928471375LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_2 + 2])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_0 - 2])))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 2] [i_0 + 1])))));
                    arr_9 [i_0] [i_1] [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (min((641379349U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1121501860331520ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) : (arr_5 [i_0] [i_0 - 1])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_18);
    var_21 = ((/* implicit */int) var_4);
    var_22 = ((((/* implicit */_Bool) var_13)) ? (((6ULL) << (((((/* implicit */int) (signed char)121)) - (113))))) : (((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)2246))) / (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
}
