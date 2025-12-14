/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127993
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((3610581780U), (((/* implicit */unsigned int) (unsigned short)62421)))))));
    var_18 -= ((/* implicit */signed char) (~(((((((/* implicit */_Bool) 6213085643155311633ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((_Bool) var_0)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)15249)) : (((/* implicit */int) (unsigned short)511)))) : (((/* implicit */int) ((_Bool) (short)6440))))) - (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) 2302852586665621736LL))))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_19 = ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_0] [i_0]))))) * (((/* implicit */int) ((2147483647) < (((/* implicit */int) var_9))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-28992))))) ? (min((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1] [7ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1])))) ? (((arr_0 [i_1]) / (arr_0 [i_1]))) : ((-(arr_0 [i_1])))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 = (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11691)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)109))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_22 ^= ((arr_5 [i_1]) >= (arr_5 [i_4 + 2]));
                            var_23 = (-(arr_8 [i_2 - 1] [i_4 - 1]));
                            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) arr_14 [i_3] [i_2 - 1] [i_1]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                arr_20 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6 + 3] [i_6] [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_2 - 1] [i_6 + 3])))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (2302852586665621738LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22671)))))) | ((+(18446744073709551607ULL)))))));
            }
            var_27 = ((/* implicit */unsigned int) arr_9 [i_1] [i_2 - 1] [i_2]);
            var_28 = ((/* implicit */short) ((arr_15 [i_1] [i_2] [(_Bool)1] [i_1] [i_1]) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [(unsigned short)13])))) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_1] [i_1] [i_2 - 1])) >= (((/* implicit */int) arr_19 [i_2 - 1] [i_1] [i_1])))))));
        }
        arr_21 [i_1] [i_1] = (-(((unsigned long long int) (_Bool)1)));
        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)124)) / (((/* implicit */int) arr_17 [i_1] [(short)11])))) - (((/* implicit */int) arr_17 [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            {
                var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (signed char i_10 = 3; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_30 [i_7 + 2] [i_8] [13LL] [i_7] [i_10] = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned int) ((short) var_7))), (((4294967295U) % (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_10 - 2] [i_8] [i_7])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) arr_24 [(_Bool)1] [i_7] [(_Bool)1])), (12ULL)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_9] [i_8] [(_Bool)1])) - (((/* implicit */int) arr_15 [i_7] [i_7] [i_9] [i_7] [i_8]))))) & (((((/* implicit */_Bool) arr_1 [i_7] [(_Bool)1])) ? (((/* implicit */unsigned long long int) -7926177734774377077LL)) : (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)61), (((/* implicit */signed char) arr_24 [i_7] [i_7] [i_7]))))))));
                            var_32 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_24 [i_10 - 1] [i_7] [i_7])));
                            var_33 = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_10 + 1] [2] [i_7 - 1]));
                        }
                    } 
                } 
            }
        } 
    } 
}
