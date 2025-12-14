/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161512
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) -1702269943));
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            {
                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_4]))));
                arr_18 [i_3] = ((/* implicit */unsigned short) min((max((2465611775250501993LL), (((/* implicit */long long int) 1702269944)))), (((/* implicit */long long int) arr_2 [i_3]))));
                arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) (+(arr_6 [i_3] [i_4])));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_3] [i_3] [i_5 - 1] = ((/* implicit */int) ((((long long int) var_4)) == (((/* implicit */long long int) var_2))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_29 [i_3] [i_4] [i_5] [i_6 + 1] [i_3] = ((/* implicit */unsigned char) var_3);
                                arr_30 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    arr_31 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */int) ((short) arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    arr_36 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                    arr_37 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_3])) ? (arr_1 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (arr_27 [i_3] [i_3] [i_3] [i_3])))))));
                    arr_38 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (((/* implicit */int) arr_3 [i_8] [i_3])) : (((/* implicit */int) arr_3 [i_3] [i_3])));
                }
                for (signed char i_9 = 2; i_9 < 17; i_9 += 3) 
                {
                    arr_41 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (-6368373083280277162LL)))) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_9 + 4])) : (((/* implicit */int) (_Bool)1))))) | (((unsigned int) ((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))));
                    arr_42 [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)71)) | (((/* implicit */int) arr_26 [(_Bool)1] [i_4]))))) ? ((~(var_11))) : (max((((/* implicit */int) (signed char)-111)), (-1812296741))))), (((/* implicit */int) (short)-32122))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                arr_48 [i_3] [i_4] [(unsigned char)18] [i_3] [i_11] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_3] [i_4]))));
                                arr_49 [i_3] [i_4] [i_9 + 4] [i_3] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_15 [i_3] [i_3] [(_Bool)1]), (arr_15 [i_9] [i_3] [i_9])))), ((+(((/* implicit */int) arr_15 [i_3] [i_3] [i_9]))))));
                            }
                        } 
                    } 
                    arr_50 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_24 [i_3] [(_Bool)1] [i_3] [(_Bool)1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_2 [i_3])) * (((/* implicit */int) var_1))))))));
                }
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    arr_55 [i_3] [i_4] [(short)20] [(signed char)20] = ((/* implicit */short) (-(var_2)));
                    arr_56 [i_3] [i_3] [i_12] = ((((/* implicit */long long int) var_8)) ^ ((((-(var_3))) / (((/* implicit */long long int) (-(var_11)))))));
                    arr_57 [(unsigned char)18] [(short)20] [i_4] [i_12] = ((/* implicit */signed char) ((_Bool) (((+(((/* implicit */int) (short)18)))) - (((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (arr_21 [20ULL])))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_3))), (((/* implicit */long long int) var_13))));
}
