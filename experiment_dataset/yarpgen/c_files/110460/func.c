/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110460
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = 4227858432ULL;
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) -4419312293668795274LL))) ? ((-(arr_1 [(signed char)10] [i_1]))) : (arr_1 [9U] [i_1])));
                var_16 &= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)182)) << (((((arr_6 [i_0] [i_1]) + (5434080977103810937LL))) - (10LL))))));
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(-4419312293668795282LL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (arr_0 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)212)) >= (((/* implicit */int) (_Bool)1)))))) : (((long long int) (short)32767))));
                arr_10 [i_0] [i_0] [7ULL] = ((/* implicit */signed char) arr_5 [i_0] [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-115)), ((unsigned char)13)))), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)0)))))));
}
