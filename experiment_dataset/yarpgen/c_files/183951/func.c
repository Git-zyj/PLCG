/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183951
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
    var_20 = ((/* implicit */unsigned long long int) max((var_14), ((-(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned short)6] |= ((/* implicit */unsigned char) 4063405622593249832LL);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (min((((/* implicit */long long int) (unsigned short)27728)), (4063405622593249842LL))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27728))))));
                        var_22 += ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37796))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : ((+(0LL))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 4; i_5 < 20; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2316891404360309335LL)) ? (-4063405622593249825LL) : (10LL))) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (min((((/* implicit */long long int) var_18)), (4063405622593249832LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1826255268U)) ? (-2103839666) : (((/* implicit */int) (unsigned short)65528)))))));
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                            arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27739))) ^ (12778639675386196423ULL)))));
                            var_23 = ((/* implicit */unsigned int) var_19);
                            arr_18 [i_0] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0] [i_4] [i_4] [i_5 - 2]))) > (-4063405622593249825LL)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 *= ((/* implicit */unsigned int) ((min((arr_4 [i_0] [i_4]), (((/* implicit */unsigned long long int) var_4)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14724569307658187666ULL)) ? (var_13) : (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (-903058939)))))))));
                            var_25 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))), (((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11420)))))));
                        }
                        arr_21 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 14168582663432349305ULL)) ? (((/* implicit */int) (unsigned short)12284)) : (((/* implicit */int) (unsigned short)33629))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_26 = ((arr_8 [i_7] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_0] [i_1 + 1]))));
                        arr_25 [i_0] [i_1] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */unsigned char) (~(((arr_4 [i_1] [i_2]) % (((/* implicit */unsigned long long int) -903058939))))));
                        arr_26 [i_0] = ((/* implicit */unsigned int) ((int) 4063405622593249825LL));
                        var_27 = ((/* implicit */int) (short)8176);
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_2] [i_0] [i_9] = arr_3 [i_0] [i_1];
                            arr_32 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1])) | (0)));
                            var_28 = ((/* implicit */long long int) 10012292166695289434ULL);
                            arr_33 [0] [i_1] [i_2] [i_1] [i_9] [i_8] [i_2] |= ((/* implicit */int) ((4063405622593249836LL) & (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1 + 1] [i_2] [i_1 + 1] [i_1 - 1])))));
                        }
                        arr_34 [i_8] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_19))));
                        arr_35 [8] [i_1] [i_0] [8] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27751))) : (-4063405622593249850LL)));
                    }
                    arr_36 [20U] [i_0] [9ULL] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_1 + 1] [i_0])))) - (((/* implicit */int) (unsigned short)54116))));
                    arr_37 [i_0] = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27739)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_16))))));
        arr_38 [i_0] [i_0] = max((((/* implicit */int) (short)1024)), ((-(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) 7952825324430012364LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11] [i_11]))) : (12373065903155950570ULL))) ^ (((/* implicit */unsigned long long int) 4063405622593249842LL))));
            var_31 ^= ((/* implicit */_Bool) -1);
            var_32 = ((/* implicit */int) (+(4063405622593249825LL)));
        }
        arr_46 [i_10] = ((/* implicit */int) (unsigned short)27739);
    }
}
