/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101260
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(1641879640U)))) : (arr_1 [i_1 - 1] [i_1 + 1]))) / ((+(arr_1 [i_0] [i_1 - 1])))));
                arr_4 [19LL] [11ULL] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) + (((((/* implicit */_Bool) 1641879640U)) ? (1641879642U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_8)), (var_12)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2041803507325540208ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_2 [i_2])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-26915)), (var_6))))))) : (((((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) | ((+(var_7)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_0 [i_5] [i_4]))))), (min((((/* implicit */unsigned long long int) arr_8 [13] [13])), (arr_7 [(unsigned char)1]))))), (((4611686018427387903ULL) / (((/* implicit */unsigned long long int) arr_15 [14ULL] [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
                        arr_16 [i_4] [i_3] [(signed char)6] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(signed char)17])) ? (arr_6 [i_2]) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_9 [i_4]))))))));
                    }
                } 
            } 
        } 
        var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (18446744073709551615ULL)))) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_7)) ^ (arr_14 [i_2] [5LL] [i_2] [i_2] [i_2] [5LL]))))))) ? (((8027050201446293229LL) >> (((2082673463) - (2082673445))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
}
