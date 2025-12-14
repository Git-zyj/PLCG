/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143402
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
    var_13 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) : (max((((/* implicit */long long int) (_Bool)0)), (var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_2] [(short)5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_0 - 2] [i_3 + 2]))) : (arr_4 [i_3 + 2] [i_0 + 1] [i_2]))))));
                            arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = (~(0ULL));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_22 [(signed char)8] [7U] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_1] [i_4] [i_0] [i_6])))))) : (((((/* implicit */_Bool) arr_3 [(unsigned char)0])) ? (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5 + 3] [i_4] [i_1] [i_5])) : (var_8)))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_5] [i_6])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_5]))))) && (((/* implicit */_Bool) min((arr_4 [i_5] [(unsigned short)10] [i_0]), (arr_20 [i_5] [10U] [i_4] [i_5] [i_6]))))))));
                                var_15 = max((((/* implicit */unsigned long long int) var_5)), (min(((+(18446744073709551610ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_4] [i_6])))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] [12] = ((((/* implicit */_Bool) -4611686018427387904LL)) ? (((((/* implicit */_Bool) 9ULL)) ? (9ULL) : (18446744073709551615ULL))) : (18446744073709551615ULL));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (var_2) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (9ULL)));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    arr_32 [i_8] [i_7] [i_9] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_26 [i_9]) << (((((/* implicit */int) var_1)) - (13284)))))), ((~(arr_25 [i_9])))))) ? ((~(var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_7] [i_8])))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_38 [i_8] [i_10] [i_8] [i_8] [i_7] = ((/* implicit */long long int) var_4);
                                var_17 = max((((((/* implicit */_Bool) (signed char)15)) ? (0ULL) : (0ULL))), (((/* implicit */unsigned long long int) ((arr_18 [i_8] [i_8] [1U] [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_1 [i_7])) : (((((/* implicit */_Bool) arr_17 [(signed char)0] [i_8])) ? (((/* implicit */int) arr_33 [(_Bool)1] [i_8] [i_8] [i_10] [i_8] [i_10])) : (((/* implicit */int) var_5))))))));
                                arr_39 [i_7] [i_8] [i_8] [i_8] [(unsigned char)11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) (signed char)14))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (3972650093U) : (((/* implicit */unsigned int) 70555562))))) >= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8ULL))))))) : (-6266934286305044088LL)));
                    arr_40 [(_Bool)1] [i_8] [i_9] [i_9] = ((/* implicit */short) (+(var_3)));
                }
            } 
        } 
    } 
}
