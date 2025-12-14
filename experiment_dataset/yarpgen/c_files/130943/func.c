/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130943
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) ^ (8183090870039356671ULL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) < (0U)));
            arr_5 [5ULL] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) 4115679703U))))));
        }
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6592028019034436609LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) : (((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (3219210619U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1893929208191820452LL)) || (((/* implicit */_Bool) 0U)))))) : ((~(18446744073709551595ULL)))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_23 = ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775296LL))) : (arr_7 [i_2])));
        var_24 = ((/* implicit */unsigned short) 9223372036854775797LL);
        arr_9 [i_2] = ((/* implicit */int) (+(((unsigned int) (unsigned char)140))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_12 [i_3] [(unsigned short)1] = (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (unsigned short)15663)), (179287593U))))));
        var_25 = ((4294967295U) - (0U));
        var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((int) arr_10 [i_3]))) ? (8183090870039356665ULL) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) >> (((134217727U) - (134217684U))))))))));
        var_27 = ((/* implicit */int) 1141488187U);
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */int) (unsigned short)11445))))))))) >= (((((/* implicit */_Bool) 0LL)) ? (((long long int) (unsigned short)29714)) : (min((((/* implicit */long long int) 179287592U)), (-9223372036854775798LL)))))));
}
