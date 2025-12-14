/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15226
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
    var_12 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_7)), (var_10)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) var_0);
                        var_14 = ((/* implicit */int) ((((max((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [4ULL]), (var_6))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 11778505729439884642ULL)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) : (arr_2 [i_3] [2ULL]))) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)42)) + (-2147483644))))));
                    }
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7935706398373876169ULL))))) <= (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) arr_3 [(short)0] [i_1] [i_1])))))))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
                    var_16 = ((/* implicit */signed char) 16383LL);
                }
            } 
        } 
        var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((2305843009213693951ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) << (((((/* implicit */int) arr_10 [i_0] [i_0])) - (227)))))) : (((/* implicit */unsigned short) ((((2305843009213693951ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) << (((((((/* implicit */int) arr_10 [i_0] [i_0])) - (227))) + (88))))));
        var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31002))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 4; i_4 < 20; i_4 += 1) 
    {
        var_19 = ((arr_12 [i_4 + 2]) == (arr_12 [i_4 + 2]));
        var_20 *= ((/* implicit */signed char) arr_13 [i_4]);
        var_21 = ((/* implicit */short) ((signed char) arr_12 [i_4 - 1]));
        var_22 = ((/* implicit */_Bool) arr_13 [i_4 - 3]);
    }
    var_23 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)115)), ((unsigned short)32256)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))));
    var_24 = ((/* implicit */unsigned int) var_11);
}
