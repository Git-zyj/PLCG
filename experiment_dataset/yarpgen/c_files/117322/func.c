/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117322
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)63)) ? (min((9009144268323851763ULL), (14316101300874307207ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3606098140531365257LL)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) arr_7 [(unsigned char)4] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0])) ? (6946758246946543132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 3])))))));
                    arr_9 [i_0] [6U] [i_2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [(signed char)1] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_5 [(unsigned short)10] [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) < (arr_1 [8]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (min((min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2])), (-3606098140531365258LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)6)) >> (((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */unsigned int) ((1324718867) <= (((((int) var_9)) - (737180063)))));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_16))) ? (min((1844232353U), (((/* implicit */unsigned int) -159945702)))) : (((unsigned int) ((unsigned short) var_14)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                arr_15 [i_3] [i_3] = ((/* implicit */signed char) var_14);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_22 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) arr_21 [i_6] [i_5] [i_3] [i_3]);
                            var_22 = ((/* implicit */_Bool) (-((-(((((/* implicit */int) arr_10 [i_3] [13LL])) * (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 4; i_7 < 8; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            {
                arr_30 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) 3758724659U)) != (6112099816971259082LL)));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (int i_10 = 3; i_10 < 8; i_10 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 14032627338694386355ULL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_9] [i_8] [i_9] [i_7])) ? (arr_13 [i_7] [i_7]) : (((/* implicit */unsigned int) arr_11 [i_10 - 2]))))) : (arr_32 [i_8] [i_8] [i_8])))) ? (((/* implicit */int) ((max((-4539451962338185517LL), (((/* implicit */long long int) (unsigned char)7)))) > (((/* implicit */long long int) min((((/* implicit */int) arr_23 [i_7])), (arr_29 [(short)10] [(short)10] [i_10]))))))) : (((((/* implicit */_Bool) arr_14 [i_7 - 1])) ? (((/* implicit */int) arr_14 [i_7 + 1])) : (((/* implicit */int) arr_14 [i_7 + 3])))))))));
                            var_24 = ((/* implicit */int) min((var_24), (((int) arr_20 [i_7 - 3]))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10 - 2])) ? (5079926303063017982LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_10 + 1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_34 [i_7 + 2] [i_7 - 1] [i_7 - 3] [i_7 + 2] [i_7 + 2] [i_7 + 2])))) <= (max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_7])))))) : (((((((/* implicit */int) arr_6 [i_7] [1U] [1U])) + (2147483647))) << (((((/* implicit */int) (unsigned char)129)) - (129))))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) ((875661592307025643ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((130783944) <= (((/* implicit */int) (unsigned char)248))))))))));
            }
        } 
    } 
}
