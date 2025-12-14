/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168032
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((arr_0 [i_0]) ? (1154657597U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))));
        var_20 -= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 12157504756535584172ULL)) ? (4749865682192701857ULL) : (((/* implicit */unsigned long long int) arr_1 [4U])))));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (-1479090359))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((13696878391516849742ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_22 -= ((/* implicit */signed char) ((int) (unsigned char)26));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned long long int) arr_0 [i_1]);
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_24 -= ((/* implicit */long long int) (short)32767);
                var_25 ^= ((/* implicit */unsigned int) 14782291659936294680ULL);
            }
            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (short)-13230)))));
            var_27 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
            arr_10 [i_2] [i_1] = ((/* implicit */short) ((unsigned short) arr_6 [i_2]));
        }
        for (long long int i_4 = 4; i_4 < 13; i_4 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 - 3] [i_4 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U)));
            var_29 = ((/* implicit */unsigned int) ((int) (short)32767));
            var_30 = ((/* implicit */_Bool) ((unsigned int) arr_11 [i_4 - 4] [i_4 + 2]));
        }
        var_31 = ((/* implicit */unsigned int) ((_Bool) arr_11 [i_1] [i_1]));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) (-((+(arr_3 [i_5])))));
            var_33 -= ((/* implicit */unsigned long long int) ((int) (_Bool)1));
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1479090359))));
        }
        arr_19 [10ULL] &= ((unsigned int) ((((/* implicit */_Bool) 16850390536680553801ULL)) || (((/* implicit */_Bool) 3229100287U))));
        var_34 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_5])), (max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))));
    }
    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (signed char)-4)))));
    var_36 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_7]))))), (((unsigned int) 4749865682192701874ULL))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (short i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        arr_30 [i_7] [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((3229100287U), (((/* implicit */unsigned int) (short)15)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_8] [i_10])))))) && ((((+(13696878391516849750ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4749865682192701838ULL))))))));
                        var_38 = ((/* implicit */signed char) min((min((var_0), (((/* implicit */long long int) ((1354230449U) << (((var_5) - (2247516510U)))))))), (((137438953471LL) - (((/* implicit */long long int) ((/* implicit */int) ((short) 6ULL))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_34 [i_7] [i_8] [i_11] = ((unsigned int) ((((/* implicit */_Bool) (short)9899)) ? (((/* implicit */int) (signed char)-32)) : (arr_26 [i_7] [i_7] [i_9])));
                        var_39 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_11 + 1] [i_9 - 2] [i_7]))) % (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [15U] [(unsigned char)3] [i_7]))) : (var_11)))));
                        var_40 = ((/* implicit */unsigned int) ((_Bool) arr_25 [i_7] [i_8] [0ULL] [i_11 + 1]));
                        var_41 &= ((unsigned int) (short)21420);
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 4; i_12 < 13; i_12 += 1) 
                    {
                        var_42 += ((/* implicit */_Bool) (unsigned char)177);
                        var_43 |= ((/* implicit */unsigned short) ((long long int) arr_35 [i_12 - 2] [i_9 - 2] [i_9 - 2] [i_12 - 2]));
                        arr_37 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_12] [(unsigned short)15] [i_12] [i_12 + 3] [i_12])) ? (arr_36 [i_7] [i_7] [i_9] [i_12 + 2] [i_12]) : (((/* implicit */unsigned long long int) arr_33 [i_7] [(unsigned char)15] [i_8] [i_12 - 4] [i_12]))));
                    }
                    arr_38 [i_9] |= ((/* implicit */short) arr_35 [i_7] [i_7] [i_8] [i_7]);
                    arr_39 [i_7] [i_8] [15U] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (4749865682192701851ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9 + 1] [4U] [i_9 - 1]))) : (arr_22 [i_7] [i_8])))));
                    var_44 -= ((/* implicit */_Bool) (+(3335855257420330865ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
                    {
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) max((min((min((arr_33 [i_7] [i_8] [i_8] [i_8] [i_13]), (((/* implicit */unsigned int) arr_11 [i_7] [i_7])))), (((/* implicit */unsigned int) arr_12 [i_8] [i_9] [i_13])))), (((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((short) var_6)))))))))));
                        arr_42 [i_13] [i_8] = ((/* implicit */unsigned int) ((unsigned char) (((_Bool)1) ? (4749865682192701865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        var_46 -= ((((/* implicit */_Bool) (short)8081)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39346))) : ((-9223372036854775807LL - 1LL)));
                    }
                }
            } 
        } 
        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((unsigned char) (signed char)46)))));
    }
}
