/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18800
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
    var_15 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_0)));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)24292)) ? (((/* implicit */int) (short)24292)) : (((/* implicit */int) (unsigned short)59816))));
        var_17 = ((/* implicit */unsigned char) (~(min((((1655962056378118361ULL) & (16790782017331433240ULL))), (((/* implicit */unsigned long long int) (~(526101276U))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((16790782017331433255ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 129024U)))) : (arr_4 [i_1 - 1])));
        var_19 = ((/* implicit */short) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (8323072ULL) : (((/* implicit */unsigned long long int) 595570460U)))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) ((((/* implicit */_Bool) (short)-24292)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_14)))));
                        arr_19 [i_2] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */short) (unsigned short)32);
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) min(((unsigned short)16784), (var_4)))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1]))) + (min((2132048683U), (((/* implicit */unsigned int) (_Bool)1))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24292)) != (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_4 [i_2]))))))));
    }
}
