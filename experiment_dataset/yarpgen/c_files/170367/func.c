/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170367
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
    var_14 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_7) : (((((/* implicit */int) (unsigned char)63)) - (((/* implicit */int) (signed char)-19)))));
    var_15 &= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned short) max((476905232U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned int) var_2)) : (arr_0 [i_0])))));
        var_17 ^= ((/* implicit */unsigned char) max((((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)2)) ? (2191606111U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-11467)) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) | (var_10)))) ? (max((var_4), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_1] [i_1]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (1109842738U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)53763)) && (var_6))))))));
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1])), (((((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_3])) & (((/* implicit */int) (unsigned short)20))))));
            }
            for (long long int i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))), (((/* implicit */unsigned int) (unsigned short)27275))));
                var_22 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) 1109842736U)) - (arr_9 [i_2] [i_4 + 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_8 [i_4 - 1] [i_2 + 1] [i_1])), (arr_15 [i_4] [i_2 + 1] [i_1]))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_23 = ((/* implicit */int) (+(var_13)));
                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-32747))));
            }
            arr_19 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2 + 1] [i_2 - 1]))) - (var_2))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
            arr_20 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_3 [i_1])) | (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_17 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) (~(arr_3 [i_2 - 1]))))));
        }
    }
}
