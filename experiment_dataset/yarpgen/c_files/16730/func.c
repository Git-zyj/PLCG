/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16730
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_17 ^= (+(min((arr_7 [i_0] [i_1 + 2] [i_2 - 1] [i_2 - 1]), (arr_1 [19ULL] [i_1 - 1]))));
                        var_18 = 8968733549004455175ULL;
                    }
                } 
            } 
        } 
        var_19 = (+(((((/* implicit */_Bool) arr_4 [12ULL] [i_0] [i_0] [i_0])) ? (((unsigned long long int) var_13)) : (min((arr_1 [i_0] [i_0]), (var_10))))));
        var_20 *= min((4906472092110428486ULL), (max((1866946682443079995ULL), (((/* implicit */unsigned long long int) ((arr_9 [i_0]) <= (arr_8 [i_0] [i_0] [i_0] [i_0] [6ULL] [i_0])))))));
        arr_10 [i_0] [i_0] = min((2873161353722535916ULL), (1866946682443079995ULL));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((unsigned long long int) var_14)), (var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            {
                var_22 = (+(max((2590589644209597757ULL), (var_11))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) (+(((var_12) - (var_1)))))) ? (min((3518802291409095417ULL), (((var_6) / (arr_0 [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(15158013465894726493ULL))))))))))));
                        var_24 = 14036562103010410584ULL;
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_25 = (+(arr_6 [i_4] [0ULL] [i_4] [8ULL]));
                            var_26 = arr_17 [i_4] [12ULL] [1ULL] [12ULL];
                            var_27 = (+(arr_4 [i_9] [i_4] [i_4] [i_4]));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (arr_8 [13ULL] [11ULL] [i_6] [i_6] [18ULL] [11ULL])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_29 = min((((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? ((~(4187768738531699673ULL))) : ((~(6078461392195378346ULL))))), (min((3291372678412394748ULL), (1866946682443079980ULL))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (max(((+(arr_4 [i_4] [i_5] [i_5] [i_4]))), (((((/* implicit */_Bool) ((var_14) + (arr_17 [1ULL] [i_5] [i_8] [1ULL])))) ? (((((/* implicit */_Bool) 16457125963569887252ULL)) ? (arr_11 [10ULL] [i_5]) : (arr_2 [i_5] [10ULL]))) : (min((var_16), (arr_22 [i_4] [7ULL] [i_8] [i_10])))))))));
                            arr_28 [i_4] [i_5] [i_6] [i_8] [i_10] = (+(((unsigned long long int) ((unsigned long long int) 11042578077833282472ULL))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_31 = ((unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_11] [3ULL] [3ULL])) ? (arr_8 [21ULL] [i_5] [i_6] [i_5] [12ULL] [i_6]) : (arr_0 [19ULL]))) | (((((/* implicit */_Bool) 6477636314587732369ULL)) ? (arr_4 [i_4] [i_4] [i_4] [i_4]) : (var_3)))));
                            var_32 &= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((var_8) % (arr_18 [10ULL] [i_5] [2ULL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (14927941782300456211ULL) : (var_2))))))));
                        }
                        var_33 = arr_1 [i_4] [20ULL];
                        arr_31 [i_4] [i_4] [i_6] [i_8] [i_8] = (+((+(max((arr_2 [i_8] [i_4]), (var_6))))));
                        var_34 = (+(((((/* implicit */_Bool) arr_25 [i_4] [i_4] [1ULL] [i_4] [i_8] [i_8] [i_8])) ? (17949270465373987663ULL) : ((~(3288730607814825122ULL))))));
                        var_35 = (i_4 % 2 == zero) ? (((((/* implicit */_Bool) min((max((arr_30 [i_4] [i_5] [2ULL] [i_8] [i_8]), (arr_15 [i_8] [i_8]))), (((var_10) >> (((arr_25 [6ULL] [i_4] [i_5] [1ULL] [i_5] [i_4] [i_4]) - (479980159429808470ULL)))))))) ? (((((/* implicit */_Bool) min((var_4), (arr_8 [i_4] [i_4] [i_5] [i_4] [i_8] [17ULL])))) ? (arr_12 [i_4]) : (4906472092110428504ULL))) : (max((min((arr_25 [i_4] [i_4] [i_6] [i_5] [5ULL] [i_4] [2ULL]), (var_6))), ((+(12210377386679702760ULL))))))) : (((((/* implicit */_Bool) min((max((arr_30 [i_4] [i_5] [2ULL] [i_8] [i_8]), (arr_15 [i_8] [i_8]))), (((var_10) >> (((((arr_25 [6ULL] [i_4] [i_5] [1ULL] [i_5] [i_4] [i_4]) - (479980159429808470ULL))) - (10857967680945446047ULL)))))))) ? (((((/* implicit */_Bool) min((var_4), (arr_8 [i_4] [i_4] [i_5] [i_4] [i_8] [17ULL])))) ? (arr_12 [i_4]) : (4906472092110428504ULL))) : (max((min((arr_25 [i_4] [i_4] [i_6] [i_5] [5ULL] [i_4] [2ULL]), (var_6))), ((+(12210377386679702760ULL)))))));
                    }
                    var_36 = (-((+(((unsigned long long int) arr_12 [i_4])))));
                }
                var_37 = ((min((((((/* implicit */_Bool) var_1)) ? (12095861056821704369ULL) : (3288730607814825116ULL))), (min((var_3), (3062972219133208957ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_15 [8ULL] [11ULL])))) || (((/* implicit */_Bool) min((11279939175524906120ULL), (10111395571681853976ULL)))))))));
                var_38 = ((unsigned long long int) ((unsigned long long int) min((var_6), (var_8))));
                var_39 = ((((((/* implicit */_Bool) arr_26 [i_5] [2ULL] [2ULL] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_17 [i_4] [i_5] [4ULL] [i_5])))) ? (((((/* implicit */_Bool) min((arr_1 [13ULL] [13ULL]), (var_5)))) ? (max((var_14), (arr_26 [i_5] [i_5] [i_5] [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_21 [i_5] [5ULL])) ? (arr_20 [i_4] [i_4] [9ULL] [i_4] [9ULL] [i_4]) : (arr_5 [i_4] [0ULL]))))) : (((((/* implicit */_Bool) ((unsigned long long int) 13540271981599123111ULL))) ? ((+(var_11))) : (((unsigned long long int) 1369631990984956081ULL)))));
            }
        } 
    } 
    var_40 = ((((6129761437371211817ULL) != (17403400422692304372ULL))) ? (min((var_14), (max((17668294872304337914ULL), (var_11))))) : (max((3288730607814825130ULL), (min((var_5), (var_3))))));
}
