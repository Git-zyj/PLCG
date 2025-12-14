/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130203
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-256))))), (((((/* implicit */_Bool) -6447157926088101145LL)) ? (min((112925708672503064ULL), (((/* implicit */unsigned long long int) (short)-256)))) : (min((((/* implicit */unsigned long long int) (unsigned short)503)), (3423407796260187434ULL)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6733400703481187171LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (120U)));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((13027910041745824829ULL), (((/* implicit */unsigned long long int) (signed char)12))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-9)), (var_6)))) : (((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1)))))), ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)29881)) : (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */short) max((3423407796260187415ULL), (min(((+(17553372021507110453ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (-957734768))))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28711)) ? (7699102243216495628ULL) : (((/* implicit */unsigned long long int) -6447157926088101145LL))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) : ((((_Bool)1) ? (var_4) : (28378191U)))))), (max((10095087200917562686ULL), (3423407796260187415ULL))))))));
}
