/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156829
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
    var_19 = ((/* implicit */short) max((((/* implicit */int) var_12)), ((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -3050017195413285026LL))))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_10))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) && ((_Bool)1))))))))) % (min((max((var_11), (7547670202249007311ULL))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) var_12)))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((10899073871460544304ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((unsigned short)40580), (((/* implicit */unsigned short) (short)-16715)))))));
                    arr_12 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)87)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_14), (var_8))))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_1)) ? (max((((/* implicit */long long int) var_14)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65535))))) : (max((((/* implicit */unsigned long long int) (unsigned short)24956)), (var_10)))))));
    var_23 += ((/* implicit */signed char) ((var_10) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (min((2098816246819572403LL), (((/* implicit */long long int) var_18)))))))));
}
