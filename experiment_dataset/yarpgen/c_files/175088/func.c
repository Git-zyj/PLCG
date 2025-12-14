/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175088
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)146)) == (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_13)))))) ? ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) var_12)) ? (arr_10 [i_1] [(unsigned short)2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 3]))))))));
                    var_18 = ((/* implicit */int) var_15);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)0))))))), (min((var_6), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)255)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (max((((/* implicit */int) var_16)), (-1689127762))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_8))));
}
