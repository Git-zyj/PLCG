/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145160
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)0)), (-637501212993620456LL)));
        arr_3 [i_0] = max((((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_10)))) & (((/* implicit */int) var_15)))), (((((/* implicit */int) var_10)) | (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (_Bool)1))))))));
    }
    var_21 &= ((/* implicit */unsigned char) (short)13229);
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)13229))) % (-2371838339951400889LL)));
        arr_8 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        var_22 = ((/* implicit */unsigned short) max(((-((-(2371838339951400888LL))))), (((/* implicit */long long int) ((arr_6 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 + 4] [i_2 + 4])) & (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2371838339951400889LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
            var_24 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)63895)) && (((/* implicit */_Bool) arr_10 [i_3]))))))));
            var_25 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_14)), (((((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_8))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
        }
        var_26 = ((/* implicit */short) max((var_26), (arr_12 [(short)10] [i_2] [(short)10])));
    }
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        var_27 *= ((/* implicit */unsigned char) min((((2162779528200142692ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 - 1]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_4])))));
        var_28 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_14 [i_4 + 1] [i_4] [i_4 + 3])))));
        var_29 = ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
    var_30 |= ((/* implicit */_Bool) var_10);
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_2))));
}
