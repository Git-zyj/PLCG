/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152852
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
    var_13 = ((/* implicit */short) ((max((((/* implicit */long long int) var_0)), (var_7))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned short) ((-776719795792571298LL) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_2 [i_0]);
        var_15 = ((/* implicit */long long int) max((var_15), (min((((/* implicit */long long int) (signed char)45)), (var_1)))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) var_5);
                    arr_16 [(short)4] [i_2] [(short)9] [(short)9] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-15099)), (-776719795792571298LL)))) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_1])) : ((~(((/* implicit */int) (signed char)-14)))))) | (max((((arr_11 [i_1]) | (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_5))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((max(((short)15085), ((short)15098))), (((/* implicit */short) arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1]))))) : (((/* implicit */int) arr_9 [i_3] [i_2] [i_1])))))));
                    var_18 = ((/* implicit */int) var_11);
                    arr_17 [(short)18] [i_3] [i_1] [(short)18] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) (short)-15085)))))) < (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1])))))));
                }
            } 
        } 
        arr_18 [(short)7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [(signed char)8])) > (((/* implicit */int) (short)32763)))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (short)-12325)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_1))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1])))))));
        arr_19 [i_1] = ((/* implicit */long long int) var_6);
        arr_20 [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-20797)) : (((/* implicit */int) arr_8 [i_1])))));
    }
}
