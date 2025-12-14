/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171672
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
    var_12 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_6)))))), (((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)16259))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_4 [(_Bool)1] [(_Bool)1]))), ((~(arr_2 [i_0] [i_0] [4ULL])))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)172)))) : (((/* implicit */int) ((signed char) var_3)))));
                    var_14 = ((arr_1 [i_0]) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) | ((-(4128461843006857499LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-1), ((signed char)-1)))))))));
    var_16 = ((/* implicit */_Bool) (signed char)11);
}
