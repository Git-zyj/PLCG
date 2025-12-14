/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18509
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned short)24] |= ((/* implicit */unsigned char) arr_7 [18LL] [i_1] [i_2]);
                    var_13 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) ^ (((((unsigned long long int) arr_8 [(signed char)14])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_2] [i_2])))))));
                    arr_10 [i_2] [i_1] [(unsigned char)3] = ((int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((6619882383215349338LL) / (arr_4 [10ULL])))) ? (((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */unsigned int) ((var_2) * (((/* implicit */int) var_12))))) : (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))))));
                    var_15 = ((/* implicit */_Bool) arr_3 [(unsigned char)19] [i_0 + 3] [i_1 - 1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        for (unsigned int i_4 = 3; i_4 < 7; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_16 ^= min((((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned char)141))))) >> ((((~(((/* implicit */int) (unsigned short)63)))) + (80))))), (max((min((var_2), (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) (signed char)14)) >= (-17)))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((min(((_Bool)0), ((_Bool)0))) || ((!(((/* implicit */_Bool) var_6)))))))));
                    arr_20 [(signed char)2] [i_4] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_3]))), (((/* implicit */unsigned long long int) arr_13 [i_3 - 1] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((((/* implicit */int) arr_5 [i_4])) >> (((/* implicit */int) var_4)))))))) : ((((_Bool)1) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_5])), (var_6)))) : (max((var_8), (((/* implicit */long long int) var_10))))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) arr_7 [23ULL] [i_5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [16ULL])) || (((/* implicit */_Bool) arr_2 [i_3 - 2] [(_Bool)1])))))));
                }
            } 
        } 
    } 
}
