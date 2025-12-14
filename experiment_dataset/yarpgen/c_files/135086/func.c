/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135086
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [20] = max((min((arr_2 [i_1]), (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_2)))))), (((/* implicit */int) (unsigned char)2)));
            arr_6 [(_Bool)1] [i_0] = ((/* implicit */int) var_3);
        }
        arr_7 [10ULL] [i_0] |= var_3;
        arr_8 [12U] |= max((((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_13)))) ? (((((/* implicit */int) (unsigned char)254)) | (((/* implicit */int) arr_1 [i_0] [(_Bool)1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [(unsigned short)20] [(unsigned short)20])), (arr_1 [(unsigned char)16] [(unsigned char)16])))) | (((/* implicit */int) max((((/* implicit */short) var_8)), (var_14)))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_16 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
            arr_12 [i_0] = ((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)36319)) : (arr_2 [(unsigned short)9]))) : (((((/* implicit */int) (signed char)88)) % (((/* implicit */int) (unsigned short)29333)))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
        {
            arr_15 [i_0] [i_0] [6] = ((/* implicit */signed char) ((int) var_8));
            arr_16 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (1301412060628450057LL))) + (((/* implicit */long long int) 3U))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_17 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 - 1])) ? (var_10) : (((/* implicit */int) var_5)))), (arr_17 [i_4 + 1] [i_4 + 1])));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (var_6) : (((/* implicit */unsigned int) -426768427)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)65524)))))))) ? (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : ((-(max((((/* implicit */unsigned int) (unsigned char)138)), (4294967295U))))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 10499728396711851261ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 2850923444U)) : (137422176256LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            arr_22 [i_0] [i_5] = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_7))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)24))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_5])) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_2)))))))));
            var_20 ^= ((/* implicit */_Bool) arr_0 [(unsigned short)8] [i_5]);
            var_21 *= ((/* implicit */_Bool) ((var_10) + (267386880)));
            var_22 = (-(((((/* implicit */_Bool) ((var_3) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [18LL] [9LL])))))) ? (max((var_12), (arr_2 [(_Bool)1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
        }
    }
    var_23 ^= var_10;
}
