/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101952
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) min(((_Bool)1), (var_9))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_0 [i_0] [14ULL])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
                var_12 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1])), (arr_4 [i_0] [i_1])))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-9223372036854775790LL)))) ? (((-9223372036854775790LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-1632))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned short)21]))))) : (((/* implicit */int) min((var_7), (var_9))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (_Bool)1);
                    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 536870912U)) : (arr_9 [i_2])))) ? (((/* implicit */int) (short)4797)) : (((/* implicit */int) arr_5 [i_2] [i_3] [18LL])))), (((((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 4])) * (((/* implicit */int) (_Bool)1))))));
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((long long int) (-(((/* implicit */int) arr_5 [i_2] [i_3] [i_2]))))));
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_4]);
                    var_17 = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
        arr_16 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_5))), (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_2] [i_2 + 1])))));
    }
    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        arr_21 [i_5] [i_5] = arr_5 [i_5] [i_5 + 1] [i_5 + 1];
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [i_5 + 1])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48))))) : (max((((/* implicit */long long int) var_7)), (var_0)))));
        arr_22 [i_5 - 1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))));
    }
    var_19 *= ((/* implicit */_Bool) ((((var_0) & (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))) / (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */short) ((var_0) - (var_0)));
}
