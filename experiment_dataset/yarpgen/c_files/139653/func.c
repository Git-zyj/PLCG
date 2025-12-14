/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139653
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
    var_11 = ((/* implicit */int) var_8);
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551615ULL), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) 1503172909U)) : (1859575315811580304ULL))) : (max((18325919726719187289ULL), (((/* implicit */unsigned long long int) (unsigned char)18))))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned char)1)))) : ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (1174417156) : (((/* implicit */int) (unsigned char)0)))))))))));
                    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (0U)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)217))) : (((((/* implicit */_Bool) (signed char)-57)) ? (1) : (((/* implicit */int) (unsigned char)6))))))) ? (min((((/* implicit */unsigned long long int) 4095U)), (2300430474330805169ULL))) : (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) : (17053098508172210918ULL)))));
                }
            } 
        } 
    } 
}
