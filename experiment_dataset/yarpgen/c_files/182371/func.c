/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182371
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned char)6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0] [(signed char)10])) << (((arr_7 [i_0]) - (3226875696U))))) & (((/* implicit */int) ((signed char) arr_4 [i_1])))))) ? (((min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0] [i_1] [9]))) + (arr_3 [6U] [3ULL] [i_2]))) : (min((((unsigned int) arr_3 [i_2] [i_2] [i_2])), (((arr_3 [i_0] [i_1] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [8ULL])) || (((/* implicit */_Bool) arr_0 [i_0]))))), (min((((/* implicit */int) arr_1 [5LL] [i_1])), (-2147483646))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 8ULL))) || (((/* implicit */_Bool) arr_8 [i_3 + 1])))))));
                                var_15 |= ((/* implicit */unsigned long long int) ((short) arr_2 [i_0]));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (min((((unsigned short) min((18446744073709551605ULL), (((/* implicit */unsigned long long int) -1LL))))), (arr_13 [i_4])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((18446744073709551605ULL) + (8143208777155520953ULL)))) ? (((/* implicit */int) (short)5195)) : (((((/* implicit */int) (unsigned short)65525)) - (2147483634)))));
                    arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) ((379045037) & (((/* implicit */int) (unsigned short)55980)))))), (((((/* implicit */_Bool) ((int) arr_0 [i_2]))) ? (arr_4 [i_0]) : (((/* implicit */long long int) min((arr_12 [i_0] [i_0] [i_1] [i_0] [4LL]), (((/* implicit */unsigned int) arr_6 [i_1] [(short)0])))))))));
                    var_17 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) == (((/* implicit */int) (short)7)))))) < (min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_5 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_26 [i_6] = ((/* implicit */_Bool) ((unsigned char) (short)7194));
                            var_18 = ((((/* implicit */int) min((((_Bool) (signed char)-33)), (((((/* implicit */int) arr_20 [i_5] [i_6])) <= (((/* implicit */int) (short)7194))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_5 + 2]), (((/* implicit */unsigned int) (unsigned short)65521))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)15637)), (arr_21 [i_5]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned int) ((((unsigned long long int) min((((/* implicit */unsigned long long int) arr_21 [i_9])), (arr_25 [i_5] [i_6 - 2] [i_6 - 2] [i_9] [i_10] [i_10])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_18 [i_9])), (arr_22 [2ULL] [i_6] [i_6 + 3])))))));
                            arr_33 [i_5] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_29 [i_10] [i_10] [i_10]))), (((unsigned long long int) arr_16 [i_10]))))) ? (min((((/* implicit */int) (short)-23)), (arr_29 [i_9 - 1] [i_10] [i_5]))) : (min((857007708), (((/* implicit */int) (short)-17138))))));
                            arr_34 [i_5] [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) arr_31 [i_10] [20] [i_6] [i_10])) : (((/* implicit */int) (short)7)))) != (((((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_9])) ? (arr_29 [i_5] [i_10] [i_5]) : (((/* implicit */int) arr_19 [i_5] [i_5]))))))), (max((((/* implicit */unsigned long long int) ((signed char) arr_16 [i_6 + 3]))), (min((1551184136485413809ULL), (((/* implicit */unsigned long long int) arr_27 [(signed char)15] [i_6] [i_9 - 1]))))))));
                        }
                    } 
                } 
                arr_35 [(short)6] [i_5 + 1] = ((/* implicit */short) ((unsigned short) ((unsigned short) min((-2147483638), (((/* implicit */int) (unsigned char)3))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned long long int) (unsigned char)3)), (11669515018430490714ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1131322475U), (((/* implicit */unsigned int) (unsigned short)27811))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)27689)) >= (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5161958114162861130LL)))))));
}
