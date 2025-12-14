/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144972
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((var_3) >> (((((/* implicit */int) (unsigned char)248)) - (239))))))) ^ (((/* implicit */int) var_7))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */long long int) ((short) (-(((/* implicit */int) (unsigned char)7)))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)4))))), (min((var_1), (((/* implicit */long long int) var_3)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [9ULL] [i_1 - 1] [i_2 + 2] [i_3 - 1] = ((((/* implicit */int) (unsigned char)248)) + (((/* implicit */int) arr_5 [i_2 - 1])));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned char)30)) | (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) ((1510383891U) == (var_3))))));
                        arr_11 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)244))))));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((+(var_2))) : (((arr_0 [i_2 + 1]) - (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)42030)), (12582912U))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_0)) ? (4282384384U) : (var_0)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_7)))))))) ? (max((((/* implicit */unsigned int) (unsigned char)15)), ((+(4282384410U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(((/* implicit */int) var_4)))))))));
}
