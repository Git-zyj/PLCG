/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146582
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((12ULL) + (((/* implicit */unsigned long long int) (+(var_3))))))) ? (var_13) : (((((((/* implicit */int) var_11)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_1 [i_0]))) - (max((((/* implicit */int) var_11)), (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */signed char) (((+(21))) >> (((/* implicit */int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)33299))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((-5) >= (((/* implicit */int) arr_0 [i_1]))))) >= (1006632960))))));
        arr_6 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_1]))))), (var_2)));
        var_22 = ((/* implicit */signed char) (unsigned short)33290);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) var_7);
                    var_23 = ((/* implicit */signed char) ((((((-1) | (((/* implicit */int) (unsigned short)32216)))) != (1015533135))) && (((((/* implicit */_Bool) (~(arr_11 [i_2])))) && ((((_Bool)1) || (((/* implicit */_Bool) arr_1 [3LL]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_15 [i_4]);
        arr_17 [i_4] [i_4] = (signed char)-82;
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) arr_18 [(short)8]);
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)108))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_2)))));
    }
}
