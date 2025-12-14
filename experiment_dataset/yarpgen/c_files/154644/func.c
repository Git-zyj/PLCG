/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154644
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) 107472536U);
        arr_3 [i_0 + 2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)146)) / (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_4)))))) ? ((-(((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */long long int) ((var_0) * (((/* implicit */int) var_9))))) >= (((-1LL) % (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
        var_15 = ((/* implicit */unsigned char) var_11);
        var_16 += ((/* implicit */unsigned int) var_10);
        arr_7 [i_1] = ((/* implicit */short) (-(var_8)));
        arr_8 [(short)6] [i_1] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) + (var_12))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_17 &= ((/* implicit */_Bool) arr_6 [i_2] [i_3]);
                var_18 = (unsigned short)1;
                var_19 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_2 [i_2 + 2])) | (((/* implicit */int) (signed char)-54)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)191)) / (((/* implicit */int) arr_2 [i_2 + 2]))))));
            }
        } 
    } 
    var_20 += ((/* implicit */signed char) min((((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-54))))) - (((((/* implicit */_Bool) (signed char)127)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))))), (((/* implicit */long long int) (-((~(var_10))))))));
}
