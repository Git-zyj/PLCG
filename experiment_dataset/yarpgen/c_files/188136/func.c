/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188136
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
    var_13 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) arr_2 [(unsigned short)4] [i_2 + 2]);
                                var_15 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((max((arr_5 [i_1] [i_7 + 1]), (arr_5 [i_1] [i_7 + 1]))), (((/* implicit */short) (_Bool)1))));
                                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)56163), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : ((+(max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [(short)7] [i_7])), (arr_10 [(unsigned char)13] [i_1] [i_5] [(unsigned char)13] [(unsigned char)13])))))));
                                var_18 = ((/* implicit */signed char) ((arr_4 [i_7 + 1]) ? (((((/* implicit */int) arr_4 [i_7 + 1])) << (((/* implicit */int) arr_4 [i_7 + 1])))) : (((((/* implicit */int) var_4)) << (((/* implicit */int) arr_4 [i_7 + 1]))))));
                                arr_23 [i_1] [i_1] [i_6] [17] [i_7 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_5] [i_1] [i_7 + 1]))))) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)224)))))), (((((/* implicit */int) arr_13 [i_7 + 1] [i_6] [i_5] [i_1 - 1] [i_0])) - (((/* implicit */int) (short)11563))))));
                            }
                        } 
                    } 
                } 
                var_19 += ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_17 [i_0] [i_1] [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_17 [i_0] [i_1] [8U] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        for (signed char i_9 = 1; i_9 < 16; i_9 += 1) 
        {
            for (unsigned int i_10 = 4; i_10 < 15; i_10 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_10] [i_10 - 3] [i_10 - 2] [i_10 - 2] [i_10 - 3]) ? (arr_17 [(unsigned char)10] [i_10 - 1] [i_10 + 2] [i_10 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10] [i_10 - 4] [i_10 - 3] [i_10 + 2])))))) ? (max((var_11), (((/* implicit */unsigned long long int) arr_6 [i_10] [i_10 + 1] [i_10 - 3] [i_10 - 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_10] [i_10 - 2] [i_10 - 2] [i_10 + 2] [i_10 - 3])), ((unsigned char)46)))))));
                    var_21 = arr_25 [i_10 - 3];
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 4) 
    {
        for (unsigned char i_12 = 2; i_12 < 15; i_12 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)210)) << (((((/* implicit */int) (signed char)73)) - (55)))));
                /* LoopNest 3 */
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (signed char i_15 = 1; i_15 < 16; i_15 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_14] [i_13] [i_12 + 2] [i_11 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_14])) : (arr_11 [i_14] [i_12 - 1] [i_13] [i_14]))) / (((/* implicit */unsigned long long int) var_12))));
                                arr_47 [i_12] [i_12] [i_12] [i_12] [i_15] = ((/* implicit */unsigned short) max(((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((arr_11 [i_11 - 1] [i_11] [i_11 - 2] [i_11 + 1]) - (11392500921806984120ULL))))), (((((/* implicit */_Bool) max((11297057297573755754ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) arr_16 [i_11] [i_11] [i_11 + 1] [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [6ULL] [i_15])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_12 + 3] [i_12] [i_16] [i_17] [i_12])) ? (-1294283104) : (((/* implicit */int) (_Bool)1))))), (max((arr_44 [i_12 + 1] [i_12] [14LL] [i_17] [i_12]), (arr_44 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [6ULL])))));
                            var_25 = ((/* implicit */short) max((var_9), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_45 [i_11] [i_12] [i_12] [i_16] [16ULL])) + (2147483647))) << (((((/* implicit */int) arr_12 [i_16])) - (158))))))));
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (min((((arr_11 [i_11] [i_12] [i_11] [i_12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (unsigned short)183)))) : (((/* implicit */unsigned long long int) 3296198532U))));
                            var_27 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_0 [i_11 + 1] [i_11 - 2])))) << (((((((/* implicit */int) arr_43 [i_11 - 2] [i_11 - 2] [i_12 - 1] [i_17])) << (((((/* implicit */int) arr_19 [i_11] [(signed char)2] [i_16] [16] [16])) - (138))))) - (124406)))));
                            var_28 = var_7;
                        }
                    } 
                } 
            }
        } 
    } 
}
