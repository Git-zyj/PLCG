/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187412
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((-(-2621604418133272472LL))) & (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)37719)), (451869005))))))) & (var_11)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) var_8);
                        var_19 = ((/* implicit */long long int) ((max((arr_3 [i_1]), (arr_3 [i_2 + 1]))) == (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_3]) : (arr_3 [i_1])))));
                        arr_8 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((-5447817894609612990LL), (((/* implicit */long long int) ((unsigned short) var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [(signed char)1] [15LL] [5ULL] [5ULL] [15LL])), (arr_1 [i_0]))))))) : ((~(((/* implicit */int) (unsigned char)138))))));
                        var_20 -= ((((/* implicit */_Bool) var_13)) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]))))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)123)))), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) != (arr_5 [i_0]))))))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_22 = ((/* implicit */short) ((int) (unsigned char)128));
        var_23 ^= ((/* implicit */signed char) arr_12 [i_4]);
        var_24 *= ((/* implicit */short) var_4);
    }
    var_25 &= ((/* implicit */signed char) (+((+(-3744114734435078084LL)))));
    var_26 = var_7;
}
