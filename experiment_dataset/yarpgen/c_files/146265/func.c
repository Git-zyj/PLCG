/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146265
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
    var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)13))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((var_13), (((/* implicit */short) (_Bool)1)))))))));
    var_18 = ((/* implicit */int) min(((~(((((/* implicit */_Bool) 15258549818612055134ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57060))) : (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))) % ((+(((/* implicit */int) (short)32767)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_6 [i_0] [i_0])))) % ((~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_1]) : (min((((/* implicit */long long int) (short)-13532)), (-7821508765809291164LL)))))) ? (arr_1 [13] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (0LL) : (((/* implicit */long long int) arr_8 [(unsigned char)19] [i_0])))))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_2 [(signed char)1])))))), (((/* implicit */int) min((((/* implicit */short) var_1)), (var_11)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_8)))) ? (((/* implicit */int) min(((unsigned char)94), (((/* implicit */unsigned char) (_Bool)1))))) : ((~(((/* implicit */int) var_14)))))));
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (min((((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_10))), (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))))));
}
