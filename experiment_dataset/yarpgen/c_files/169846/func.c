/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169846
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
    var_14 = ((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */long long int) max(((-(var_8))), (((/* implicit */unsigned int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) & (((/* implicit */int) var_12))))) % (max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (max((5132873405090402897ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        var_16 ^= ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */int) var_1))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_17 |= ((/* implicit */unsigned char) ((min((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0])))), (arr_0 [i_0]))) | (arr_0 [i_0])));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_8 [i_2] [i_3]), (((/* implicit */short) arr_15 [i_1] [i_4]))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3])) || (((/* implicit */_Bool) var_13)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_5 + 3] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_3] [i_1] [i_5]))))));
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (_Bool)1)), (arr_17 [i_1] [i_1] [i_3] [i_4] [i_5] [i_2]))), (((/* implicit */unsigned short) ((5132873405090402897ULL) != (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))))))) ? (((/* implicit */int) min((arr_15 [i_1 - 1] [i_1 - 1]), (arr_15 [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) ((short) min((5132873405090402902ULL), (((/* implicit */unsigned long long int) arr_2 [i_2]))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((max((2077704875U), (((/* implicit */unsigned int) arr_17 [i_1] [i_2] [i_3] [i_4] [i_5 - 2] [i_3])))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 1] [i_5 + 2] [i_1 + 1])))))) & (min((min((((/* implicit */unsigned long long int) var_13)), (arr_11 [i_3] [i_2] [i_3]))), (((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) arr_12 [i_4] [i_4])))))))));
                        }
                    }
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        var_21 &= ((/* implicit */int) arr_1 [i_3]);
                        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_2 [i_3]))))) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_2])) : (((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) var_13))));
                    }
                    arr_23 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) (((~(((/* implicit */int) var_10)))) % (((/* implicit */int) ((arr_21 [i_1] [i_2] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) 
        {
            {
                arr_28 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (arr_27 [i_7]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_7])))))))) && (((/* implicit */_Bool) ((min((arr_26 [i_7] [i_8] [i_8 + 1]), (arr_27 [i_8 - 2]))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (short)-11947))))))))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_23 = ((((/* implicit */int) min((((unsigned short) arr_27 [i_7])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_7] [i_8] [i_9])))))))) != ((-(((/* implicit */int) ((_Bool) (unsigned short)1246))))));
                    var_24 = ((/* implicit */unsigned short) (~(var_2)));
                }
                arr_31 [i_7] [i_7] = ((/* implicit */short) (+(-872664843)));
            }
        } 
    } 
}
