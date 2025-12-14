/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126961
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
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned short)4678), (((/* implicit */unsigned short) (short)20183)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (unsigned short)4678)) ? (5382363003753426248ULL) : (14663305184563211994ULL)))));
                var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)89))))) ? (((((/* implicit */_Bool) -5586248573219270576LL)) ? (((/* implicit */unsigned long long int) 5586248573219270576LL)) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-5586248573219270573LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5586248573219270573LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 15840261313318232605ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) -4501492532282153113LL)) ? (((/* implicit */int) (short)-21901)) : (((/* implicit */int) var_7)))))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) var_11))))) : (((/* implicit */int) min((var_2), (var_13))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_20 = ((long long int) (signed char)10);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)125)) < (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18429))) : (0LL)))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (short)-11437)) <= (((/* implicit */int) (short)21335))))), ((~(var_14))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
            }
        } 
    } 
}
