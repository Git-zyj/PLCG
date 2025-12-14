/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141600
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
    var_19 *= ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_18)))), (((/* implicit */int) var_6))))));
    var_20 += ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (max((var_16), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))));
        var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])))) * (((/* implicit */int) ((((18446744073709551597ULL) & (1796062128239020145ULL))) >= (((unsigned long long int) (signed char)-1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [4LL] [i_2] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)-13))));
                    var_23 -= ((/* implicit */int) min((((((13915169735743015612ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) - (((arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1]) ? (arr_3 [i_0] [i_0]) : (18ULL))))), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (15861126170052999190ULL))) : (((/* implicit */unsigned long long int) ((-768376419) & (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3 + 2] [i_3] = ((/* implicit */unsigned long long int) (signed char)78);
        /* LoopSeq 1 */
        for (long long int i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            arr_17 [i_3 + 1] [i_4] [i_3 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_7 [i_3 - 1] [i_3] [i_3] [i_3]), (1763023739))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) var_17))))) ? (min((((/* implicit */unsigned long long int) 16777215)), (28ULL))) : (((((/* implicit */_Bool) var_9)) ? (33ULL) : (18ULL)))))) ? (((/* implicit */int) ((signed char) arr_16 [i_3]))) : (((/* implicit */int) var_18))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_25 -= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (unsigned short)50150))));
        var_26 = 1055531162664960ULL;
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-1)), (794776405167156095ULL)));
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((unsigned long long int) (signed char)-2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2)))))))));
        arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (10021889947422222155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (min((arr_13 [(signed char)13]), (arr_13 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6]))))))));
    }
}
