/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164817
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
    var_17 = ((/* implicit */signed char) var_8);
    var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (-1588150557) : (var_8)))) ? ((-(min((var_12), (((/* implicit */unsigned long long int) 1U)))))) : (12897865958411753317ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((unsigned int) 0ULL))) : (((var_4) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)32))))) : (arr_4 [i_0 + 1] [2LL]))))))));
                var_20 = ((/* implicit */long long int) ((((_Bool) 0LL)) ? ((~(((/* implicit */int) arr_1 [i_0 - 1])))) : ((-((-(((/* implicit */int) var_3))))))));
                var_21 = ((/* implicit */int) var_15);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 12897865958411753313ULL))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) / (var_15)))) : (((553951593625830805LL) | (((/* implicit */long long int) arr_10 [8LL] [i_3 - 2]))))));
            arr_11 [i_2] [i_2] [(signed char)4] |= ((/* implicit */unsigned long long int) ((int) 1879957840));
            arr_12 [(_Bool)1] [(unsigned short)2] [(_Bool)1] |= ((((/* implicit */_Bool) 9082739929350554755LL)) ? (-281685482) : (((/* implicit */int) (signed char)-41)));
            arr_13 [i_2] [i_3] [i_3 - 2] = ((/* implicit */int) (signed char)24);
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_5] = (+(758305172U));
                arr_21 [i_2] [i_2] [i_4] [i_5] |= ((/* implicit */short) (!(((/* implicit */_Bool) 1145218536))));
                arr_22 [i_5] [i_5] [i_5] [i_2] = ((/* implicit */long long int) var_2);
            }
            arr_23 [i_2] |= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11756))) : (arr_6 [i_2]));
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_29 [i_2] [i_6] [i_6 - 1] [i_7] |= (~(arr_2 [(_Bool)1] [i_4] [i_2]));
                        var_23 = ((/* implicit */long long int) ((-9042069909821547746LL) >= (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */_Bool) (unsigned short)17764);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((arr_14 [i_6 + 3] [i_6 + 1] [i_6 - 1]) & (arr_14 [i_6 + 3] [i_6] [i_6 - 2]));
                            var_26 |= ((/* implicit */unsigned long long int) var_6);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 490510335))) <= (((/* implicit */int) var_7))));
                        }
                    }
                } 
            } 
        }
        arr_33 [9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_7 [i_2] [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    var_28 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) 203267364)))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) var_4);
                                var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_12] [i_11]))));
                            }
                        } 
                    } 
                    arr_44 [i_2] [i_2] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_2]))) - (arr_32 [(short)2] [i_9] [i_9] [i_9] [i_10])));
                    arr_45 [(signed char)0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_3 [i_10])) ? (arr_43 [i_2] [i_9] [i_10] [i_2] [i_2] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
    }
}
