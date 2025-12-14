/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187876
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_1), (var_1))) ? (min((var_3), (-808961600903045438LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_9)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) 808961600903045441LL)) && (((/* implicit */_Bool) (short)-12183)))))))) : (max((((((/* implicit */_Bool) (unsigned char)0)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned char) (signed char)2)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (arr_1 [i_0 - 3])))), ((short)-12191))))) * (max((-21LL), (((/* implicit */long long int) var_1))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1610612736)) ? (arr_1 [i_0 - 1]) : (-4965587134865580611LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14327)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)32225))))) : (max((((((/* implicit */_Bool) var_10)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))))), (((/* implicit */unsigned int) max((((/* implicit */short) var_4)), ((short)13936))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) var_10)) : (arr_1 [i_2 - 1])))) ? (((arr_1 [i_1]) | (arr_1 [5U]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2790180589U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)176)))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)74)) | (((/* implicit */int) (signed char)26))));
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_1) ? (-808961600903045438LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_3 + 1])) : (((/* implicit */int) arr_8 [i_3 + 1])))) : (((/* implicit */int) arr_8 [i_3 + 1])))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-12183)))) != (((((/* implicit */_Bool) (unsigned short)56670)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_3 + 1])))))))));
    }
    var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_2))))) ? (min((max((((/* implicit */long long int) (short)-1)), (960717346115947197LL))), (((/* implicit */long long int) var_11)))) : (min((max((var_18), (((/* implicit */long long int) (signed char)-113)))), (((/* implicit */long long int) var_0))))));
}
