/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146065
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
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((var_9), (((/* implicit */signed char) var_13)))))));
    var_19 = ((/* implicit */short) min(((-(max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) var_14))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [(unsigned char)13])) : (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
        var_21 = ((/* implicit */short) ((signed char) 612677666U));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_22 = (!(((/* implicit */_Bool) (~(((long long int) 260014240U))))));
        arr_4 [i_1] [(signed char)9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1556))) > (((long long int) ((_Bool) 3096921406561529821ULL)))));
        arr_5 [i_1] = ((/* implicit */short) max(((+(min((var_7), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 4294967295U))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (max((17416465861919106606ULL), (((/* implicit */unsigned long long int) var_6)))) : (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    arr_15 [i_3] [i_3] [5] [i_4] = max((((/* implicit */unsigned int) ((signed char) var_8))), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)12988)), ((unsigned short)65527)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (arr_10 [i_2] [i_3]))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((int) var_9))), ((-(arr_10 [i_2] [i_2]))))), (((/* implicit */unsigned int) var_12))));
        arr_16 [i_2] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) 17950212608809175356ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))))))));
    }
    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) (short)-21603)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((+(260014243U))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))));
    var_27 = var_16;
}
