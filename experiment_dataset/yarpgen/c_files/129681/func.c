/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129681
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) min((((/* implicit */int) max((min((arr_0 [i_0]), (((/* implicit */short) (signed char)-73)))), (((/* implicit */short) min(((_Bool)0), (arr_1 [6U]))))))), ((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [11U] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_7)), (var_1))) >> (((((int) 15689170384861246380ULL)) - (440120231)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 10014051537698348223ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) var_17)))) : (((unsigned long long int) 8432692536011203393ULL))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) (((((_Bool)1) ? (((((/* implicit */int) (signed char)86)) >> (((arr_4 [i_1]) - (7513922634929450179ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) != (2335386017U)))))) - ((-(((/* implicit */int) arr_1 [i_1]))))));
                arr_7 [i_1] [i_2] = (signed char)(-127 - 1);
            }
        } 
    } 
}
