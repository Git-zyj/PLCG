/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16905
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_13))))) <= ((+(6373984288344247867LL)))))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52158))) & (var_10))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((262143U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)29688))))))) | (((unsigned long long int) var_0))));
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) arr_5 [10LL] [10LL] [(short)5] [i_0]));
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [i_1] [(short)1] [(signed char)16] [(signed char)15]);
                    var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((int) var_14))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2848892765U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_1] [12]))))) : (((((long long int) (short)32764)) | (min((arr_6 [i_2] [i_2] [i_1] [i_2]), (((/* implicit */long long int) (unsigned char)193))))))));
                    arr_10 [4] [i_2] [i_2] [(unsigned short)0] = ((/* implicit */unsigned short) 8904362193117438734LL);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2924383036U)), (-3886483087446247790LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (3084304244U))))))))) : (((unsigned int) var_0))));
}
