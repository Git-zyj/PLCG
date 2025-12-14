/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163120
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
    var_16 -= ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) var_5);
        var_18 &= ((/* implicit */unsigned long long int) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 3])) - (arr_2 [i_0] [(unsigned short)3])))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) >= (-2147483635)))) : ((-(((/* implicit */int) (unsigned char)107))))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) var_9);
                            arr_19 [i_1 - 3] [(unsigned char)3] [i_3] [4] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [7LL] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [6LL])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_12 [i_1] [(short)9] [i_1] [9] [i_5] [(_Bool)1]))))))) << (2ULL)));
                            var_20 *= ((/* implicit */short) ((signed char) (signed char)84));
                        }
                        arr_20 [(_Bool)1] [i_2 + 1] [i_4] [i_4] [(short)8] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 + 2]))));
                        var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4] [i_4] [(unsigned char)6] [(unsigned char)6] [i_2] [i_1]))))) : (min((2ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))) % (var_7)));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_1]);
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) arr_4 [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1])) % (((/* implicit */int) (unsigned char)133))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(_Bool)0] [i_1 - 3] [i_1] [(_Bool)0])) || (((/* implicit */_Bool) var_5)))))) : (arr_11 [i_1] [i_1] [i_1] [i_1])))));
    }
}
