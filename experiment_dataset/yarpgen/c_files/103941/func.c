/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103941
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) min((((((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (7552148865530176157LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)53)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))), ((+(((long long int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) min((max(((~(1740548554241925120ULL))), (((/* implicit */unsigned long long int) (signed char)-53)))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) 133653014)), (arr_8 [i_0] [i_0]))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(arr_4 [i_1 + 1] [i_1 + 1])));
                    }
                } 
            } 
            arr_11 [i_1] [i_0] = ((/* implicit */unsigned char) 4294967295U);
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)183))))) ? (max((((/* implicit */unsigned long long int) 4294967295U)), (arr_7 [i_0] [i_1] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12525)))))))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((max((arr_14 [i_0] [i_4] [i_4]), (arr_14 [i_0] [i_0] [i_0]))), (arr_14 [i_0] [i_0] [i_0])));
            var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) ((arr_8 [i_0] [i_0]) <= (arr_8 [i_0] [i_0]))))))));
            var_18 = ((/* implicit */unsigned short) (~((-(1U)))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            arr_17 [i_0] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) : (((unsigned long long int) arr_4 [i_0] [i_5]))));
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5])))))));
            arr_19 [i_5] = ((/* implicit */long long int) (~(arr_7 [i_5] [i_5] [i_5] [i_0])));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            arr_22 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (arr_5 [i_0] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))));
            var_19 ^= ((/* implicit */int) (unsigned char)128);
            arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) (unsigned short)24456)) ? (arr_14 [i_0] [i_0] [i_0]) : (7552148865530176162LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_6] [i_6] [i_0]))))));
        }
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (((~((((_Bool)1) ? (((/* implicit */long long int) 4294967295U)) : (-7552148865530176141LL))))) / (-7552148865530176157LL))))));
        var_21 += ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) (signed char)-127)), (arr_12 [i_0] [i_0])))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)12525)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((long long int) (!(((/* implicit */_Bool) (unsigned char)113)))))));
    var_23 = ((/* implicit */long long int) (+(5551528240714061947ULL)));
    var_24 |= ((/* implicit */unsigned long long int) ((long long int) (unsigned char)225));
}
