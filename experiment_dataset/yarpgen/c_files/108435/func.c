/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108435
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0 - 2] [6ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((691290852132259107LL), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) 691290852132259118LL)) : (min((((/* implicit */unsigned long long int) (unsigned char)162)), (10674901814734762137ULL)))));
                arr_9 [i_0] [i_0] [5ULL] |= ((/* implicit */int) arr_6 [i_0 - 1]);
                arr_10 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)63)), (((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_6 [i_1])) : (arr_2 [i_0]))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) 4294967281U))))))));
                arr_11 [i_0] [i_0] = ((/* implicit */long long int) max((-1959449690), (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_16 [i_2] [i_3] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]);
                            arr_17 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-28)) % (((/* implicit */int) (_Bool)1))))) ? (((long long int) (unsigned short)4867)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */long long int) 3965278539U))))) ? (((/* implicit */int) ((unsigned short) arr_1 [(signed char)6]))) : (((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)56))) : (var_9)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))));
    var_20 = ((/* implicit */unsigned char) var_4);
}
