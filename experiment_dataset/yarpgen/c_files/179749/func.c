/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179749
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((_Bool)1) ? (288230376151646208ULL) : (((/* implicit */unsigned long long int) 1996789288U)))))));
    var_17 = ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) 2298178008U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((+((~(arr_3 [(short)12]))))) ^ (min((max((1854200906U), (3478991663U))), (((/* implicit */unsigned int) (signed char)-100)))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) ((((((var_0) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))) + (2147483647))) << (((((((/* implicit */unsigned long long int) -1316248605)) | (18446744073709551615ULL))) - (18446744073709551615ULL)))));
                    arr_8 [i_0] [i_1] [(unsigned char)11] [i_2] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3019752879U))) >> (((var_12) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2]))))))) ? ((~(815975634U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_1] [i_0])), (arr_5 [i_0 - 2] [i_1])))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3019752879U))) >> (((((var_12) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])))) - (116)))))) ? ((~(815975634U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_1] [i_0])), (arr_5 [i_0 - 2] [i_1]))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */long long int) min((2440766390U), (1854200906U)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) : (-1LL)))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0 - 1])), (arr_1 [i_0]))) + (9223372036854775807LL))) >> (((min((((/* implicit */int) arr_6 [(unsigned short)7] [i_0] [i_0 + 1] [i_0 + 1])), (arr_2 [i_0] [i_0] [i_0 - 2]))) + (1071259115)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (!(((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))))));
}
