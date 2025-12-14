/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187940
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = 0ULL;
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) 6560481877194051589LL))));
                var_17 -= ((/* implicit */long long int) min((((562949953421310ULL) + (((((/* implicit */_Bool) var_0)) ? (4ULL) : (arr_0 [(signed char)4]))))), (((/* implicit */unsigned long long int) (unsigned short)65535))));
                var_18 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 4611615649683210240LL)) : (18446181123756130318ULL))) < (((/* implicit */unsigned long long int) 5828701769197764123LL))))) >> (((var_0) + (5947463159058715522LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_11))))))))));
    var_20 = ((/* implicit */unsigned long long int) var_2);
    var_21 = ((/* implicit */long long int) ((unsigned long long int) max((((18446744073709551615ULL) << (((562949953421297ULL) - (562949953421242ULL))))), (((((/* implicit */_Bool) 15862441178455400928ULL)) ? (var_9) : (var_9))))));
}
