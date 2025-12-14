/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181146
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0] [i_2])), ((short)(-32767 - 1))))) & (((/* implicit */int) ((224627536U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) != (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))) : (arr_0 [i_0] [i_1 - 1])))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (492519942U)))) ? (min((7U), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))))), (((/* implicit */unsigned int) arr_5 [i_1]))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) (short)-32010)) : (((/* implicit */int) (short)29266)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) max((975617647U), (((/* implicit */unsigned int) 1761432369))));
        var_24 = (short)(-32767 - 1);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (short)32748)) && (((/* implicit */_Bool) 9522004493639863033ULL))))), (((short) arr_7 [i_5]))))) / (((/* implicit */int) arr_7 [i_4]))));
                    arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 975617617U)))))))) ^ ((~(22U)))));
                }
            } 
        } 
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_10 [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned int) min((-1504866746), (((/* implicit */int) (short)19181))))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_3] [i_3]))))), (((var_3) ? (arr_10 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min(((+(arr_15 [i_6] [i_6]))), ((+(arr_15 [i_6] [i_6]))))))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19181)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32759)))))));
        arr_17 [i_6] [i_6] = ((/* implicit */short) ((var_3) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_15 [i_6] [i_6]) : (((/* implicit */unsigned int) arr_9 [i_6] [i_6]))))), (max((((/* implicit */unsigned long long int) (unsigned char)27)), (16974254452667020039ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_6] [i_6]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) 
    {
        for (unsigned int i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_23 [i_8] [i_7]), (arr_22 [i_7 - 2] [i_7] [i_7 + 1])))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_20 [i_9])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_7])), (arr_21 [i_9])))))))));
                    var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_18)))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))))) ? (((max((17780095618188221991ULL), (((/* implicit */unsigned long long int) (signed char)-78)))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_8])) - (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_8)), (arr_24 [i_7 - 2]))), (((/* implicit */int) arr_20 [i_7])))))));
                    var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [i_7])), (((((/* implicit */_Bool) arr_23 [i_8] [i_9])) ? (((/* implicit */int) arr_18 [i_8 + 3] [i_9 - 1])) : (((/* implicit */int) arr_22 [i_7 + 2] [i_8 + 1] [i_9 + 2]))))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_7] [i_8 + 3]))))) ? (max((((/* implicit */unsigned int) arr_25 [i_9] [i_8] [i_7])), (0U))) : (arr_26 [i_8 + 2] [i_8 + 3] [i_8 - 1] [i_8])))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_32 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 492519942U)), (max((((unsigned long long int) (unsigned char)89)), (((/* implicit */unsigned long long int) (short)32767))))));
        var_33 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_1 [i_10] [i_10])))), (((((/* implicit */_Bool) (unsigned char)39)) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_7 [i_10])))) : ((~(-1761432370)))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_11] [i_11])) ? ((~(((/* implicit */int) arr_16 [i_11] [i_11])))) : (((/* implicit */int) max((var_16), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11] [i_11]))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (17669983062834219364ULL)))));
        var_35 = ((/* implicit */short) (~(((/* implicit */int) max((arr_4 [i_11]), (var_10))))));
    }
    for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_18 [i_12] [i_12 - 1]))))))) <= (((/* implicit */int) var_5)))))));
        var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
    }
    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)242)), ((short)32512))))));
}
