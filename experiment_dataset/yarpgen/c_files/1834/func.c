/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1834
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_2 [i_0])))) ? (min((((/* implicit */long long int) var_8)), (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11))))))) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) min((((/* implicit */int) var_17)), (arr_8 [i_0] [16ULL] [i_3] [i_4])))))) : (((/* implicit */long long int) (-(arr_11 [i_0 + 2] [i_1] [i_3 + 1] [i_3]))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) (short)-369));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((signed char) var_5)))), ((-(((/* implicit */int) var_8)))))))));
                    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)141)) - (((((/* implicit */int) (unsigned char)115)) - (((/* implicit */int) (signed char)-2)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                arr_19 [i_5] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned int) 1859490322U))))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_8))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(2983384265U))))));
                arr_20 [i_5] [8U] = ((/* implicit */unsigned long long int) min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (4294967295U))), (((/* implicit */unsigned int) var_1))));
                /* LoopNest 2 */
                for (signed char i_7 = 4; i_7 < 20; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (var_18)))) ? (min((((/* implicit */unsigned int) var_9)), (1456493488U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))))), (((unsigned long long int) 4294967295U))));
                            var_24 = ((/* implicit */long long int) var_16);
                        }
                    } 
                } 
            }
        } 
    } 
}
