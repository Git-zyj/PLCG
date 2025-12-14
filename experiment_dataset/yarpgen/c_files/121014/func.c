/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121014
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
    var_18 = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)64002)), (10206676765058586839ULL))))))))))));
    var_20 += ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_4 [12U] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_3 [6U])) | (((/* implicit */int) arr_2 [(signed char)8])))))) && (((/* implicit */_Bool) (+(arr_1 [i_0]))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (max((((((/* implicit */_Bool) arr_3 [(short)2])) && (((/* implicit */_Bool) arr_3 [(signed char)12])))), ((!(((/* implicit */_Bool) arr_3 [(signed char)0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_1])) == (arr_0 [i_2])))) >> (((arr_6 [i_1]) + (62987709858290701LL))))))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(arr_6 [i_2]))))));
            var_26 = ((/* implicit */_Bool) var_7);
        }
        for (short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (_Bool)1))) * (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (18446744073709551612ULL)))) && ((!(var_6)))))))))));
            arr_11 [4ULL] = ((/* implicit */signed char) arr_6 [i_3]);
            var_28 ^= ((/* implicit */unsigned short) var_2);
        }
        var_29 -= ((arr_5 [i_1]) << (((((unsigned long long int) arr_5 [i_1])) - (5724627438528751989ULL))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [(short)10] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_1])))) : (max((15843519609697863344ULL), (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (2603224464011688259ULL)))))));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_2 [i_1]))));
    }
}
