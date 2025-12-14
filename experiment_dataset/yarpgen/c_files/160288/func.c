/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160288
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
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1103775760)) ? (4294967295U) : (((/* implicit */unsigned int) (+(var_8)))))), (((/* implicit */unsigned int) 268304384))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((397030366912193086LL) - (397030366912193078LL)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (-3739324830658562316LL))), (((/* implicit */long long int) 231633286U)))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned char)255)) : ((-(2147483647))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 4; i_3 < 19; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(var_9))), (((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (var_9) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 2820637426923065525LL)) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_4 - 1] [i_3 - 2])) : (((/* implicit */int) arr_4 [i_4 + 1] [i_4 - 1] [i_3 - 1])))) : (((/* implicit */int) var_2))));
            arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 670906469U)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (signed char)-7))));
            arr_15 [i_4] [i_4] = var_8;
            /* LoopNest 2 */
            for (short i_5 = 4; i_5 < 16; i_5 += 3) 
            {
                for (int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_3 - 2]), (arr_5 [i_3 - 3])))) + (((/* implicit */int) max((arr_5 [i_3 - 4]), (arr_5 [i_3 - 4]))))));
                        var_22 &= ((/* implicit */long long int) 12480149177422318989ULL);
                        arr_20 [i_3] [i_3] [18ULL] [i_4 - 1] [i_5] [i_6] &= ((((/* implicit */int) arr_16 [i_5 - 2] [i_4 - 1])) - (((/* implicit */int) (signed char)-88)));
                        var_23 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned int) (+(var_8)))), (arr_6 [i_4] [i_4 + 1] [i_4 + 1]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_7 = 3; i_7 < 18; i_7 += 4) 
            {
                arr_23 [i_3] [7] [i_4] [16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */int) (signed char)58)) | (((/* implicit */int) (short)-21309)))) : (((/* implicit */int) arr_7 [i_3] [i_7])))) / (((/* implicit */int) (unsigned short)51956))));
                var_24 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)240)), (1048575ULL)))));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) -2698113536143705122LL)) ? (((((/* implicit */_Bool) arr_4 [i_7 + 2] [(unsigned char)21] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_4 + 1] [i_7 + 2]))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 127))))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_26 = 1159099759;
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_16))));
                        }
                    } 
                } 
                arr_33 [i_3 - 4] [i_4] [i_4] = ((/* implicit */long long int) (signed char)-70);
                var_28 = (~(var_9));
            }
        }
        arr_34 [i_3] [i_3 - 4] &= ((signed char) ((int) (signed char)20));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) var_5))))) : (((/* implicit */int) ((-1174003503) != (((/* implicit */int) (unsigned char)4)))))))) != (var_12)));
    var_30 = var_12;
}
