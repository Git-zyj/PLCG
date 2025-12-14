/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18957
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
    var_15 = ((/* implicit */signed char) 536870911LL);
    var_16 = ((/* implicit */short) ((int) 3024982321U));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((22ULL), (((/* implicit */unsigned long long int) 1073741824))))))))));
                var_18 -= ((/* implicit */unsigned char) (+(1358723694U)));
                arr_4 [14] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29841))) == (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))));
                var_19 = ((/* implicit */long long int) arr_0 [5ULL] [(unsigned char)1]);
            }
        } 
    } 
}
