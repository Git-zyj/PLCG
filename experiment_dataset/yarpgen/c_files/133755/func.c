/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133755
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (min((var_0), (((/* implicit */unsigned char) var_12))))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (signed char)-2);
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 875240249370201495ULL)) ? (((((/* implicit */unsigned int) var_5)) - (2516892403U))) : (((/* implicit */unsigned int) -1873190435))));
                var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned char)128)), (arr_2 [i_0 - 1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 2])) : (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((-9223372036854775805LL), (((/* implicit */long long int) (signed char)-103))))));
                var_18 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [(_Bool)0]))) ? (min((((/* implicit */unsigned int) (signed char)-96)), (501469643U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1]))))))))));
                var_19 = ((/* implicit */unsigned long long int) ((signed char) 875240249370201473ULL));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)7)), (2498686141848676205ULL)));
}
