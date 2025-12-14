/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101482
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned char) var_4))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_11 = ((((/* implicit */_Bool) (-(var_8)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)45378)))));
            var_12 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_2] [i_0] [i_1] [(signed char)2] [i_1] |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_3] [i_3])) ? (arr_4 [i_0 + 2]) : (((/* implicit */int) var_2)))));
                        var_13 ^= ((/* implicit */signed char) (unsigned char)0);
                        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2622458761039912474LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (14771531204930072373ULL)))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 4060627359U))));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)1)))))))));
            arr_12 [i_1] |= ((/* implicit */signed char) var_4);
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) max((arr_8 [i_0] [i_4] [i_4] [i_0 + 2] [i_0 - 1] [i_4]), (((/* implicit */int) arr_2 [i_0]))));
            arr_16 [i_4] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-2)), (3072LL)))) ? ((-(arr_7 [i_0] [i_4] [i_4] [i_4] [i_0 + 1] [3U]))) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            arr_20 [i_5] &= ((/* implicit */int) (+(var_7)));
            var_17 *= ((/* implicit */unsigned int) (+(((int) (_Bool)1))));
        }
        var_18 |= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) -824277717)) ? (4496806115677107590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0 + 1]))))))), (var_9)));
    }
}
