/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126711
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (var_2))) : (((/* implicit */unsigned long long int) 767747466))));
    var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)4817)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14105))) : (3230542708370451825ULL)));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5041))) : (((((/* implicit */_Bool) (short)-25592)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (3423541311561029914ULL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((-928495573210660947LL), (((/* implicit */long long int) (signed char)32))));
                    arr_10 [i_2] [i_1 + 1] [1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((10ULL) / (arr_3 [i_2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((~(430000520U))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((unsigned long long int) var_11));
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)1)) + (-422566485)))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)77)), (-6274786314797716651LL)))) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3])) : ((-(((((/* implicit */_Bool) 862520746U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
                    }
                } 
            } 
        } 
        arr_23 [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_13 [i_3]));
        arr_24 [i_3] = ((/* implicit */int) ((((long long int) arr_21 [i_3] [i_3])) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3774483889U)) || (((/* implicit */_Bool) var_5))))))));
        arr_25 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-14266)), ((unsigned short)65533)))) - (65513)))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) arr_18 [11U] [i_3] [i_3] [11U])))));
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        arr_29 [(unsigned short)11] = ((/* implicit */int) ((unsigned long long int) 4294967272U));
        arr_30 [i_7] &= ((/* implicit */unsigned int) ((int) 425322187));
    }
    for (signed char i_8 = 2; i_8 < 15; i_8 += 1) 
    {
        var_19 = ((/* implicit */signed char) (+(4294967295U)));
        arr_35 [i_8] = ((236479359U) & (117440512U));
    }
}
