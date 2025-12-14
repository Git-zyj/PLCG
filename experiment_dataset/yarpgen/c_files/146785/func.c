/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146785
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
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1791991512)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (short)-14419))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [(unsigned char)4] [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4250110727485219353LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (8889065262472778792ULL)))) ? (((((/* implicit */_Bool) (signed char)-19)) ? (-6528789109213701802LL) : (((/* implicit */long long int) 718886541)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)32762))) : (-4884002752692670659LL))));
            var_15 = (unsigned char)69;
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35790)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)-28811))));
            arr_11 [i_0] = ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (7797972363687739021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned char)69))));
        }
    }
    var_18 = ((/* implicit */_Bool) (signed char)-34);
    var_19 = ((/* implicit */unsigned char) (signed char)-123);
}
