/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187103
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
    var_11 ^= ((/* implicit */short) min((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_10)))))), (max(((-(2147483647))), (min((((/* implicit */int) var_9)), (var_6)))))));
    var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 14561455151761010970ULL)) ? (-1938587831) : (((/* implicit */int) (short)0))))));
    var_13 = ((signed char) 3885288921948540645ULL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-1182970914067068165LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? ((-(((/* implicit */int) (unsigned short)12286)))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10)))))))));
        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)19808), (((/* implicit */unsigned short) ((var_6) > (668431695)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 &= max((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_6 [i_2])))), (((/* implicit */long long int) (+((+(((/* implicit */int) arr_8 [i_1]))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
    }
}
