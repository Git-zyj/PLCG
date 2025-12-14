/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159241
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)109)) || (((/* implicit */_Bool) -2642034470125289497LL)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_0)))) << (((var_18) - (1863925864605215131ULL)))));
        var_22 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 2797157387U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (18446744073709551615ULL))));
        arr_5 [4ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-2002439467)))) ? ((~(575138248740682143ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39484)))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_4))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) && (((/* implicit */_Bool) arr_4 [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_26 |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-55)) * (((/* implicit */int) arr_8 [i_1] [i_1]))));
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((arr_10 [i_1] [(unsigned char)18] [i_1]) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_15 [(signed char)19] = ((/* implicit */short) var_8);
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) var_15))), ((-(((/* implicit */int) arr_14 [i_5]))))))) % (min((((((/* implicit */_Bool) 2147483647)) ? (2667961696U) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7581717693101855133LL)) ? (((/* implicit */int) (_Bool)1)) : (2147483646)))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                arr_22 [i_6] [i_7] |= (!(((/* implicit */_Bool) ((signed char) (signed char)-100))));
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (max((((/* implicit */unsigned long long int) var_7)), (var_2))) : (((/* implicit */unsigned long long int) max((((var_7) ? (2657893612U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6]))))), (((/* implicit */unsigned int) var_15)))))));
                arr_23 [9ULL] [(unsigned char)3] [i_7] = ((/* implicit */int) (+(max((((/* implicit */unsigned int) var_0)), (arr_20 [i_6] [i_7] [i_7])))));
                var_29 = ((/* implicit */signed char) ((3961447150U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))));
            }
        } 
    } 
    var_30 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) var_8)) : (max((var_9), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) max(((-(-512009059))), (((/* implicit */int) (_Bool)1))))));
}
