/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155911
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [11LL] [8ULL] &= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), ((+(15527254335020910067ULL))));
                                arr_16 [i_0] [i_0] [i_0] [i_3 - 1] [i_1] = min(((~(arr_4 [i_0] [i_1] [i_0]))), (var_8));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_7] [i_6] [i_0] [1ULL] [2LL] [i_1] [i_0])) > (var_11))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_13)) : (var_10)))))) ? (((/* implicit */int) ((arr_4 [3LL] [i_5 - 2] [i_5 - 2]) > (arr_4 [i_1] [i_5 - 2] [i_5 - 1])))) : (((/* implicit */int) ((7498947056294393500ULL) == (((unsigned long long int) arr_2 [2LL])))))));
                                arr_26 [i_0] [i_5] [i_5] [i_6] [i_7] [i_5] = min((10947797017415158116ULL), (min((10947797017415158116ULL), (1951568091532052402ULL))));
                                arr_27 [0ULL] [i_5] [i_5 - 1] [i_5] [8ULL] = var_2;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 3) 
    {
        for (long long int i_9 = 3; i_9 < 13; i_9 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                arr_42 [i_12] [i_12] [i_10] [i_12] [i_8] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */unsigned long long int) var_13)) ^ (var_11))) : (max((((/* implicit */unsigned long long int) var_5)), (var_3))))))));
                                arr_43 [i_10] = max((min(((~(arr_38 [5LL] [i_9] [i_9 - 1] [i_10] [i_11 + 1] [i_10] [11ULL]))), (((var_2) ^ (var_11))))), (min((arr_41 [i_11 + 1] [i_8] [i_8 + 1] [i_11] [i_9 + 3]), ((+(arr_40 [i_8 - 1] [i_9 - 3] [12LL] [14ULL] [i_12] [i_8 - 1]))))));
                                arr_44 [i_12] [i_12] [i_12] [i_10] [i_12] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((max((var_12), (arr_30 [i_8 - 1]))) - (((/* implicit */unsigned long long int) ((long long int) -2778830023327573779LL))))) >= (((/* implicit */unsigned long long int) 0LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_13 = 1; i_13 < 14; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            {
                                arr_51 [i_8] [i_13] [i_8 - 2] [i_9 + 2] [4ULL] = min(((~(var_10))), (((((/* implicit */unsigned long long int) var_13)) * (min((var_11), (var_4))))));
                                arr_52 [i_15] [i_9] [i_13] [10ULL] [i_9] = max((((((/* implicit */unsigned long long int) var_13)) / ((~(arr_45 [i_15] [i_14] [2ULL] [2ULL]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_15])) ? (17720103670751639631ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (arr_30 [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (arr_28 [i_9 - 1])))))));
                                arr_53 [10ULL] [i_9] [16ULL] = min(((-(((((/* implicit */_Bool) 0ULL)) ? (arr_50 [i_8 + 1] [0ULL] [i_13 - 1] [0LL] [i_15]) : (10274287086277177854ULL))))), (min((var_11), (((/* implicit */unsigned long long int) ((var_12) >= (17720103670751639631ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_60 [i_8] [i_9] [i_16] [12ULL] [i_16] [i_16] = var_2;
                            arr_61 [3LL] [14ULL] [14ULL] [4LL] = ((/* implicit */unsigned long long int) ((max((2ULL), (((/* implicit */unsigned long long int) -7103807146765154353LL)))) > (min((arr_45 [i_8 + 2] [1ULL] [i_8] [i_8 + 2]), (((4114752195803976763ULL) & (arr_55 [i_16])))))));
                            arr_62 [i_8] = var_3;
                            arr_63 [i_8] [i_8] [i_16] [i_17] = ((((/* implicit */_Bool) arr_35 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_33 [1ULL])) ? (var_11) : (arr_30 [i_17]))) > (((/* implicit */unsigned long long int) var_5)))))) : (((unsigned long long int) arr_50 [i_8] [8ULL] [i_9] [i_17] [i_17])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 14; i_19 += 4) 
                    {
                        {
                            arr_70 [i_8] [i_9] [i_18] [i_19] = arr_28 [i_9];
                            arr_71 [i_19 + 1] [i_9] [3ULL] [12LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_8] [15LL] [16ULL] [i_8 - 2] [15LL])) ? (arr_30 [i_8]) : (arr_45 [11ULL] [i_9] [9ULL] [i_19])))) ? (arr_41 [i_8 - 1] [i_19] [i_18 + 1] [i_19 + 2] [i_19 + 1]) : (min((var_8), (((/* implicit */unsigned long long int) var_9))))))) || (((/* implicit */_Bool) 4203620754171774416ULL))));
                            arr_72 [9LL] [i_19] [i_18] [i_19] = var_12;
                        }
                    } 
                } 
            }
        } 
    } 
}
