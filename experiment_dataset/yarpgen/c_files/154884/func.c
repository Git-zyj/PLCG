/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154884
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) max((arr_0 [4]), (((/* implicit */unsigned int) ((unsigned char) (+(1222983885U)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) -594108835)) ? (var_14) : (((/* implicit */long long int) var_13))))));
        var_18 &= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (short)-2050)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_8))), (((/* implicit */unsigned long long int) arr_0 [i_0])))) == (((((/* implicit */_Bool) (short)15531)) ? (((/* implicit */unsigned long long int) 1773131516)) : (0ULL)))));
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_19 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_3 [i_1 + 2])), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-17055)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 21; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned char) ((int) (!(((/* implicit */_Bool) (unsigned char)157))))));
                    var_21 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3 + 1] [i_1 - 1])) ? (var_14) : (((/* implicit */long long int) arr_12 [i_3] [i_3] [i_3 - 2] [i_1 + 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_4])) << (((arr_12 [i_4] [i_4] [i_4] [i_4]) + (1491432859)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (var_5)))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((443522040) != (((/* implicit */int) arr_6 [i_4])))) ? (1363612698) : (arr_13 [i_4] [i_4]))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) ? (arr_10 [i_4] [i_4] [i_4]) : (arr_10 [i_4] [i_4] [i_4])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((var_5) + (((/* implicit */unsigned int) arr_13 [i_4] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((7476851727062795339ULL) >= (((/* implicit */unsigned long long int) 0))))))));
        var_25 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_8 [i_4]));
    }
    var_26 &= ((/* implicit */unsigned long long int) max((min((max(((-2147483647 - 1)), (((/* implicit */int) (short)-20607)))), (var_13))), ((-2147483647 - 1))));
    var_27 ^= ((/* implicit */unsigned long long int) ((max((3071983411U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 770858300)) ? (1008740668) : (212771334)))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((-212771334) - (((/* implicit */int) (short)-15527)))) : (((/* implicit */int) (short)32767)))))));
}
