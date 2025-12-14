/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120687
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (arr_0 [7] [i_1]) : (((/* implicit */long long int) var_9)))) + (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_1] [10]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (min((var_0), (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_2])))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48975))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))));
                    var_14 *= ((/* implicit */signed char) ((long long int) (+((~(((/* implicit */int) var_8)))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) (signed char)70);
        arr_8 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10)))) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)7168)), (((unsigned long long int) (signed char)-106)))))));
        var_16 = ((/* implicit */long long int) (+((+(((((/* implicit */int) (unsigned short)34387)) - (((/* implicit */int) (unsigned short)58367))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-95)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71)))));
            var_17 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) -743513333660260056LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))));
            var_18 = arr_9 [i_0] [i_3];
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            arr_15 [i_0] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_0 [(short)5] [i_4]));
            arr_16 [i_0] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11)));
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned long long int) var_9);
            arr_18 [4ULL] [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        }
    }
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (+(var_1)))) : (((long long int) 134184960U)))) | (((/* implicit */long long int) ((unsigned int) ((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58346)))))))));
}
