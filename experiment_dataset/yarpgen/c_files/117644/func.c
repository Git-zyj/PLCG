/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117644
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [11LL] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_14 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */unsigned long long int) -2320829902392343729LL)) : (16515820452706392407ULL)));
                    var_16 |= ((/* implicit */signed char) ((unsigned long long int) ((short) var_10)));
                    arr_9 [i_2] [i_1] [i_0] = ((arr_7 [6ULL] [i_2] [5ULL] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_4 [i_1])))))));
                    var_17 ^= ((/* implicit */signed char) arr_7 [i_2] [i_2] [i_1] [i_0]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_18 = arr_4 [i_0];
                        arr_19 [i_5] [i_4] [i_0] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_6 [i_3] [i_3] [(signed char)2]))))));
                        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))));
                        arr_20 [i_3] = (short)-11600;
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_10 [i_0])))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_12 [(short)2] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) || (((/* implicit */_Bool) arr_24 [i_6] [i_6]))))) | (((/* implicit */int) arr_21 [i_6]))));
        arr_26 [(unsigned short)0] &= ((/* implicit */long long int) (~(8191ULL)));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) arr_22 [(short)12] [(short)12])) ? (arr_22 [(unsigned short)18] [(unsigned short)18]) : (arr_22 [6ULL] [6ULL])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) arr_21 [i_7])));
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 7; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_35 [i_11 + 2] [i_11 + 3]), (((/* implicit */unsigned short) (short)24697))))) ? ((+(((/* implicit */int) arr_35 [i_11 - 2] [i_11 + 1])))) : ((+(((/* implicit */int) arr_35 [i_11 - 2] [i_11 + 2]))))));
                                var_24 ^= ((/* implicit */short) ((signed char) min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_40 [i_11] [i_11 - 2] [i_11] [i_11 - 2] [i_11 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_41 [i_8] [i_8] [i_7] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [(short)12] [i_8] [(short)12] [i_7])) ? (((/* implicit */int) (short)24092)) : (((/* implicit */int) arr_32 [i_7])))))) ? (((unsigned long long int) 562949886312448ULL)) : (3048047488348351117ULL));
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_5))));
}
