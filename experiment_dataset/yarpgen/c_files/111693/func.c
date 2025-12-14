/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111693
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
    var_18 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */short) ((signed char) (signed char)-52))), (max((((/* implicit */short) var_10)), (var_8)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_4 [i_0] [1] = max(((-((-(arr_3 [i_0] [i_0] [i_1]))))), (((/* implicit */long long int) (-(((/* implicit */int) var_15))))));
            var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_2 [i_0 + 1] [i_0 - 3] [i_0 + 3])))));
            var_20 ^= ((/* implicit */short) var_1);
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) arr_6 [i_2]);
            /* LoopNest 3 */
            for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_4 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_3])) : (((((/* implicit */_Bool) arr_13 [i_2] [8U] [i_4 + 1] [i_3] [i_3] [i_2] [i_2])) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_17))))))) ? (max((arr_2 [i_4] [i_4] [i_3]), (((/* implicit */unsigned int) ((signed char) arr_13 [i_2] [i_2] [i_5] [i_4] [i_3 - 2] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_12)), (arr_3 [i_0] [i_3 - 3] [(unsigned short)1])))))))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0]))));
                            arr_16 [i_2] [i_2] |= ((/* implicit */long long int) arr_13 [i_2] [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 - 2] [i_2] [i_2]);
                            var_24 = ((/* implicit */int) max((var_24), ((-(((/* implicit */int) ((((unsigned int) (signed char)121)) > (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-94))))))))))));
                        }
                    } 
                } 
            } 
        }
        var_25 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_11 [(short)0] [i_0 - 2] [(unsigned short)2] [i_0 + 4])) : (((/* implicit */int) ((unsigned char) var_17)))))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned short) (signed char)-122)), (var_16))))) ? (((var_6) / (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
