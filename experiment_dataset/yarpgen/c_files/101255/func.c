/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101255
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_10)), (var_9))) : (((/* implicit */unsigned long long int) ((var_6) + (5222863406519396943LL)))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((+(-5222863406519396969LL)))))) ? (68719476735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)24836))))), (((unsigned int) (unsigned char)208))))) > (((((/* implicit */_Bool) arr_1 [i_0] [13ULL])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (signed char)123)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_1] [12U]) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_1] [i_1]) && (arr_2 [i_1] [i_1]))))) : (((unsigned int) arr_2 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)53225))))), ((~(arr_4 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)87))))) ? (3720294357U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_3] [i_1]))))))));
                    arr_13 [i_1] [i_2] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(916800995513799627LL)))))))) | (arr_4 [i_2]));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((((arr_8 [i_1]) - (arr_8 [i_2]))) + (arr_10 [i_3] [i_2] [i_2])))))));
                }
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)40703)) == (128)))) >= (((int) arr_8 [i_1]))));
        var_19 |= ((/* implicit */signed char) (-(arr_1 [i_1] [i_1])));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_21 [i_5 - 1] [i_4] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_9 [i_4])) || (((/* implicit */_Bool) arr_4 [i_4])))))))) ^ ((+(((((/* implicit */_Bool) arr_1 [i_6] [i_4])) ? (arr_1 [i_4] [i_5 - 2]) : (((/* implicit */long long int) arr_11 [i_4] [i_5 + 3] [i_6]))))))));
                    arr_22 [i_6] [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) arr_10 [i_5 - 2] [i_5] [i_5 + 2]);
                    var_20 = ((/* implicit */unsigned short) arr_20 [i_4] [2LL] [i_4]);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_4] [i_4] [i_4]) >> (((arr_11 [i_4] [i_4] [i_4]) - (995795296U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((14766451415508949701ULL) > (((/* implicit */unsigned long long int) arr_15 [i_4])))))) : (arr_9 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4] [(unsigned char)0] [i_4]))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12301))) : (arr_4 [i_4])))));
    }
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)24838))))), (var_6)));
    var_23 = ((/* implicit */short) var_11);
}
