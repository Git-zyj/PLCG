/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161578
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
    var_20 += ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-54))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)196);
                var_21 &= ((/* implicit */int) arr_3 [6LL] [(short)4] [6LL]);
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)28))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_4 [i_0] [i_0]))))), (((((/* implicit */long long int) 1368748075)) / (-1LL))))))))));
                var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (7262614522383014341ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762)))));
            }
        } 
    } 
}
