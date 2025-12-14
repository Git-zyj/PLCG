/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11532
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 -= ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((arr_5 [i_2] [i_1 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1])))));
                    arr_7 [i_0] [i_0] [i_0] = arr_5 [i_0] [i_0];
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) min((arr_3 [i_0]), (((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_0] [i_2]))))), (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [i_3] [i_3 + 1] [i_2] [i_3 - 1] [i_3 + 1]))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_4] [i_3 - 2]))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1 - 1] [i_3 - 1])))))) ? (((/* implicit */int) ((short) var_5))) : (max((((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) (short)8064)))))))));
                                arr_16 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_1] |= ((/* implicit */long long int) arr_14 [i_2] [i_1] [i_1] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) (unsigned short)16651);
                }
            } 
        } 
    }
    for (long long int i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_17 [i_5]);
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_17 [i_5 + 1]), (arr_17 [i_5 - 1])))) ? (arr_17 [i_5 + 2]) : (arr_17 [i_5 - 1])));
        var_22 = ((/* implicit */_Bool) arr_18 [i_5] [i_5 - 3]);
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) ((short) ((arr_19 [i_5 - 2]) || (arr_19 [i_5 - 2]))));
            arr_23 [i_5] [i_5] &= ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) 3611237746U))))) : (((/* implicit */int) arr_19 [i_5]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_25 [i_5] [i_5]))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_18 [i_5 + 2] [i_7]))))) : (max((((arr_22 [i_5] [i_7] [i_5 - 2]) & (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_7] [i_5 - 1])) % (((/* implicit */int) var_3)))))))));
            var_26 = ((/* implicit */unsigned int) (~(-6496448078687456747LL)));
            arr_26 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_25 [i_5] [i_5])), (((((/* implicit */_Bool) 8601443808313358335ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 3611237746U)) : (var_9)))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned short) 11789231275381658003ULL)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
        {
            arr_30 [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) arr_19 [i_5 - 1]);
            var_28 ^= ((/* implicit */_Bool) ((signed char) arr_28 [i_5] [i_5 + 2]));
            arr_31 [i_5] = ((/* implicit */short) max((max((-6496448078687456754LL), (((/* implicit */long long int) arr_18 [i_5 - 3] [i_5 + 1])))), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_5 + 2] [i_5 + 1])) >> (((((/* implicit */int) var_3)) - (111))))))));
        }
    }
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (((~(var_0))) | (((/* implicit */long long int) var_2)))))));
}
