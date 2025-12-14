/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139576
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
    var_17 = ((/* implicit */unsigned int) (+(((int) var_0))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((unsigned int) min((arr_0 [i_1]), (var_2)));
                arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1]) | (arr_5 [i_0 + 1])))) ? (var_8) : (((arr_5 [i_0 - 1]) | (arr_5 [i_0 - 2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            {
                arr_13 [(signed char)2] [i_2] [(signed char)2] = ((((/* implicit */_Bool) (signed char)-40)) ? (2728019234660629588ULL) : (((/* implicit */unsigned long long int) -1991654766)));
                var_19 = ((/* implicit */short) var_9);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                            {
                                arr_21 [i_2] [i_3] [i_2] [5U] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned long long int) var_3)) : (var_16)))) || (((/* implicit */_Bool) arr_9 [i_5])))) ? (((var_4) * (var_16))) : (((/* implicit */unsigned long long int) ((((arr_10 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))))) / (((/* implicit */long long int) ((int) arr_15 [i_4] [i_2]))))))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [i_3] [i_3 + 1] [i_3 - 1] [i_6 + 1])) >= (((/* implicit */int) arr_19 [i_3] [i_3] [i_4 + 1] [i_3 - 1] [i_3 - 1])))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((/* implicit */int) arr_20 [i_5 + 1] [i_4 - 1])) : (((((/* implicit */int) arr_7 [16] [i_2])) >> (((arr_10 [i_3 + 1]) + (2065949243727788424LL)))))))) : (((long long int) ((signed char) var_3)))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2837230997146168545ULL)))))));
                                var_23 = ((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                                arr_26 [i_2] [i_3] [i_2] [i_5] [i_5] [0U] [13U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_2] [i_5 + 1] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) > (max((arr_11 [i_2] [i_5 + 1] [i_2]), (((/* implicit */unsigned long long int) 4120900954U))))));
                                arr_27 [i_2] [i_3] [i_3 - 1] [13LL] [i_3 + 1] [i_3 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) < (var_16))) && (((/* implicit */_Bool) var_1))));
                            }
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)96)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [0U] [i_2]))) * (15718724839048922039ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_3 - 1])) < (((/* implicit */int) arr_22 [i_3 + 1]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9329848754304115695ULL)) && (((/* implicit */_Bool) 15248517953473700531ULL)))))) >= (var_15))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
