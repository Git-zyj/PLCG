/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127985
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
    var_20 = ((/* implicit */short) (+((+((+(((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [(unsigned short)0] [i_1] [i_1] = ((/* implicit */int) (unsigned char)0);
                    arr_7 [11U] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_3);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_0] [(unsigned char)2])), ((unsigned short)65533)))), (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) var_16))))))) ? (min((((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) var_12)))), (((int) 3444807771U)))) : (((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_14)) ? (arr_5 [i_0] [1] [i_0] [i_0]) : (((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)-93))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) 20U);
    var_24 = ((((/* implicit */_Bool) 6945914214958704717ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (322147833425977618LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))))) ? (((/* implicit */unsigned long long int) var_18)) : (((18446744073709551613ULL) + (((/* implicit */unsigned long long int) 3779015827U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_8))))));
}
