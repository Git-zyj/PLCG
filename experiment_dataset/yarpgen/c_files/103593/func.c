/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103593
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((((/* implicit */_Bool) -1708387932261787692LL)) && (((/* implicit */_Bool) var_11)))))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_2), (((unsigned short) (short)-31071))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                arr_6 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) ^ (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (short)-25433)) : (((/* implicit */int) (signed char)55))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_13)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)62496))))) * (((unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_0])) | (((/* implicit */int) var_0)))))));
                                var_19 = ((/* implicit */unsigned short) var_9);
                                var_20 = max((((/* implicit */short) (!(((/* implicit */_Bool) 15682852972072710070ULL))))), (var_4));
                                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)21090)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35118))) : (2177040359U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3156)))))))), (14479492294226092831ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) 2727641771193054807LL);
}
