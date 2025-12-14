/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107473
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) min((-582354101), (var_4)))) : ((-(16284464396175183722ULL))))))));
                arr_5 [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_2) : (var_9))), (((unsigned long long int) 2097151))))) ? (max((((/* implicit */unsigned long long int) 511)), (var_9))) : ((~(var_1))));
            }
        } 
    } 
    var_12 ^= var_4;
    var_13 = ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) max((-2053293076), (2053293075)))), (var_5))) : (((unsigned long long int) ((int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_14 = ((var_10) >> (((arr_10 [i_2 - 1] [i_2 - 1]) - (1022020041))));
                    var_15 = ((/* implicit */int) ((7301544825029570164ULL) ^ ((-(6459671688545980173ULL)))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (2053293053)));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1792288078)) ? (((/* implicit */unsigned long long int) 8388607)) : (var_8))))));
                                var_19 = ((/* implicit */unsigned long long int) ((int) arr_8 [i_2]));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) arr_6 [i_3]))));
                }
            } 
        } 
        arr_18 [i_2] = var_3;
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    var_21 = arr_16 [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 2];
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (11ULL) : (12757483290027772377ULL)))) ? (((((/* implicit */_Bool) 319354046)) ? (arr_24 [i_2] [i_8] [i_8] [i_2]) : (var_3))) : (((arr_10 [13] [20]) << (((var_10) - (1840124064))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((+(var_1))) < (((/* implicit */unsigned long long int) 2097137)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 20; i_11 += 2) 
                    {
                        for (int i_12 = 3; i_12 < 19; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((1448896458235796260ULL) * (var_6)))) ? (1238704314632571012ULL) : (((16284464396175183722ULL) * (18446744073709551615ULL)))));
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4607182418800017408ULL)) ? (var_4) : (2097137)))) ? (((var_7) * (17637995084930503025ULL))) : (((/* implicit */unsigned long long int) arr_20 [i_2] [i_2])));
                                arr_33 [i_2] [i_2] [i_12 - 2] [i_11] [i_12] = ((/* implicit */int) (+(var_2)));
                                arr_34 [i_2] [1ULL] [i_8] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_14 [10ULL] [i_2] [i_8] [i_2] [1ULL]) : (var_8)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (0ULL) : (((/* implicit */unsigned long long int) 1072892938)))) : (((((/* implicit */_Bool) -1792288064)) ? (var_6) : (var_6))));
                                var_26 = var_9;
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (2053293101) : (1595989191))))))));
                }
            } 
        } 
    }
    for (int i_13 = 2; i_13 < 9; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 2) 
            {
                for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_8 [18ULL]);
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 742730553)))));
                    }
                } 
            } 
            arr_47 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [20ULL] [i_13 - 1] [12ULL] [i_13] [i_13] [i_14] [i_13]) / (((/* implicit */unsigned long long int) -42452360))))) ? (((/* implicit */unsigned long long int) ((int) 17208039759076980616ULL))) : (arr_17 [i_13] [i_13 - 2] [0ULL] [i_14] [i_13] [i_14] [i_13])));
        }
        arr_48 [i_13] = ((((unsigned long long int) 1238704314632570995ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [10ULL])) || (((/* implicit */_Bool) -518261357)))))));
        arr_49 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) < (0ULL))))) : (arr_4 [i_13 + 2] [i_13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3584909740229780825ULL)) ? (1593617972) : (-2053293106)))) : (var_2));
        arr_50 [i_13] [i_13] = (~(((((/* implicit */_Bool) 1792288077)) ? (1792288075) : (1922319931))));
    }
}
