/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169675
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
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [1] [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) 1384593821)))), (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))) && (((/* implicit */_Bool) var_2))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_18 = var_0;
                        var_19 = (i_3 % 2 == 0) ? (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */unsigned long long int) arr_3 [(unsigned short)2] [i_2] [i_3])) / (var_1))) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_2] [i_3] [i_3])) - (15)))))))) : (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */unsigned long long int) arr_3 [(unsigned short)2] [i_2] [i_3])) / (var_1))) << (((((((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_2] [i_3] [i_3])) - (15))) + (129))))))));
                    }
                    for (short i_4 = 2; i_4 < 12; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-20)))) ? ((+(var_12))) : ((+(arr_12 [i_4] [i_4 + 3] [15] [i_1] [i_0] [10U]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)823), (((/* implicit */unsigned short) arr_1 [i_2] [i_4]))))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_4 - 2]))))) : (max((11554574), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned short)823))))))));
                        var_21 = ((/* implicit */_Bool) (-(((arr_3 [i_4 + 3] [i_4] [i_0 + 1]) << (((arr_3 [i_4 + 3] [(signed char)14] [i_0 + 1]) - (1289863784)))))));
                    }
                    arr_14 [i_0] [i_1] [(_Bool)1] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 8242956828645838250ULL)))) * (min((19LL), (((/* implicit */long long int) (short)4563))))));
                    var_22 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)26232)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))), (((/* implicit */long long int) (unsigned short)64702))));
                }
            } 
        } 
    } 
}
