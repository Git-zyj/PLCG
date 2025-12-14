/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153852
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
    var_16 = ((((/* implicit */_Bool) max((var_6), ((~(5350839274902903101ULL)))))) || (((/* implicit */_Bool) var_14)));
    var_17 = ((/* implicit */long long int) (~((~(((((/* implicit */int) var_5)) * (((/* implicit */int) var_14))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) 425404899U);
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_5)) * (((/* implicit */int) var_11))))))) * (min((((unsigned long long int) 7720957752720447483ULL)), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (-6405962569530706855LL)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((arr_4 [i_1]) - (arr_4 [i_1])));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_6))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_22 = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_2])) / (4235102676275121666ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) : (2092169296U))))));
                    var_24 = ((/* implicit */short) ((unsigned int) -6405962569530706845LL));
                }
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */int) var_10);
                    arr_20 [i_1] [i_3] [12ULL] [i_1] = ((/* implicit */unsigned short) (signed char)112);
                    arr_21 [i_1] [i_2] [i_3] [i_5] [i_5] = ((((arr_17 [i_5]) << (((((-5905711676948999412LL) + (5905711676948999427LL))) - (15LL))))) & (arr_17 [i_2]));
                }
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        arr_27 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (-1848049928) : (((/* implicit */int) (unsigned char)218))))) || (((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7] [i_1] [0U] [i_1] [i_6] [i_3]))));
                        arr_28 [i_2] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) 2206484473U))) < ((~(509254886756312474ULL)))));
                        var_26 ^= ((/* implicit */unsigned long long int) arr_22 [i_1] [i_2] [i_3] [i_3] [i_6] [i_7]);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */short) ((unsigned int) ((long long int) arr_3 [i_2])));
                        var_28 = ((/* implicit */int) (((~(var_13))) >> (((/* implicit */int) (_Bool)0))));
                    }
                    for (long long int i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                    {
                        var_29 = arr_26 [(_Bool)1];
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_9] [7] [i_9 + 1] [10LL] [i_9 + 3] [i_9])) ? (arr_32 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 3] [i_9]) : (arr_32 [i_9] [(unsigned char)14] [i_9 + 2] [i_9 + 4] [i_9] [i_9])));
                        arr_37 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) var_7);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (signed char)24))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_10))));
                    }
                    var_32 = (((!(((/* implicit */_Bool) var_11)))) ? ((-(arr_3 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2995369539U)))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~(arr_6 [i_2] [i_3] [11U]))))));
                }
                var_34 = ((((/* implicit */_Bool) ((int) 17937489186953239169ULL))) ? (arr_32 [i_1] [i_1] [i_1] [i_2] [i_1] [i_3]) : (((/* implicit */long long int) ((2484968545U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            }
            var_35 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [(unsigned char)7]))) - (arr_36 [i_1])));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) ? (6405962569530706845LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59)))));
            arr_40 [i_1] = ((/* implicit */int) var_10);
        }
    }
}
