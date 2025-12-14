/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123463
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))) ? ((-(((/* implicit */int) arr_3 [i_0 - 1])))) : ((-(((/* implicit */int) arr_3 [i_0 - 2]))))));
                    arr_9 [2LL] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((signed char) max((((/* implicit */unsigned int) (unsigned short)24081)), (var_3)))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1768859889)) ? (16471375659747541364ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)19420))) : (min((var_14), (((/* implicit */long long int) (short)-13988))))))));
                var_17 = ((/* implicit */int) arr_16 [i_3] [i_0 + 1] [i_3 + 1] [i_4]);
            }
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (-1975102023)));
        var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) (+(3492390738U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((+((+(161013811523905959LL)))))))));
    }
    var_20 = ((/* implicit */unsigned char) (-((+(25769803776ULL)))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_27 [i_6] [i_6 - 2] [i_6 + 2] [4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) < (-7759162906123012729LL))))) : (var_7))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_29 [i_5] [i_6] [i_7] [i_5]))), (var_10)))), (((((/* implicit */_Bool) ((int) 0LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_7 [i_6 + 3] [i_6 + 3] [i_6 + 2])))));
                                arr_33 [i_9] [i_6] [i_7] [(short)8] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)27267)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) arr_7 [i_6 - 2] [i_6 + 1] [i_9])))));
                                arr_34 [i_5] [i_6] [(signed char)6] [i_7] [i_6] [(unsigned short)14] [i_9] = (!(((/* implicit */_Bool) var_5)));
                                var_22 += ((short) min((arr_16 [i_7] [i_6 + 2] [i_9] [i_9]), (((/* implicit */unsigned short) var_1))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-64)) ? (((/* implicit */int) (short)-3428)) : (((/* implicit */int) (unsigned short)14278)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) ^ (var_12)))))))) - (max((min((var_10), (((/* implicit */unsigned int) (unsigned short)41454)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (var_11))))))));
    var_25 = (+(((/* implicit */int) var_8)));
}
