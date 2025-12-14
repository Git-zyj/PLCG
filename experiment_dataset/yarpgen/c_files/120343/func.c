/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120343
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
    var_12 = ((/* implicit */signed char) var_10);
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = ((/* implicit */long long int) ((549805924U) <= (549805942U)));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_4)))))), (min((8209360503199984711LL), (((/* implicit */long long int) 3745161346U))))));
                    arr_7 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (0)))), (max((((/* implicit */unsigned int) (unsigned short)40081)), (0U)))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_2 [i_0 + 2] [i_0 - 3] [i_1 + 1]), (arr_2 [i_0 - 3] [i_0 - 2] [i_1 + 1])))), ((+(((/* implicit */int) (unsigned short)56201))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_2] [(unsigned short)3] = ((/* implicit */signed char) ((((long long int) 549805952U)) ^ (((/* implicit */long long int) max((((unsigned int) var_11)), (((((/* implicit */_Bool) (unsigned short)40089)) ? (549805952U) : (1215202025U))))))));
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((4294967287U) | (3079765270U)))) ? (var_1) : (((((/* implicit */_Bool) 78282694U)) ? (var_3) : (((/* implicit */long long int) 16))))))));
                        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((-6565954066225261745LL), (((/* implicit */long long int) 1215202036U))))), (var_9)));
                    }
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_2] [15U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) 3079765256U)))), (((/* implicit */long long int) ((signed char) arr_4 [i_0] [i_0] [i_0]))))))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33824)) & (((/* implicit */int) (signed char)10))))) < (3079765266U)))))))));
                    }
                }
            } 
        } 
    } 
}
