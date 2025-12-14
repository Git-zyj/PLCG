/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107180
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) ((signed char) 2210188720U))) != (((/* implicit */int) var_1))))), (var_7)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) 2210188723U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) var_7)), (2210188705U)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) 2084778589U);
                    arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_2] [i_1]))))) ? ((+(max((0ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (var_2));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [(unsigned char)7] [1ULL]))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
        var_14 = ((/* implicit */unsigned int) var_4);
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_9 [i_3] [i_3]))) ? (((/* implicit */long long int) ((var_8) ^ (((/* implicit */int) var_9))))) : (((long long int) (unsigned short)32817))));
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)4])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4] [i_4])) * (((/* implicit */int) arr_14 [i_4] [i_4]))))) : (max((((/* implicit */long long int) arr_8 [(short)14])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_11 [7U] [7U])))))));
        var_16 = ((/* implicit */unsigned int) ((short) arr_11 [i_4] [i_4]));
        var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [(unsigned char)8] [(unsigned char)8])))), (((((/* implicit */int) arr_10 [i_4] [i_4])) & (((/* implicit */int) var_7)))))))));
        arr_15 [i_4] = ((/* implicit */unsigned short) arr_8 [(_Bool)1]);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_13 [i_4]))))))));
    }
    var_19 -= ((/* implicit */unsigned int) var_5);
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)0))));
}
