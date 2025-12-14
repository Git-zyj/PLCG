/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168362
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = (short)-29431;
        var_19 = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32736)) <= (((/* implicit */int) (unsigned short)54391))))), (arr_0 [i_1])));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_20 [i_4] [i_4] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)29083))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 3; i_5 < 18; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_2 - 1] [i_2] [i_3 + 1] [i_5 - 3])))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) arr_14 [i_5] [i_3] [i_2 - 1])), (((((var_1) + (9223372036854775807LL))) >> (((arr_4 [i_1] [i_5 - 3]) - (13159693865404828442ULL))))))))));
                        }
                        var_22 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (min((((/* implicit */unsigned long long int) var_8)), (9382957596072526531ULL)))));
                        var_23 = ((var_5) ? (8182849675344339646ULL) : (((((8182849675344339646ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) << (((((/* implicit */int) (unsigned short)3893)) - (3840))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        arr_25 [i_1] [i_1] [i_2] [i_3 - 1] [i_6 + 1] = ((/* implicit */unsigned short) var_5);
                        var_24 = ((/* implicit */unsigned char) var_0);
                    }
                    var_25 -= ((/* implicit */short) (unsigned short)11145);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 10263894398365211970ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7893689517699760357LL)))))) : (((arr_7 [i_8] [(unsigned char)8]) ? (min((((/* implicit */long long int) (unsigned char)64)), (-2839892108503060144LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [7LL] [i_8])))))));
                                arr_33 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 2] [i_3 - 1] [19LL]))) : (min((((/* implicit */unsigned long long int) (unsigned char)243)), (var_10))))) << (((max((var_7), (((((/* implicit */_Bool) var_18)) ? (arr_28 [i_1] [i_2] [i_2] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))))))) - (152941921696540152LL)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 2] [i_3 - 1] [19LL]))) : (min((((/* implicit */unsigned long long int) (unsigned char)243)), (var_10))))) << (((((max((var_7), (((((/* implicit */_Bool) var_18)) ? (arr_28 [i_1] [i_2] [i_2] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))))))) - (152941921696540152LL))) - (5593295178294164215LL))))));
                                var_27 = min((min((arr_18 [20LL] [i_2] [i_8 + 1] [i_2 - 1] [i_8]), (arr_18 [i_1] [i_2] [i_8 + 1] [i_2 - 1] [i_8 - 2]))), (((long long int) arr_18 [i_3] [i_2] [i_8 + 1] [i_2 - 1] [i_1])));
                                arr_34 [i_2] [i_7] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 2839892108503060144LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) (-(var_1)));
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_12))));
}
