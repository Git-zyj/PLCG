/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137318
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) max(((unsigned char)193), ((unsigned char)42))))))), (min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 1]))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max((((/* implicit */int) ((3052216724U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4549)))))), ((~(((/* implicit */int) (unsigned short)32768)))))) & (min((-1273094826), (((/* implicit */int) (signed char)-70)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (unsigned char)242)), ((-(9617380325967214001ULL))))), (((/* implicit */unsigned long long int) 3440739509023071315LL))));
                var_22 = ((/* implicit */unsigned char) (~(-785908721)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) var_10)))))));
}
