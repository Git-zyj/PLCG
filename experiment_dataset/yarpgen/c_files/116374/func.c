/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116374
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)21211), (((/* implicit */unsigned short) arr_6 [i_2 + 3] [(_Bool)0] [i_2 + 3] [i_2 - 1]))))) + ((+(((/* implicit */int) (unsigned short)33906))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned short) 1145161441);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max(((short)14), (((/* implicit */short) arr_1 [i_0]))))), (((((/* implicit */int) (signed char)114)) / (arr_4 [i_0] [i_1] [(unsigned short)16])))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [11] [i_1] [i_3] [i_3])) && (((/* implicit */_Bool) var_0))))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) : (8373429322288643252ULL))) - (1568182640ULL))))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-102))))));
                    }
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_5 [i_2] [i_1] [i_0]))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_2 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
            {
                {
                    var_24 ^= (!(((/* implicit */_Bool) 508LL)));
                    var_25 -= ((/* implicit */short) arr_18 [i_4 + 1] [19U] [i_4 + 1]);
                    arr_22 [i_4] [i_5] [(unsigned char)19] [15] = ((/* implicit */signed char) ((_Bool) 31));
                    arr_23 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned char) arr_20 [i_4 - 1] [i_5 + 1] [i_6 + 2]));
                    arr_24 [i_4] [i_6] [i_6] = ((8487010152399607934LL) == (((/* implicit */long long int) 594129213)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_4] [i_7] [i_8] [i_9] [(_Bool)1] [i_4] = ((/* implicit */int) arr_31 [i_8]);
                        var_26 ^= ((/* implicit */short) ((var_15) ? (((/* implicit */int) arr_19 [i_4 - 1])) : (((/* implicit */int) (unsigned short)5624))));
                    }
                } 
            } 
            var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8651911855811949309ULL)))));
            /* LoopNest 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 2; i_12 < 21; i_12 += 4) 
                    {
                        {
                            arr_45 [(_Bool)1] [(_Bool)1] [i_10] [i_10] = ((/* implicit */_Bool) 9200548610061151700ULL);
                            arr_46 [i_7] [i_7] [(signed char)21] [i_10] [i_11] [i_12 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_12 - 2] [i_7] [i_10] [i_7]))));
                            arr_47 [i_10] [i_11] [20] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551615ULL)));
                            var_28 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (-(((unsigned int) arr_29 [i_4] [i_4] [i_4 + 1])))))));
        }
        var_30 = ((/* implicit */_Bool) (~(arr_40 [i_4] [4] [i_4] [i_4] [(short)4])));
    }
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
    {
        arr_50 [i_13] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 2147483637)) || (((/* implicit */_Bool) (unsigned short)48597)))))));
        arr_51 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_28 [i_13] [i_13] [i_13] [i_13]) / (arr_28 [(short)1] [i_13] [i_13] [i_13])))) ? (min((arr_28 [(unsigned short)4] [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) (short)-7125)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)256)), (3932817419U))))));
    }
    for (long long int i_14 = 1; i_14 < 9; i_14 += 4) 
    {
        var_31 += ((/* implicit */_Bool) (-(((/* implicit */int) (short)31800))));
        arr_55 [i_14] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)128))))));
    }
    var_32 *= (_Bool)1;
}
