/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146419
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) min(((unsigned short)30630), (((/* implicit */unsigned short) (_Bool)1))))))) + (2147483647))) >> (((max(((~(1269674016U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)511))))))) - (3025293257U)))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((short)511), (min(((short)-24015), (((/* implicit */short) var_5)))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [i_1]))))))));
        var_22 |= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((unsigned int) (unsigned short)675))), ((~(1049241994398182198LL))))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1])))))));
        var_23 *= ((/* implicit */_Bool) (unsigned short)675);
        arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)29818)))) >= (((/* implicit */long long int) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_1)))))))), (var_0)));
        arr_7 [i_1] [i_1] &= arr_3 [i_1] [i_1];
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) | (var_14)));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_24 -= ((/* implicit */short) arr_13 [i_2] [i_2] [i_2]);
                    var_25 -= ((/* implicit */unsigned long long int) var_8);
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_3))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */int) min((3265036902U), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_16 [i_5] [i_5] [i_5])))))))));
        arr_23 [i_5] = ((/* implicit */signed char) min((((/* implicit */int) (short)-2809)), ((+(((/* implicit */int) arr_14 [i_5]))))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) arr_14 [i_5]);
        arr_25 [(short)24] &= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20861))));
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6])) > (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6]))))) == (((((/* implicit */_Bool) var_3)) ? (3265036902U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))));
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
        arr_28 [i_6] = ((/* implicit */_Bool) (+(((((((/* implicit */int) var_3)) != (((/* implicit */int) arr_9 [i_6])))) ? (max((((/* implicit */long long int) (short)-513)), (4075582800384475530LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_6))))))))));
        var_29 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) == (2286406283U)));
    }
}
