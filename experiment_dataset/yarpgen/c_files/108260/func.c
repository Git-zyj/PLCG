/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108260
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_6 [(_Bool)1])))))) ? (((((/* implicit */_Bool) 9120105430037679419LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (9120105430037679419LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 + 2]))))))));
                var_20 = (+(-9223372036854775802LL));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */_Bool) ((((1583738600) < (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])))) ? (((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])))))));
                    var_21 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))) : (-9120105430037679420LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned char)6] [i_1] = ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) != (arr_1 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                                arr_16 [i_4 + 2] [i_2 - 2] [(signed char)4] [i_2 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [19ULL] [i_3 + 1] [i_1])) > (((/* implicit */int) arr_11 [9LL] [i_3 + 2] [i_0]))))), ((-(9120105430037679419LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_1] [(_Bool)1] [i_5] [3LL] [i_5] [i_0] = ((/* implicit */long long int) (~(arr_1 [i_2])));
                                arr_24 [i_0] [i_0] [3LL] [i_5] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (11U)));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), (var_7)))) ? ((~(var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 2]))) < (2097151LL))))))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [18ULL] [i_2 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1]))))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-13230))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_32 [i_7] [7LL] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_9)) & (arr_1 [i_0 - 2]))), (((/* implicit */unsigned long long int) (~(arr_12 [i_9 + 1]))))));
                                var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (55689150982912643LL) : (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775801LL) != (var_17))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 16; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))));
                                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 - 4] [i_1] [i_11 + 3]))) >= (var_14))))));
                            }
                        } 
                    } 
                    arr_40 [i_0 + 2] [i_1] [i_7] = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
                }
                var_28 = ((/* implicit */short) (unsigned short)127);
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0])) ? (var_17) : (var_3)))) : (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) | (18446744073709551610ULL)))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max((-183416860), (((/* implicit */int) var_5)))))));
    var_31 = var_3;
}
