/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165389
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((((int) 16406983725976060160ULL)), (((/* implicit */int) var_0))));
                arr_6 [i_0] [9LL] [i_1 - 2] = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned long long int) (unsigned short)33967)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)39794)) ? (2039760347733491455ULL) : (((/* implicit */unsigned long long int) -838114099)))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)73))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_13);
}
