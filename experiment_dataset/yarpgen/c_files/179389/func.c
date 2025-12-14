/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179389
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
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)205))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((-2147483647 - 1)), (((var_0) << (((((-2509885978043961920LL) + (2509885978043961921LL))) - (1LL))))))))));
                    var_16 = ((/* implicit */_Bool) ((var_6) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 1045075997)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_13) : (((/* implicit */long long int) 697649658U)))))) : (((/* implicit */long long int) ((int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_17 = max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-50)) : (-1809068447)))))), (var_3));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_3))));
            var_19 = ((/* implicit */long long int) (short)31744);
        }
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)7680)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)22437))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 513255795U)), (((10310164120127645906ULL) << (((2147483647) - (2147483625))))))))));
    }
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(549688705024ULL))))));
}
