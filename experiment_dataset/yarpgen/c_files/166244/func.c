/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166244
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_10))))));
        var_16 -= ((/* implicit */long long int) var_3);
        var_17 = max((arr_1 [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 2147483647)), (arr_4 [6] [6])));
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 7; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_11 [(unsigned char)1] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [4] [i_2]))));
                    arr_12 [9LL] [9LL] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)32512)))))) ? (((((/* implicit */_Bool) max((arr_8 [i_1] [5ULL] [i_3]), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3])))))) : (15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned short) max((((((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86)))))) - (((/* implicit */int) (unsigned short)39052)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), ((unsigned char)44)))))))));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (unsigned short)27984)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)46)) ? ((((_Bool)1) ? (10238401020874004422ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [3] [1LL] [3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)120), ((signed char)95)))))))));
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) > (var_5)))) % (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_0 [i_4] [i_4])))) != ((+(((/* implicit */int) arr_13 [(short)12])))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) <= (((/* implicit */int) arr_0 [i_4] [i_4])))))) : (max((2174950490U), (((/* implicit */unsigned int) var_11)))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
        var_21 -= ((/* implicit */signed char) max((((long long int) arr_14 [i_4])), (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_4])))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned char)194)) - (178))))) : (((/* implicit */int) arr_0 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4] [(signed char)0])) < (((/* implicit */int) (signed char)17)))))) : (max((((/* implicit */unsigned long long int) ((arr_1 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209)))))), (((((/* implicit */_Bool) (unsigned char)209)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [9U])) ? (((arr_14 [i_4]) + (((/* implicit */unsigned long long int) arr_1 [i_4])))) : (((/* implicit */unsigned long long int) 2638706749U))));
    }
    var_24 = ((/* implicit */signed char) var_8);
}
