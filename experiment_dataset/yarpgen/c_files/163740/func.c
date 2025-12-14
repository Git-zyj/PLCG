/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163740
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1635268682))))) : (((/* implicit */int) (unsigned char)217))));
                    var_15 &= ((/* implicit */short) min((min((-9223372036854775790LL), (((/* implicit */long long int) var_10)))), (max((arr_7 [i_2] [i_2]), (((/* implicit */long long int) (signed char)-44))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((arr_5 [i_1] [i_2]) / (arr_1 [i_0] [i_1]))) * ((+(-3532100083633767222LL)))));
                    arr_10 [i_0] [(unsigned char)10] [i_0] [(unsigned char)10] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((var_7) << (((((/* implicit */int) arr_2 [i_0])) - (43)))))), (((((/* implicit */_Bool) 4095)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (65408LL)))));
                    var_16 = ((/* implicit */int) var_10);
                }
            } 
        } 
        arr_11 [i_0] [(unsigned short)2] = ((/* implicit */_Bool) max(((unsigned char)95), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)63)) < (((((/* implicit */int) (short)293)) / (((/* implicit */int) (short)-314)))))))));
        var_17 = ((/* implicit */_Bool) max(((+(var_2))), (((/* implicit */long long int) ((var_5) % (((/* implicit */int) arr_2 [i_0])))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0])))) ? (min((arr_4 [i_0] [(signed char)7]), (arr_4 [i_0] [i_0]))) : (arr_4 [i_0] [i_0])));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)11)))))));
    }
    var_20 = ((/* implicit */_Bool) var_4);
    var_21 ^= ((/* implicit */long long int) var_8);
}
