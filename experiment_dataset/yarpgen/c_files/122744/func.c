/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122744
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = 18154257074912510543ULL;
        arr_3 [7ULL] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_7) > (var_18)))), (0ULL)))) ? (((unsigned long long int) 1169527043644707871ULL)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_11)))))))));
        arr_4 [i_0] = (((((+(4173893143877947277ULL))) + (334439796655573384ULL))) * ((~(((((/* implicit */_Bool) var_8)) ? (334439796655573384ULL) : (arr_0 [i_0] [i_0]))))));
        var_19 -= (+(((18112304277053978231ULL) >> (((18446744073709551615ULL) - (18446744073709551608ULL))))));
        arr_5 [i_0] = (~(var_2));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_8 [23ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((13420852556307999329ULL) >= (16987981393740519673ULL))))) >= ((~(var_9)))));
        arr_9 [10ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((-(13420852556307999319ULL))) != (max((arr_7 [i_1]), (arr_7 [4ULL]))))))));
        arr_10 [i_1] [i_1] = (~(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (18112304277053978233ULL) : (var_4))) : (((1569215796389282480ULL) | (1458762679969031943ULL))))));
        arr_11 [i_1] = (~((~(var_2))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((13000766368134440825ULL), (16768333565798649553ULL)))));
        var_21 ^= max((min((var_1), (2478837782010976813ULL))), (((/* implicit */unsigned long long int) ((((67108863ULL) ^ (var_15))) >= (var_18)))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
    {
        arr_17 [1ULL] [i_3] = (-(1569215796389282480ULL));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    arr_22 [i_5] [i_4] [i_3] = var_18;
                    arr_23 [i_3] [i_3] = (~(arr_15 [i_3 - 1] [i_3 - 2]));
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
    }
    var_22 = (-(((((/* implicit */_Bool) var_3)) ? ((+(var_5))) : (max((var_10), (18446744073642442746ULL))))));
}
