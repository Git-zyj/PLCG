/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164097
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_3 [(signed char)9] [i_0 + 2] = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned int) (_Bool)0))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))) | (max((-5702011776834033343LL), (((/* implicit */long long int) (_Bool)1))))));
        arr_4 [i_0] [2U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -5702011776834033343LL))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_9 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1])))));
        var_17 = ((/* implicit */_Bool) arr_5 [8]);
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_18 = ((/* implicit */signed char) -5702011776834033340LL);
            var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [(_Bool)0])) ? (min((var_8), (((/* implicit */long long int) arr_8 [i_2] [i_1])))) : (((/* implicit */long long int) var_1)))) < (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) & ((~(5702011776834033357LL)))))));
        }
        for (int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((-5702011776834033343LL) >= (((/* implicit */long long int) ((/* implicit */int) max(((short)-32763), (((/* implicit */short) (_Bool)1))))))));
            arr_16 [i_3] [i_1 - 2] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_17 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((((arr_14 [i_3 - 1] [(_Bool)1] [i_1]) + (2147483647))) >> (((arr_14 [i_3 - 1] [i_3] [i_3]) + (2119449520))))) - (min((((/* implicit */int) arr_12 [i_3 + 1] [i_1 - 1])), (((((/* implicit */int) arr_7 [(short)14])) >> (((((/* implicit */int) (short)2047)) - (2035)))))))));
            arr_18 [i_3] = ((/* implicit */long long int) ((unsigned short) 5702011776834033342LL));
            arr_19 [i_1 + 2] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2053)) ? (((arr_14 [i_1 - 2] [i_3 - 1] [i_3 - 1]) / (arr_14 [i_1 - 2] [i_3 - 1] [i_3 - 1]))) : (min((arr_14 [i_1 - 1] [i_3 + 1] [i_3 + 1]), (((/* implicit */int) var_12))))));
        }
        arr_20 [i_1] [i_1] = ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) (unsigned char)242))))) ? (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))))) : (((((/* implicit */int) arr_15 [(unsigned short)14] [i_1] [i_1 + 1])) & (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 + 1])))));
    }
    var_21 = ((/* implicit */_Bool) (-(var_3)));
}
