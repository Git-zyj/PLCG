/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16980
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) 3290172025U);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [0U] [0U])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))), (((unsigned int) 0U))));
                var_16 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_10)), (min((min((var_9), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_13 [i_3] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) -6243621446398684004LL)))))) < (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                    var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_3 + 3])))) ? (((unsigned long long int) min((0LL), (((/* implicit */long long int) (unsigned short)44624))))) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (3959610929619209930ULL)))));
                    var_19 ^= ((/* implicit */unsigned short) 6934299898682750501ULL);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1433573573U)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_1))) : (((/* implicit */unsigned long long int) 2861393723U))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2861393722U)) ? (((/* implicit */long long int) arr_7 [i_2])) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (arr_11 [i_3] [i_3] [i_4] [i_3 - 2])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    var_22 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)98)), (arr_7 [i_6]))) + (((((/* implicit */_Bool) 0LL)) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
                    var_23 = ((/* implicit */int) (((((((~(0LL))) + (9223372036854775807LL))) >> ((-(4294967295U))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54027)))));
                    arr_18 [i_2] [i_2] [2LL] [2LL] = ((/* implicit */long long int) (-(((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) != (0LL))), (((((/* implicit */int) (signed char)0)) != (((/* implicit */int) var_14)))))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_15 [i_5]))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2]))));
        arr_19 [i_2] [i_2] = (+(min((5199357622006048207ULL), (((/* implicit */unsigned long long int) (unsigned char)193)))));
    }
    var_26 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)0)), (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((_Bool)0)))))))));
}
