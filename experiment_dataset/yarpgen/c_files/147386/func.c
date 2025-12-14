/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147386
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 2] [i_1])) + (((/* implicit */int) (signed char)-127))))) ? (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_0 - 1] [i_0 - 1])) : (var_1)))) ? (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (1833709910U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (min((175378868U), (((/* implicit */unsigned int) arr_1 [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (signed char)-71))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)17] [(signed char)17]))) - (arr_0 [i_1])))), (max((((/* implicit */long long int) arr_2 [i_0])), (arr_3 [i_0] [i_0] [17ULL])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (15U)))))) ? (max((((/* implicit */long long int) ((int) 3595758041U))), (((long long int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_0 + 1] [i_0 - 1])) ? (arr_3 [i_1 - 1] [i_0 + 2] [i_0 - 1]) : (arr_3 [i_1 + 2] [i_0 + 2] [i_0 + 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_2]) | (arr_10 [i_2] [i_3])))) ^ (((unsigned long long int) min((1148417904979476480LL), (((/* implicit */long long int) var_11)))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((arr_12 [i_2] [(signed char)13] [i_4]) - (arr_3 [i_4] [i_3] [i_2]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-127)), (-560558737)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_10)) : (var_18))))))), (((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) -6998345787472379270LL)) : (var_1)))));
    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_17))) ? (((((/* implicit */_Bool) (+(4119588427U)))) ? (((((/* implicit */unsigned long long int) var_7)) * (var_1))) : (((/* implicit */unsigned long long int) min((1521157800), (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (-(var_2))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) ((int) var_17))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_14))) : (((((/* implicit */_Bool) -560558737)) ? (arr_8 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) arr_3 [i_5] [i_5] [i_5]))));
        arr_19 [i_5] = ((/* implicit */signed char) arr_17 [i_5 + 2] [i_5]);
        arr_20 [i_5] [8] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) - (min((arr_0 [i_5]), (((/* implicit */unsigned int) var_8))))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [5ULL] [i_7] [i_7] [(signed char)3] [(signed char)3])) * (((/* implicit */int) var_8))))) ? (arr_34 [i_6 + 1] [i_7] [i_8] [i_9] [i_7] [i_8] [i_7]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))))));
                            var_26 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) arr_2 [i_9])) : (((/* implicit */int) (signed char)-94))))), (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */unsigned int) var_7)) : (arr_11 [18LL]))))), (1068555648U)));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (signed char)78))));
                        arr_36 [i_9] [i_6 + 1] = ((/* implicit */long long int) arr_1 [i_6 - 1]);
                        arr_37 [i_6] [i_7 - 1] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */int) ((short) 3398351947U))), ((+(((/* implicit */int) (short)32767))))))), (((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_0 [i_6 - 1]) : (4294967295U)))));
                        var_28 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_8] [i_8] [i_6 + 1] [i_7 + 2])) && (((/* implicit */_Bool) arr_33 [i_6] [i_6 - 1] [i_7 + 2] [i_9] [i_8])))) || (((/* implicit */_Bool) max((arr_31 [i_6] [i_6] [i_8] [i_9] [i_6 + 1] [i_7 + 2]), (((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        } 
        arr_38 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_6 + 1] [i_6 - 1])) * (((/* implicit */int) arr_26 [i_6 + 1] [i_6 - 1])))))));
    }
}
