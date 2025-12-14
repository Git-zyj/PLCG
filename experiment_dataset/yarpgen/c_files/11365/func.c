/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11365
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
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) (short)18789)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (11827266119404947278ULL)));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (117440512) : (((/* implicit */int) (short)-16415))))))) ? (((/* implicit */int) ((short) 6619477954304604338ULL))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6)))))))))));
    var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_7)) & (var_12))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 6619477954304604357ULL))));
        arr_4 [i_0] [i_0] = ((_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_1 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_1 + 1] [i_2] [i_3] [i_4] [i_3] [i_3] = ((((/* implicit */_Bool) min((arr_11 [(unsigned char)20] [i_3] [i_0]), (((/* implicit */int) ((arr_10 [i_1] [i_3] [i_4 - 2]) < (((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [i_2] [i_4])) : (arr_8 [i_0] [i_1 + 1])))))))) : (min(((-(9218868437227405312ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_1])) ? (1017756493) : (((/* implicit */int) arr_13 [(unsigned short)17] [i_1 - 3] [i_1] [i_2] [i_2] [i_4 + 1]))))))));
                                arr_20 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_2] [i_3]);
                                arr_21 [i_0] [i_0] [i_2] [i_4 + 2] [i_4] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((_Bool) (_Bool)1))) - (((/* implicit */int) var_6)))) > (arr_10 [i_4] [i_4] [2])));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_0 [i_3]))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */short) ((unsigned int) min((arr_10 [i_0] [i_1] [3LL]), ((~((-2147483647 - 1)))))));
                    var_24 = ((/* implicit */int) arr_7 [i_2]);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [11U]))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (2147483643) : (((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!((_Bool)1))))));
                        var_28 = ((/* implicit */unsigned long long int) (!(var_7)));
                    }
                } 
            } 
        } 
        arr_32 [i_5] = ((/* implicit */unsigned long long int) var_9);
        arr_33 [i_5] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) - (((/* implicit */int) arr_22 [i_5]))));
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    var_29 |= (-((~(((/* implicit */int) arr_0 [i_11])))));
                    var_30 = ((/* implicit */short) ((((/* implicit */int) (short)3)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((6619477954304604337ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9])))))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-4)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)18789))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)3)) / (arr_9 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((int) arr_2 [i_9] [i_9]))) : (((((/* implicit */_Bool) 0)) ? (arr_8 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1)))))));
    }
}
