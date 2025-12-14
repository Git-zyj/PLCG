/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141824
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) -1161493309)), (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (2985481337572653021ULL) : (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) min((var_6), (min((5693469942105461738LL), (((/* implicit */long long int) var_7)))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0 + 3]) : (arr_1 [i_0] [i_0 + 2])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34)))))), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0])))))) : (((var_10) ? (((((/* implicit */unsigned long long int) var_6)) & (15461262736136898594ULL))) : (((/* implicit */unsigned long long int) var_13)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_18 += ((/* implicit */unsigned int) min((min((((((/* implicit */unsigned long long int) -5693469942105461748LL)) / (15461262736136898594ULL))), (((/* implicit */unsigned long long int) var_7)))), (6037389984373422756ULL)));
        var_19 = ((/* implicit */unsigned int) min((min((min((arr_1 [i_1] [i_1]), (3632355225122488646ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) var_16))))))), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        arr_7 [i_2 + 1] &= ((/* implicit */unsigned short) arr_3 [i_2]);
        var_20 = ((/* implicit */short) (unsigned char)147);
    }
    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 2) 
    {
        var_21 = ((/* implicit */_Bool) arr_5 [i_3] [i_3]);
        var_22 = ((min((((/* implicit */unsigned long long int) var_4)), (min((13875157096062839799ULL), (((/* implicit */unsigned long long int) arr_6 [i_3])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50492))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 4) 
        {
            {
                var_23 = ((/* implicit */short) ((min((var_4), (arr_0 [i_4] [i_5 + 2]))) | (min((arr_10 [i_4]), (((/* implicit */long long int) var_14))))));
                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 5693469942105461738LL)), (min((((/* implicit */unsigned long long int) arr_6 [i_5 + 2])), (16990005321387135166ULL)))));
                var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)9036)) ? (arr_10 [i_4]) : (((/* implicit */long long int) 319542444U)))) / (((/* implicit */long long int) ((arr_13 [i_4]) * (var_13))))))) ? (min((min((arr_8 [i_4]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_16)))))));
                arr_15 [i_5] [i_5] = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (arr_6 [i_4])))), (arr_14 [i_5]))), (((/* implicit */unsigned long long int) min((min((arr_0 [i_4] [18ULL]), (((/* implicit */long long int) (signed char)-42)))), (((/* implicit */long long int) arr_12 [i_4]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_15);
}
