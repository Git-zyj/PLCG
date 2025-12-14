/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188929
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1976132267295388210LL)), (((((/* implicit */_Bool) 820024276)) ? (arr_7 [(short)10] [i_1] [4] [i_1 - 1]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))));
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [2])) ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -5419640325721125970LL))))) ? (arr_7 [i_0] [11ULL] [i_0] [(signed char)9]) : (((/* implicit */unsigned long long int) ((unsigned int) 2147483647)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) (short)-5450)))));
    /* LoopSeq 3 */
    for (long long int i_3 = 2; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2147483647), (((int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) + (((-5001907882504602523LL) / (((/* implicit */long long int) ((/* implicit */int) (short)1279))))))) : (max((max((((/* implicit */long long int) (short)5462)), (-3513310041826025554LL))), (((((/* implicit */_Bool) 2728725078219123353LL)) ? (7164924862633648848LL) : (((/* implicit */long long int) 3913564141U))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max(((~(2478162913U))), (((/* implicit */unsigned int) (short)5462)))))));
        var_23 = ((/* implicit */short) max(((((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)22677))))) : (((unsigned int) var_12)))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (short)22014)) : (((/* implicit */int) var_6)))))))));
        var_24 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_10 [i_3] [i_3]) == (((/* implicit */int) arr_9 [(unsigned char)0]))))), (max((((/* implicit */unsigned int) arr_9 [1LL])), (4294967286U)))))), (((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) var_16)), (3513310041826025554LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)32767)), ((((-(((/* implicit */int) arr_9 [i_4])))) << (((arr_10 [i_4] [i_4]) - (arr_10 [i_4] [i_4])))))));
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2318064770879581129LL)))) ? (((((/* implicit */_Bool) (short)-25513)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [0LL]))))) : (max((-3513310041826025554LL), (((/* implicit */long long int) arr_10 [i_4] [i_4 + 2])))))) : (((/* implicit */long long int) 4294967288U))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), ((~(var_15)))))) ? (((((/* implicit */_Bool) 3913564141U)) ? ((~(((/* implicit */int) (unsigned char)163)))) : (min((arr_10 [i_4] [i_4]), (arr_10 [i_4 + 2] [i_4]))))) : (((/* implicit */int) (_Bool)1))));
        var_28 -= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5244955009138442740LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4])))))))), ((~(max((((/* implicit */unsigned int) var_11)), (arr_11 [i_4] [13LL])))))));
    }
    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(79195980U)))) ? ((~(((/* implicit */int) arr_15 [i_5] [3LL] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5])))))));
                    arr_24 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_9 [i_5])), (arr_11 [i_5] [i_6]))), (((/* implicit */unsigned int) arr_9 [i_5]))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54885))) : (arr_3 [i_5] [i_5] [(unsigned short)13])));
    }
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((var_15), (((/* implicit */unsigned int) var_6)))))));
}
