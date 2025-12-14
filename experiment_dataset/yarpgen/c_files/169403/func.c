/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169403
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
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62691)) | (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)33427);
        var_15 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((36996941U), (3961768214U)));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-78))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [(unsigned char)6] |= ((/* implicit */unsigned int) ((signed char) max((arr_7 [i_1 + 2]), (((/* implicit */long long int) (unsigned short)15)))));
                    var_16 |= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (var_12))))))), ((+(((/* implicit */int) arr_10 [i_1 - 1] [i_1]))))));
                }
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9669))) | (min((((((/* implicit */_Bool) (unsigned char)0)) ? (333199081U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (unsigned short)63))))));
        arr_15 [i_1] = ((/* implicit */unsigned short) 1428648978U);
    }
    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45))) % (20LL))), (((/* implicit */long long int) (signed char)42))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1350))) : (((var_11) | (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1339))) : (-21LL)))))));
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) (short)-22985))))))))));
}
