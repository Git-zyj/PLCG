/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168879
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
    var_20 += ((/* implicit */unsigned char) min((((/* implicit */short) (unsigned char)45)), ((short)21799)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) (~(-7922281626980219628LL)));
                var_22 = ((/* implicit */int) (unsigned char)10);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) % (arr_2 [i_0])))) ? (((((/* implicit */_Bool) -1955442295)) ? (arr_4 [i_1] [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))) : (((/* implicit */unsigned int) 714434380))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (((((+(((/* implicit */int) var_15)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) ? (((/* implicit */int) var_10)) : (max((((((((/* implicit */int) var_15)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (40))) - (14))))), (((((/* implicit */int) (unsigned char)9)) >> (((18446744073709551615ULL) - (18446744073709551604ULL))))))))))));
}
