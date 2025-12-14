/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16273
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_10))));
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) var_6))) ^ (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) -9223372036854775806LL)) : (1549779837174626872ULL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((unsigned long long int) arr_2 [i_0])) + (((/* implicit */unsigned long long int) 584436531U))))) || (((/* implicit */_Bool) ((var_0) >> (((((/* implicit */_Bool) 10085376237159971219ULL)) ? (((/* implicit */int) (unsigned short)0)) : (arr_0 [i_0]))))))));
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -715952603398359697LL)), (18370569594060660845ULL)));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = var_8;
        arr_6 [i_1] [(short)5] = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((unsigned long long int) (unsigned char)26))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1]), (arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1334433407)) % (1374439197U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5)))))));
        var_17 = ((/* implicit */int) ((_Bool) ((unsigned long long int) ((((-1) + (2147483647))) >> (0ULL)))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_16 [i_2] = ((/* implicit */int) ((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))), (((/* implicit */unsigned long long int) min((arr_11 [i_2] [i_2]), (((/* implicit */long long int) var_0))))))) >> (((((((((/* implicit */_Bool) 1343413620U)) ? (((/* implicit */int) (short)-928)) : (((/* implicit */int) arr_15 [i_2])))) % ((+(((/* implicit */int) arr_8 [i_2] [19U])))))) + (61)))));
                    arr_17 [i_4] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_8 [i_2] [i_4 - 4]))))) ? (((/* implicit */unsigned long long int) (~((-(1374439203U)))))) : (((min((((/* implicit */unsigned long long int) arr_15 [i_2])), (var_4))) % (var_4)))));
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_14 [i_2])) ? (max((-9223372036854775800LL), (((/* implicit */long long int) arr_8 [5U] [i_2])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_2])) + (((/* implicit */int) var_5)))))))));
        var_18 = (((~((~(3710530764U))))) % (((min((2920528122U), (((/* implicit */unsigned int) (signed char)24)))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [10U] [i_2]))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(1374439182U)))) / (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (-587965418) : (((/* implicit */int) (unsigned char)35))))) / (min((((/* implicit */long long int) var_10)), (var_7)))))));
        arr_19 [2LL] [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2])) / (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) : (min((2920528110U), (((/* implicit */unsigned int) arr_15 [8LL]))))));
    }
}
