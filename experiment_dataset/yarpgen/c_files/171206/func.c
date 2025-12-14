/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171206
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_1)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (((_Bool)1) ? (19LL) : (((/* implicit */long long int) 127))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_13))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 14820581493366610902ULL)) ? (1514616339557255044ULL) : (((/* implicit */unsigned long long int) -1)))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? ((~(arr_1 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_0 [0LL]))))))))))));
        var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) var_4))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */int) var_11);
        arr_5 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) 24ULL)) ? (1514616339557255045ULL) : (((/* implicit */unsigned long long int) 21U))));
        var_21 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)192)) : (var_3)));
    }
    for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) var_3);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) max((arr_11 [i_2 - 1]), (((/* implicit */unsigned long long int) max(((unsigned char)79), (((/* implicit */unsigned char) (signed char)110)))))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((2809346232U) | (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_4 - 1] [i_2])) : (((/* implicit */int) (unsigned char)157))))) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1946273895U)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) 13ULL);
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            for (long long int i_6 = 3; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_22 [0] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)179))));
                    var_24 += ((/* implicit */_Bool) min((min((2017712415U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_20 [i_2] [i_5 + 1] [i_2] [i_2]))))));
                    var_25 = ((/* implicit */unsigned char) ((arr_20 [i_2 - 3] [i_2] [i_2 - 1] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 - 2] [i_5 + 1]))))))));
                    var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) * (0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)80)))) : (max((18446744073709551613ULL), (((/* implicit */unsigned long long int) (unsigned char)216))))))));
                    arr_23 [i_2] [i_5 + 1] [i_6 - 2] [i_2] |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_6))));
}
