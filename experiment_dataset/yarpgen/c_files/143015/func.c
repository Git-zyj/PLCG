/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143015
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */int) ((unsigned short) max((var_2), (((/* implicit */unsigned int) (unsigned short)2475)))))) : (((int) (unsigned short)46296)))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((((arr_3 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_16))))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -2147483645)) : (18446744073709551603ULL))))))));
        var_21 -= ((/* implicit */unsigned int) ((short) max((max((2ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_9)))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_22 -= ((/* implicit */_Bool) ((unsigned char) min((((unsigned int) (unsigned short)1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_1))))))));
        arr_7 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((-1LL) & (((/* implicit */long long int) arr_2 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (3584743564956604182LL)))) ? (((((/* implicit */_Bool) 12ULL)) ? (942688075U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))))) : (((arr_3 [i_2]) << (((var_2) - (614738449U)))))))) : (((var_0) ? (((((/* implicit */_Bool) (unsigned short)50171)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) arr_5 [(unsigned short)6])))) : (((/* implicit */unsigned long long int) arr_2 [i_2]))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned short) max((((-8304177523351573737LL) + (((/* implicit */long long int) arr_4 [i_2])))), (((/* implicit */long long int) arr_3 [i_2]))))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (733375943U)))) : (((unsigned long long int) var_16))))) ? ((+(((((/* implicit */_Bool) 7962481765853331754LL)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) (-(((2147483647) / (-2147483645)))))))))));
    }
    var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_13)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))))));
    var_26 = ((/* implicit */int) var_13);
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_3))));
}
