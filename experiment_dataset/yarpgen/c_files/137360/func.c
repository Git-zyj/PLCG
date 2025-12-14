/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137360
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
    var_14 = (((+(var_12))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18981)) ^ (((/* implicit */int) (unsigned char)101))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_15 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_3 [i_2]), (((/* implicit */unsigned char) var_10))))) ? (arr_7 [i_3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((1325091575U), (((/* implicit */unsigned int) (unsigned char)101))))))), (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_2 + 1] [i_1 + 1])))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15480)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_2 + 2] [i_2 + 2]))))) : ((+(max((((/* implicit */unsigned int) arr_3 [i_2])), (arr_8 [i_3] [i_1])))))));
                        arr_12 [i_2 + 1] [i_1] [i_0] = ((/* implicit */_Bool) (+((+(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) & (((/* implicit */int) (unsigned char)203)))))) ? (((arr_8 [i_0] [i_0]) + (((/* implicit */unsigned int) -360536810)))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)192)) * (((/* implicit */int) arr_2 [i_0] [i_0])))) - (max((((/* implicit */int) (_Bool)1)), (-913163994)))))))))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) (short)-22084)) | (((/* implicit */int) arr_1 [i_0]))));
    }
}
