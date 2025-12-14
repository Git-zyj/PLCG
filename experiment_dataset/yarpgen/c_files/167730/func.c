/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167730
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) ((((-1594721716) + (2147483647))) >> (((-65887057) + (65887063)))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned int) var_6)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
            var_14 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) arr_2 [i_2])), (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))));
        }
        var_15 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) : (983592406U)))));
        var_16 = ((min((((/* implicit */unsigned long long int) arr_5 [i_1] [(unsigned char)4])), (var_4))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [2U]))) ^ (arr_3 [i_1]))) : ((+(arr_3 [i_1])))))));
        var_17 &= ((/* implicit */int) arr_2 [i_1]);
        var_18 = (~((~(arr_3 [i_1]))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((~(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (short)-8545)) : (((/* implicit */int) (unsigned short)2044)))))) ^ (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        var_20 -= ((/* implicit */int) (((((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [7U])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) min(((unsigned short)3883), (((/* implicit */unsigned short) (short)32752)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    arr_13 [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((arr_6 [i_5] [i_4]) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_4 + 2] [i_5] [i_5])) : (((/* implicit */int) var_6))));
                    arr_14 [i_3] [(unsigned char)17] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_6 [i_4 - 1] [i_3 + 1]))))) / (((arr_6 [i_4 - 1] [i_3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1]))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_3)), (var_4))))));
                    var_22 = var_3;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_23 = ((/* implicit */int) var_6);
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_10))));
            arr_18 [i_6] [i_6] [i_3] = ((/* implicit */short) var_0);
            var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 + 1])) || (((/* implicit */_Bool) var_10))))), (max((501426222U), (((/* implicit */unsigned int) (short)13549))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        var_26 = ((/* implicit */int) var_2);
        arr_22 [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_10)), (var_4))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_5))))))))));
    }
}
