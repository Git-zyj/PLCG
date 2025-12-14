/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10630
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3287163750U)), (17271504372733379368ULL)))) ? (min((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_0)))))))))));
        var_15 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -2971337883559619033LL)) ? (3092291752U) : (3092291752U))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] [9U] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (min((((/* implicit */unsigned long long int) 810540773U)), (1175239700976172247ULL)))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_6 [i_3] [i_3 + 1] [i_3 + 2] [i_3]))) ? (((((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (arr_9 [(short)3] [(short)3] [(short)3] [(signed char)8] [(short)9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((unsigned char)217), (((/* implicit */unsigned char) (_Bool)1))))), (var_2)))) % (min((arr_7 [i_1] [i_0 - 1]), (((/* implicit */long long int) var_9)))))))));
                        var_18 += ((/* implicit */short) var_11);
                    }
                } 
            } 
        } 
        arr_11 [4U] = ((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) (unsigned char)43))))))));
        var_19 *= (~(((/* implicit */int) arr_4 [i_0] [i_0])));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_15 [i_4]);
        var_20 = ((/* implicit */_Bool) min((((int) var_6)), (((/* implicit */int) arr_12 [i_4]))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_21 [i_6 + 1] [i_6 - 1] [i_6 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((1493405100U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) || (((((/* implicit */_Bool) (signed char)-7)) || (((/* implicit */_Bool) (unsigned char)43)))))))) : (min((0ULL), (((/* implicit */unsigned long long int) 3507609564U))))));
                    arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) arr_12 [i_6 + 1]);
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (arr_20 [i_4] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) + (((((/* implicit */_Bool) arr_15 [i_6 + 1])) ? (((/* implicit */long long int) var_2)) : (var_4)))));
                    var_23 = ((/* implicit */int) var_5);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                var_24 += ((/* implicit */int) ((((/* implicit */_Bool) 787357727U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13578))) : ((-(max((((/* implicit */unsigned long long int) (short)13565)), (1175239700976172247ULL)))))));
                var_25 -= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_7])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)14030))) != (431153403U))), (((17271504372733379360ULL) <= (((/* implicit */unsigned long long int) var_2))))))));
            }
        } 
    } 
}
