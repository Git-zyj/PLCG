/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170418
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
    var_10 = ((/* implicit */long long int) min((var_10), (min((((/* implicit */long long int) (((+(((/* implicit */int) var_1)))) - (((/* implicit */int) max((var_9), (var_8))))))), (((min((var_7), (((/* implicit */long long int) var_5)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)13275)))))))))));
    var_11 ^= ((/* implicit */unsigned short) var_0);
    var_12 = ((/* implicit */long long int) (((~(min((((/* implicit */unsigned int) (unsigned short)24634)), (3174930151U))))) >> (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 509420191U))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((3859751251U) >= (arr_0 [(unsigned char)2]))) ? (min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48909)))))))) ? (((/* implicit */int) ((unsigned char) ((unsigned int) 482779513U)))) : ((+(((/* implicit */int) ((unsigned char) arr_0 [7LL])))))));
        var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1])))))));
        arr_6 [i_1] [4U] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)244)))) ^ (((((/* implicit */_Bool) ((arr_0 [i_1]) << (((arr_2 [i_1] [i_1]) - (3916941903U)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) arr_2 [1U] [1U])) ? (((/* implicit */int) (unsigned short)24623)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((0U) > (1037526422U)));
        var_16 = ((/* implicit */unsigned short) max((var_16), ((unsigned short)1412)));
        var_17 *= ((/* implicit */unsigned char) arr_4 [0LL] [0LL]);
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_13 [(unsigned short)14] |= ((/* implicit */unsigned int) arr_9 [i_2] [i_2]);
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [(unsigned short)11])) == (((/* implicit */int) arr_9 [i_3] [(unsigned short)4]))))) << (((min((arr_8 [i_2]), (((/* implicit */long long int) arr_9 [(unsigned short)6] [i_3])))) - (13991LL))))))));
            var_19 = ((/* implicit */unsigned short) arr_10 [i_2]);
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned int) arr_12 [i_2] [i_2])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2] [5LL])) >= (((/* implicit */int) arr_12 [i_2] [i_2])))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_10 [i_2])))), ((!(((/* implicit */_Bool) arr_12 [(unsigned short)6] [8U]))))))) : (((/* implicit */int) (((~(((/* implicit */int) arr_12 [i_2] [i_2])))) > (((((/* implicit */int) arr_12 [i_3] [i_2])) ^ (((/* implicit */int) arr_10 [i_2])))))))));
        }
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2])) / (((/* implicit */int) arr_15 [i_2]))));
            arr_17 [(unsigned short)14] [6U] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)226))));
        }
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2]))))) && (((/* implicit */_Bool) arr_16 [i_2] [(unsigned short)6] [(unsigned short)6]))));
    }
    var_23 += var_4;
}
