/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154262
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
    var_16 = ((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)57946)))), ((-(((/* implicit */int) (unsigned short)7590)))))))));
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - ((+(((/* implicit */int) (unsigned short)7596))))))) ? ((+(((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (min(((unsigned short)57954), (((/* implicit */unsigned short) var_0))))))));
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned long long int) (~((+(-1317782934895438464LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 4508075719138971840ULL))))), ((+(8111685684944973139LL))))), (((((/* implicit */_Bool) 16322751995015953644ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)63))) : (-9223372036854775801LL)))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_6))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) (+((~(885189982)))));
            }
        } 
    } 
}
