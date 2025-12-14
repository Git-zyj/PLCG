/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122563
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 - 4] [i_0 - 3]), (arr_0 [i_0 - 3] [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 3])))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)3])) : (((/* implicit */int) arr_1 [i_0])))))))) / (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_18 [i_2] [(unsigned short)3] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [9] [i_2] [i_2] [i_1])))))));
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1] [6LL]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5400660830025065128LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5400660830025065145LL)))))))));
                        arr_19 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    var_24 = ((/* implicit */int) ((unsigned short) (_Bool)1));
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_24 [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)53988))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_20 [i_5] [14U])));
        arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_13) : (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */_Bool) min((max(((unsigned short)14977), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_20 [i_5] [i_5])))))) > ((+(var_2))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) var_8);
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_27 [i_6])))))))) * (arr_20 [i_6] [i_6])));
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_33 [i_7] [i_7] = ((/* implicit */_Bool) var_1);
        var_28 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (min((((var_19) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) var_15))))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            arr_44 [i_7] [i_8] [(short)8] [i_10] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (arr_42 [i_7] [i_7] [i_9] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1421533907158303585LL)) ? (((/* implicit */int) arr_29 [(signed char)6])) : (((/* implicit */int) arr_41 [(unsigned short)23] [i_8]))))))) <= (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [3U] [i_7] [i_9] [i_9] [i_10 + 2] [(unsigned short)16]))))), (arr_32 [i_7])))));
                            arr_45 [i_9] [(unsigned short)16] [i_9] [17U] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_30 [i_9] [i_9]) - (10075907532626169694ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)50559)) ? (((/* implicit */int) (unsigned short)41751)) : (var_13))) : (((/* implicit */int) arr_39 [i_8] [i_10 + 2] [i_9] [i_10 + 3]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (max((((/* implicit */unsigned int) var_0)), (arr_38 [i_7] [i_8] [i_11])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | ((-(arr_30 [(signed char)10] [(signed char)10])))))));
                            var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126)))))));
                            var_30 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [8U]))) & (var_7))))) : (((int) arr_31 [i_7]))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 21; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_43 [i_8] [i_10] [i_12]))), (min((var_14), (((/* implicit */unsigned int) (_Bool)1))))))) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_7] [i_7]))))), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_8] [i_10 - 1] [i_8])))))))));
                            arr_48 [i_7] [i_9] [i_9] [i_7] = ((/* implicit */unsigned int) min((max((min((var_2), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) min((arr_47 [i_9] [i_9] [i_9] [i_9] [i_7]), (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) arr_40 [i_7] [(short)1] [i_9] [i_9] [i_10] [i_12]))));
                            var_32 = ((/* implicit */short) arr_42 [i_7] [i_7] [i_9] [i_10]);
                        }
                        arr_49 [i_7] [i_7] [i_9] [i_9] [i_7] = ((/* implicit */unsigned int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_7] [i_8] [i_9] [i_10 - 1]))) : (min((((/* implicit */long long int) arr_47 [0U] [i_9] [i_9] [i_10] [i_10])), (var_15))))))));
                        var_33 = ((/* implicit */_Bool) arr_46 [i_7] [i_7] [2]);
                        arr_50 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_7] [i_7] [(_Bool)1] [i_10 + 3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_39 [(_Bool)1] [5] [5] [i_10 - 1]))))) ? (((/* implicit */int) arr_39 [i_9] [i_8] [i_9] [i_10 + 2])) : (((/* implicit */int) min((arr_39 [i_7] [i_8] [i_9] [i_10 + 2]), (arr_39 [i_7] [i_7] [10LL] [i_10 + 3]))))));
                    }
                } 
            } 
        } 
    }
}
