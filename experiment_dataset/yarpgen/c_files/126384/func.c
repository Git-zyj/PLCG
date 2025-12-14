/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126384
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))) == (min((arr_4 [i_0] [i_1]), (var_2)))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((~(min((((/* implicit */int) var_17)), (-157730265))))) | (((int) min((var_0), (((/* implicit */long long int) var_14))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_11 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */short) var_0);
                    var_19 *= (short)-22524;
                }
                /* vectorizable */
                for (short i_3 = 3; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 12065358236528986777ULL)) ? (4099269970836760373ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6381385837180564838ULL)) ? (arr_13 [i_3 + 1]) : (arr_13 [i_3 - 1]))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (12065358236528986777ULL)));
                    var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (short)-26526)) : (663808335))));
                }
                for (short i_4 = 3; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4 - 3]) << (((((/* implicit */int) arr_14 [i_0] [i_4 - 1] [i_4 - 3])) + (12270)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_15 [i_4 - 2] [i_4 + 2] [i_4 - 1] [(short)0])) : (2305843009211596800LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 2] [i_4 + 3] [i_4 - 2]))) | (arr_15 [i_4 - 3] [i_4 - 1] [i_4 - 1] [i_4]))))));
                    arr_18 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */int) 6381385837180564838ULL);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (int i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 1])), (-6397757899115427119LL)))) && (((/* implicit */_Bool) (-(14347474102872791242ULL))))));
                            var_26 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_6 + 1] [i_6])))), (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_12 [i_0] [i_1] [i_5] [i_6]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
    {
        arr_27 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_6))) ? (((int) 14347474102872791228ULL)) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_7])) <= (var_3))))));
        var_27 = ((/* implicit */int) var_10);
        var_28 = (-(((int) var_0)));
    }
    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12065358236528986784ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) -8778332787706345091LL)) && (((/* implicit */_Bool) 4099269970836760350ULL))))) : (arr_0 [i_8] [i_8])));
        var_30 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */long long int) arr_8 [i_8] [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_16) : (((/* implicit */long long int) arr_13 [i_8]))))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)39)) % (var_8))))) != (var_9)));
        var_31 = ((/* implicit */unsigned char) ((unsigned short) 6381385837180564854ULL));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */short) ((var_10) * (((/* implicit */unsigned int) arr_32 [i_10]))));
        arr_36 [i_10] = ((((/* implicit */_Bool) 4099269970836760350ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17)));
    }
}
