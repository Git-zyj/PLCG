/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124041
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
    var_10 = ((/* implicit */unsigned char) ((10ULL) >> (((2192989382U) - (2192989346U)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((_Bool) var_4));
        var_12 = min((2192989382U), (2192989382U));
        var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) || (((/* implicit */_Bool) var_6))))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (signed char)-113))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2]))) : (3007794038U)))) || (((/* implicit */_Bool) ((arr_1 [i_1 - 1]) ? (23ULL) : (((/* implicit */unsigned long long int) var_2)))))));
    }
    for (signed char i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_7 [i_2] [12ULL] = ((/* implicit */_Bool) arr_6 [i_2 + 2]);
        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (arr_6 [i_2 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) var_2)))))))) : (min((arr_0 [i_2] [i_2 - 1]), (((/* implicit */unsigned int) arr_2 [i_2 + 1]))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (signed char i_5 = 2; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (((((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [(_Bool)1]))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31250)))))))));
                        var_18 = ((unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) var_8))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned int) (~(((unsigned int) arr_1 [i_4]))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 1; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_19 [i_6 + 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 4379778753104824645ULL)) ? (4026129634U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31559)))))));
        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)51)))) : (1679554728U))), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_6])))) * ((~(((/* implicit */int) (signed char)30)))))))));
    }
}
