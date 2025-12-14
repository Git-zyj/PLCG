/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100111
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_1 + 1]);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [8LL] [i_2] [i_1])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [7U] [i_0])))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [1])) > (((/* implicit */int) arr_1 [11LL]))))))))));
                            var_21 &= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-41))));
                            arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51256)) ? (arr_7 [i_0] [i_1] [i_1] [(unsigned short)0] [i_1]) : (-1LL)));
                            var_22 = ((/* implicit */long long int) (signed char)102);
                        }
                    } 
                } 
            } 
            var_23 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [(unsigned char)12]))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_17 [(unsigned char)7] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)251)) ? (-1LL) : (((/* implicit */long long int) 65535U))));
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))));
        }
        var_25 ^= ((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) % (arr_11 [i_0] [i_0] [i_0] [0ULL] [i_0])));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)15724)) : (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) ((408512668) < (((/* implicit */int) (short)0))))))) % (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */short) max((((((/* implicit */long long int) max((((/* implicit */unsigned int) -1533185458)), (arr_19 [i_6])))) / (((((/* implicit */_Bool) (short)-15091)) ? (-1LL) : (((/* implicit */long long int) 18)))))), (((/* implicit */long long int) ((1443593102U) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)61)) / (((/* implicit */int) (unsigned char)219))))))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_19 [14ULL])) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) arr_20 [8ULL] [i_7])))) : (((/* implicit */int) ((arr_23 [1ULL]) || (((/* implicit */_Bool) (short)-3669)))))));
        var_28 *= ((/* implicit */_Bool) ((arr_22 [i_7] [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)29331)))));
        var_29 += ((/* implicit */int) ((unsigned char) ((1533185458) > (2130924685))));
        arr_24 [i_7] = ((/* implicit */unsigned short) ((arr_22 [i_7] [i_7]) + (((/* implicit */unsigned int) ((arr_23 [(signed char)14]) ? (((/* implicit */int) (unsigned short)6122)) : (((/* implicit */int) arr_23 [(signed char)3])))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((arr_26 [i_8]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32629)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (unsigned char)37))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1208776937)) ? (((/* implicit */int) (unsigned char)219)) : (arr_15 [i_8])))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_16 [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [0] [i_8] [i_8] [0])) / (arr_26 [i_8])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)9))))), (arr_5 [12LL] [i_8])))))))));
        arr_28 [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((0LL) | (-22LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))))))));
        var_31 *= ((/* implicit */_Bool) (unsigned char)209);
        var_32 -= ((/* implicit */signed char) (unsigned short)19067);
    }
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                {
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((4753667301195798214LL) | (0LL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            {
                                arr_45 [(short)16] [i_10] [i_13] [i_11 + 1] [i_12] [i_12] &= ((/* implicit */long long int) arr_31 [3ULL]);
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_30 [i_9] [i_10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-11978), (((/* implicit */short) (unsigned char)66)))))));
}
