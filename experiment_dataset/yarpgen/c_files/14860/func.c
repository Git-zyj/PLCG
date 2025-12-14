/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14860
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65535)) & (var_2))), (((/* implicit */int) ((unsigned short) var_3)))))) ? (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 1811734618U))))))))) : (((/* implicit */int) var_7))));
    var_14 = ((/* implicit */unsigned long long int) var_3);
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (((((unsigned int) var_11)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((~(var_11))) & (((/* implicit */long long int) ((unsigned int) 0ULL)))))) ^ (var_12)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [(unsigned short)6] [i_0] [i_2] = (~(((/* implicit */int) ((((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned short) 825029966)));
                        arr_11 [i_2] [i_0] = ((/* implicit */unsigned int) var_1);
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_5 [i_2 + 1]))))) : (min((((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) arr_9 [12])))), (((/* implicit */long long int) ((unsigned char) arr_1 [i_0])))))));
                        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_0] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2] [i_0] [i_2 + 1] [i_2])))) - (((/* implicit */int) arr_8 [i_2] [i_0] [i_2] [i_2 + 1]))));
                    }
                    arr_13 [i_0] [i_1] [i_0] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2 + 1] [i_0] [i_0] [i_2 - 1])) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)8391)) : (2085962459)))))));
                }
            } 
        } 
    } 
}
