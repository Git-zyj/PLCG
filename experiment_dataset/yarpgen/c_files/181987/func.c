/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181987
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
    var_20 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 - 1])), ((unsigned short)65530)))) : (arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1 - 1] = ((/* implicit */signed char) var_8);
        var_22 += ((/* implicit */signed char) (-((+(arr_0 [i_1 + 1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)239)), (max((arr_15 [i_5 + 2] [i_5 + 3] [i_5 + 1] [i_5 - 1]), (((/* implicit */unsigned short) (signed char)-1)))))))));
                        var_24 = ((/* implicit */unsigned char) max((min((arr_14 [i_2] [i_3] [(signed char)4] [i_5 + 3]), (arr_14 [i_2] [i_3] [i_3] [i_5 + 1]))), (((((/* implicit */_Bool) (unsigned char)200)) ? (arr_14 [7LL] [i_3] [7LL] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)68))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_8 [i_2]))), (((/* implicit */unsigned long long int) ((signed char) min((arr_7 [i_2]), (((/* implicit */unsigned short) (unsigned char)34))))))));
        arr_17 [(unsigned char)14] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_7 [i_2]), (((/* implicit */unsigned short) arr_1 [i_2]))))) / ((+(((/* implicit */int) (_Bool)1))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))))));
    var_26 = ((/* implicit */unsigned short) var_8);
    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_12) < (((/* implicit */int) var_13))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-14233)) % (((/* implicit */int) (signed char)98))))))))));
}
