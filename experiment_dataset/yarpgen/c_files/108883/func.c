/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108883
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)130)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((17592186044160ULL), (12378635845163659408ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((var_7), (((/* implicit */unsigned long long int) (signed char)-40))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_9), (var_9))) > (((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_1]), (var_3)))))))) : (max((arr_3 [i_1] [i_1 - 1]), (((/* implicit */unsigned int) var_11))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((arr_5 [19]) / (arr_7 [i_0] [i_0] [i_2] [i_1] [i_4]));
                                var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_0 [i_1 - 1])) - (((/* implicit */int) arr_0 [i_1 - 1]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((12014637556961757300ULL), (((/* implicit */unsigned long long int) (((~(6068108228545892208ULL))) <= (((unsigned long long int) 12378635845163659408ULL)))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        arr_21 [i_6] [i_6] [i_7 - 1] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_6]))))));
                        arr_22 [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)1]))) : (3019197929U)))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((arr_15 [i_7 - 3]) + (2147483647))) >> (((12378635845163659421ULL) - (12378635845163659399ULL))))))));
                        arr_23 [(short)0] [i_6 + 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)197)) << (((var_6) - (684811474U)))));
                        var_21 = ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) var_9)))) ? (((long long int) 392324098887699772LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5])))))));
                        var_23 = ((/* implicit */unsigned long long int) ((unsigned int) min((6068108228545892182ULL), (((/* implicit */unsigned long long int) var_8)))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_24 ^= ((/* implicit */long long int) arr_10 [i_5] [(short)21] [i_7] [i_9] [i_10]);
                            var_25 ^= ((/* implicit */short) ((((((/* implicit */_Bool) 13221934311647937695ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_6] [i_6 - 2] [i_7 + 1] [i_6])) : (arr_20 [i_5] [i_6 - 2] [i_7 - 2] [i_7 - 2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9])))));
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            arr_28 [i_5 + 1] [i_6 + 1] [i_6] [i_9] [i_10] [i_10] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */long long int) -187433122)) + (var_5))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) >= (5652476284754484429ULL))))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 18; i_12 += 4) 
                        {
                            {
                                arr_33 [i_11] [i_6] [i_6 - 3] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_7 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_16 [i_12]), (((/* implicit */short) (signed char)-2))))))))));
                                var_27 = ((/* implicit */unsigned char) (short)16523);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (-(1483970864873267414ULL)));
                                arr_39 [i_7 - 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [8U] [i_6] [i_7] [i_13] [i_6] [i_14])) && ((!((!(((/* implicit */_Bool) var_9))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((((/* implicit */int) var_14)), (((923824722) + (-2062105956)))));
                                var_30 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (arr_34 [i_5] [i_5] [i_5] [i_5]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_7)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [i_5 - 1] [(unsigned short)18] [i_6 + 1] [i_6] [i_6] [i_6])), (var_14))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (((((/* implicit */_Bool) var_6)) ? (arr_27 [12] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                }
                var_31 ^= ((/* implicit */int) var_13);
            }
        } 
    } 
}
