/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162557
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max(((+(arr_4 [i_1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [12ULL]) != (arr_1 [i_0] [14])))))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_1) : (var_7))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), ((_Bool)0)));
                                var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1497890222024519016ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) % (((/* implicit */int) arr_7 [i_0])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)23888))))), (max((((/* implicit */unsigned long long int) var_9)), (16948853851685032599ULL)))))) ? (((/* implicit */int) arr_12 [i_0] [(unsigned short)15] [i_1] [i_5] [i_6] [(unsigned short)15] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_1)))))))));
                                var_17 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_5] [i_0] [18ULL]);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_15 [i_0]))))))) || (((/* implicit */_Bool) arr_12 [18U] [18U] [18U] [i_1] [18U] [i_1] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_4);
}
