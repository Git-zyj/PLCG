/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153817
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 &= ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) min(((unsigned short)28404), (((/* implicit */unsigned short) (signed char)51))))) ? (((var_7) >> (((var_7) - (6327807483705668482ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_13 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) & (((/* implicit */int) min((var_11), (var_11))))))) ? ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) : ((+(var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */short) var_5);
    var_16 = ((/* implicit */short) var_0);
    var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65526))))) ? (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)34)))) : (((/* implicit */int) var_10)));
}
