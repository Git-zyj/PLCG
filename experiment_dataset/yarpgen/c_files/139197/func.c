/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139197
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
    var_12 = ((/* implicit */int) (signed char)127);
    var_13 = ((/* implicit */unsigned long long int) 2135558531);
    var_14 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54836)) >= (((/* implicit */int) var_4))));
        arr_4 [i_0] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) var_11))))), (arr_1 [i_0 + 2])))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 1])))) ? ((-(arr_1 [i_0 + 3]))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)124)))), (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            var_16 ^= var_10;
            var_17 += ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_0 + 3])))));
            var_18 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_7) : (((/* implicit */int) arr_2 [i_0 - 1])))) + (2147483647))) >> (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))) - (11328912222176456811ULL)))));
        }
        for (short i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */int) (!((_Bool)1)));
                var_20 ^= ((arr_1 [i_0 - 1]) << (((arr_10 [i_2 + 1] [i_2 - 1]) - (3447499024U))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_21 ^= ((/* implicit */signed char) var_2);
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [6])))))));
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 3; i_7 < 9; i_7 += 2) 
                    {
                        {
                            arr_22 [i_0 - 1] [i_6] [i_5] [4] = ((/* implicit */unsigned char) ((((var_10) + (2147483647))) << ((+(((/* implicit */int) (((_Bool)1) && (arr_14 [7ULL]))))))));
                            var_23 = ((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5] [i_6] [i_7 + 1] [(signed char)8]))) : (((((/* implicit */_Bool) arr_17 [1] [i_6] [i_5] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_9 [4U] [4U])) : (var_0))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((arr_0 [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 2])))))))));
                            arr_23 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_6] [i_6] = ((/* implicit */int) (((+(arr_11 [i_7] [i_5] [i_5]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((var_7) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) var_3)), (var_0))))) - (8342589441462163128ULL)))));
            }
            var_25 = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) var_11)) * (var_10))))), (max(((-(((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 2] [i_0])))), (((/* implicit */int) arr_18 [i_2 - 4] [i_2] [i_0] [i_0]))))));
        }
        for (short i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((13931998237670906103ULL), (((/* implicit */unsigned long long int) (short)4251)))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((arr_24 [i_0] [i_8] [i_8 - 1]) - (((/* implicit */int) var_4)))) != (var_7)))) <= (((/* implicit */int) ((max((arr_8 [i_0] [i_8 - 1] [1]), ((_Bool)0))) && (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_1)))))))))))));
            arr_27 [i_8] [i_0 + 3] [i_0] = min(((+(((/* implicit */int) arr_6 [i_8 - 1] [i_0 - 1])))), (((int) (signed char)-124)));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_8])) || (((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 + 2]))))) >= (((/* implicit */int) var_4)))))));
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_32 [i_0 + 3] = ((((((/* implicit */int) arr_26 [i_9])) + (2147483647))) >> (((((max((((/* implicit */int) var_5)), (var_2))) >> (((arr_31 [i_9] [i_8] [i_0 + 2] [i_0]) - (2045390509))))) - (33))));
                var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)3])) : (((/* implicit */int) var_11)))))))) <= (((/* implicit */int) var_11)));
            }
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                arr_35 [i_0] = ((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_10] [i_10]);
                var_30 = ((/* implicit */_Bool) max((var_30), (max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8 + 1]))) != (var_0)))))));
            }
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_26 [i_0]), (((/* implicit */signed char) arr_36 [i_0] [(short)8]))))), (arr_24 [i_8 + 1] [i_0 + 2] [i_0 + 1])))) ? (max((((/* implicit */int) arr_6 [i_8] [i_0 + 2])), (max((var_7), (((/* implicit */int) arr_2 [i_11])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (var_0))))));
                var_32 &= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_2 [i_0 + 1]))))));
                var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (549621596160ULL)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))))));
            }
        }
    }
}
