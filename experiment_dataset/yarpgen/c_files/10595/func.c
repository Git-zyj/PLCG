/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10595
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (signed char)77)))) + (87)))))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [2LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0]))) >= (((var_8) ? (((/* implicit */int) (unsigned short)2061)) : (-2002477042)))))) * (((arr_3 [i_0 + 3] [i_0 + 3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                    var_14 = (+(min((2408147134U), (((/* implicit */unsigned int) (short)21740)))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)-110)), (2179784806U))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_0 - 2]))) < (0ULL)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(short)9] [7ULL] [(signed char)24]))) - (var_1)))) ? (max((var_11), (((/* implicit */long long int) arr_0 [i_0])))) : (var_2))) & (((/* implicit */long long int) (+(268435456U))))));
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_0] [i_0 - 2] [10LL]))));
                        arr_12 [i_0] [12] [12] [12] [(_Bool)1] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)13] [i_0]);
                        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4324734619574390711ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-13167))))) : (max((((/* implicit */unsigned int) arr_3 [i_2] [(short)10])), (1886820161U)))))) || (((((/* implicit */int) ((((/* implicit */_Bool) -2147483634)) || (((/* implicit */_Bool) (signed char)-61))))) < (((/* implicit */int) ((((/* implicit */int) (signed char)7)) >= (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [2ULL] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 1] [i_0 + 3])) < (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2] [i_0 + 2])))) || (((/* implicit */_Bool) max((((/* implicit */signed char) arr_2 [i_0 - 2] [i_0 + 1] [12LL])), (var_7))))));
                        var_18 = (-(1565463025U));
                    }
                    arr_17 [i_0] [9ULL] [i_0] [(unsigned short)16] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((-1315994480129972879LL), (((/* implicit */long long int) ((((/* implicit */int) (short)21003)) > (arr_5 [i_0] [i_0] [(signed char)20] [i_0]))))))), (((2ULL) + (((/* implicit */unsigned long long int) 1965992196982665221LL))))));
                }
            } 
        } 
    } 
}
