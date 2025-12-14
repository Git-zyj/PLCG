/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145363
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((long long int) var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1LL)) : (8445985976321433853ULL)))) ? (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */_Bool) (unsigned char)178)) ? (var_4) : (398910561)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 997598559U))))), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10)))))))) : (((unsigned int) ((3251669497U) == (((/* implicit */unsigned int) 597893077)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [10] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_0 [(short)17])) : (10313820589968129922ULL))) + (arr_1 [i_0]))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) < (arr_1 [i_0 + 2])));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((int) (~((-(arr_0 [i_1]))))));
        var_18 ^= max((((/* implicit */long long int) max((((((arr_0 [i_1]) + (2147483647))) >> (((arr_0 [i_1]) + (670692536))))), (arr_0 [i_1])))), (arr_4 [i_1]));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2])) ? (-524288) : (arr_8 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)3685)) < (((/* implicit */int) (short)6163)))))) : (((var_9) << (((2668968714208233651LL) - (2668968714208233648LL))))));
        var_20 |= ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) ((((arr_5 [i_2] [i_3]) - (((/* implicit */unsigned long long int) 955270097)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) arr_9 [i_3])))))));
                    arr_17 [i_2] [i_3] [i_4] [i_3] = 2040221186854436819LL;
                    var_22 = ((((/* implicit */_Bool) 1635008670)) ? (((int) 3349039257U)) : (((/* implicit */int) ((short) arr_14 [9] [(signed char)0] [9]))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) ((unsigned int) max((525639563U), (((/* implicit */unsigned int) (signed char)-8)))));
}
