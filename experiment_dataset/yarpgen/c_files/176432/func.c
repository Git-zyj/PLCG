/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176432
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) 4294967265U);
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned char)155))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)207);
                arr_11 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34860)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 - 1] [6]))) : (var_11)));
            }
            var_17 += ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_4 [i_0] [3ULL])))) ? (((unsigned int) (signed char)105)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30551)))))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_14 [9] [9] [11ULL] = ((/* implicit */int) ((arr_8 [(signed char)10] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) 2147483647))));
            var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_0])))));
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            arr_19 [i_0] [i_4] [i_0] = (((~(max((((/* implicit */unsigned int) (unsigned char)155)), (3567299032U))))) >= ((-(max((6U), (((/* implicit */unsigned int) (unsigned char)196)))))));
            arr_20 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_4]);
        }
        arr_21 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_12 [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)1)), ((short)32512))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)37)), ((unsigned char)234)))), (min((15896387121437000533ULL), (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (arr_3 [i_0])))))));
        arr_22 [i_0] = min((((((/* implicit */_Bool) (signed char)-112)) || (((/* implicit */_Bool) arr_5 [(unsigned short)4] [i_0] [5U])))), ((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))));
    }
    var_19 = ((((max((var_14), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)29365)) : (((/* implicit */int) var_15))))) : (var_5))) / (((/* implicit */unsigned long long int) var_12)));
}
