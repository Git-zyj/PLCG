/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12875
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
    var_11 = ((/* implicit */_Bool) var_1);
    var_12 *= (_Bool)1;
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), ((+(((((/* implicit */_Bool) 6048568392018501073LL)) ? (6048568392018501073LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (arr_0 [i_1] [i_1])));
            var_15 = ((/* implicit */short) 797509503U);
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (short)8380))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (_Bool)1)), (1900196006)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))))) : (arr_0 [i_0] [i_0 - 1])))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_17 -= ((min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) & (((/* implicit */long long int) ((64512) + (((/* implicit */int) var_6))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 797509503U))));
                        var_19 = ((/* implicit */short) var_5);
                        var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (signed char)21)) ? (3909235009533784602LL) : (-8840984178800983095LL))) : (var_10))), (min((var_5), (((/* implicit */long long int) (short)7168))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_16 [i_0] [i_0 - 1] [i_2] [i_5] [i_6] [i_0] = ((/* implicit */_Bool) arr_10 [i_0 + 2] [i_2] [i_5] [i_6]);
                        arr_17 [i_0] [i_0 + 1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 31LL)) ? (arr_9 [i_0 + 1] [i_2] [i_2] [i_2]) : (((((/* implicit */_Bool) ((unsigned char) 18446744073709551615ULL))) ? (((/* implicit */int) ((signed char) 9223231299366420480LL))) : (((/* implicit */int) var_6))))));
                    }
                } 
            } 
            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (signed char)-78);
        }
        arr_19 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0] [i_0 + 1]);
        var_21 = ((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) -1875143916)) : (797509503U)));
        arr_20 [(unsigned short)6] [(unsigned short)6] &= ((/* implicit */int) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 - 1]))))))), (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0])) ? (-3909235009533784603LL) : (arr_5 [i_0 + 1] [i_0 + 1])))));
    }
}
