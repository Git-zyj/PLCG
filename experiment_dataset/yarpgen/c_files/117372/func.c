/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117372
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)1984))))) ? (((/* implicit */int) (short)-10143)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)-10143))))))))));
        var_14 |= ((/* implicit */unsigned int) (short)26252);
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 15762598695796736LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26252))) : (arr_1 [i_0])));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1] [i_1]))) ^ (arr_3 [i_1 - 3] [i_1 + 1])));
            arr_5 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)7025))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_16 = ((int) arr_6 [i_4 + 1] [i_3 - 1]);
                            var_17 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2]);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_2 - 1] [i_2 - 1]));
        }
        for (int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_16 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0])) : (arr_8 [i_0])))));
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_0] [i_6 + 1] [i_7]))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (short)10127)) ? (4294967295U) : (((/* implicit */unsigned int) -1088172991))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_22 [i_0] [i_6] [i_7]))));
            }
            for (short i_8 = 3; i_8 < 18; i_8 += 2) 
            {
                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0])) ^ (arr_21 [i_0] [i_0] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0])) || (((/* implicit */_Bool) arr_23 [i_8 - 3] [i_0] [i_0]))))) : (((int) (_Bool)0))));
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned char i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            arr_32 [i_0] [i_6] [i_6] [i_6] [i_10 - 1] = ((/* implicit */long long int) ((unsigned int) ((arr_27 [i_0] [i_0] [i_8] [i_9 - 1] [i_0]) / (((/* implicit */int) arr_18 [i_9] [i_8] [i_6])))));
                            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_27 [i_0] [0ULL] [0ULL] [13] [13]) : (((/* implicit */int) (short)2370))))) < ((+(arr_20 [(_Bool)1] [9U] [i_8])))));
                            arr_33 [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-24830)) ? (((/* implicit */int) arr_28 [3ULL] [i_6] [i_6] [i_10])) : (((/* implicit */int) arr_26 [i_0] [i_6 - 1] [i_6 - 1] [i_10]))))));
                        }
                    } 
                } 
                var_25 = ((int) arr_15 [i_8 - 2] [i_6 + 2] [i_6 + 1] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 18; i_11 += 2) 
                {
                    for (long long int i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */short) arr_3 [i_0] [i_0]);
                            arr_39 [i_0] [i_12] [i_8] [i_12 + 1] = ((/* implicit */signed char) ((int) var_4));
                        }
                    } 
                } 
            }
            arr_40 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-3))));
        }
    }
    for (short i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        arr_45 [i_13] = ((/* implicit */short) var_8);
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 198363112052320734LL)) ? (((((/* implicit */_Bool) arr_8 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)65024)))) : (4194303U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) var_1))))))));
        var_28 = ((/* implicit */unsigned long long int) arr_25 [i_13] [i_13]);
    }
    var_29 ^= ((/* implicit */unsigned short) ((signed char) 1387020772));
    /* LoopSeq 1 */
    for (int i_14 = 2; i_14 < 12; i_14 += 1) 
    {
        arr_49 [i_14] = ((/* implicit */short) 8434471196273808782LL);
        var_30 = ((/* implicit */unsigned short) arr_20 [i_14] [i_14] [i_14]);
        var_31 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_16 [i_14] [i_14] [i_14 - 2] [i_14] [i_14 + 2] [i_14 - 2]) & (arr_24 [i_14])))) ? (7395091725921365104LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_14] [i_14 - 2] [i_14] [i_14 - 1]) == (((/* implicit */long long int) arr_48 [i_14]))))))))));
    }
}
