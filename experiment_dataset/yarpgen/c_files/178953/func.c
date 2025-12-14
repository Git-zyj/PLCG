/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178953
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            var_11 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_2)), ((+(arr_3 [i_0]))))), ((+(arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((unsigned long long int) (unsigned char)230)))))));
            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_7))))) & (arr_2 [i_1] [i_1 + 1] [i_1 + 1]))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_13 &= (unsigned short)48894;
            var_14 -= ((/* implicit */unsigned short) max((0ULL), (0ULL)));
        }
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)228)), (var_7)))) : (((/* implicit */int) arr_0 [i_3 + 4])))), (((((((/* implicit */_Bool) (unsigned short)373)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_0))))));
            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (((-(arr_7 [i_0] [i_3 + 2] [i_3 + 2]))) >> (((/* implicit */int) (unsigned char)33))));
            arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [i_3])), (((((/* implicit */int) arr_0 [i_3 + 1])) + (((/* implicit */int) arr_0 [i_3 + 4]))))));
            arr_15 [i_3] = max(((-(max((18446744073709551615ULL), (10925432786499074180ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_12 [i_0] [i_3]))))) + (((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_3 + 2] [i_0]))))))));
        }
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            arr_18 [i_4 + 2] = ((/* implicit */unsigned short) (-(min((arr_10 [i_4 - 1] [i_4 + 1] [i_4 - 1]), (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [(unsigned short)9] [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))))))));
            arr_19 [i_4 + 1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (16200069723348646175ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (max((arr_17 [i_4]), (arr_3 [i_0]))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_4 + 1] [i_4 + 2]), (((/* implicit */unsigned long long int) (unsigned char)48))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [(_Bool)1] [i_4 + 2] [i_4]), (((/* implicit */unsigned short) arr_12 [i_0] [6ULL])))))) : (max((((/* implicit */unsigned long long int) (unsigned char)68)), (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_3 [i_4 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) / (2363888925672021990ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (9004895774168362313ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
        }
    }
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))))) : (var_6)))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_7)))) + (((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)116))))))) : (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : ((-(8077429542488772632ULL))))));
}
