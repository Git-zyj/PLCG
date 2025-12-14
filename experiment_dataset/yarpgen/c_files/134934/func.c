/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134934
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
    var_20 = ((/* implicit */long long int) min((var_20), (-1LL)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((var_8) / (arr_0 [i_0])))), (((((/* implicit */_Bool) 2746750432U)) ? (1024611518U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                    arr_9 [i_1] = ((/* implicit */int) arr_1 [(unsigned char)0]);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) arr_6 [i_2] [i_1] [6ULL] [(unsigned short)2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (arr_3 [i_0] [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7548858449690575449LL)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (3585844971U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))))) : (((/* implicit */long long int) arr_0 [i_1 + 4]))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((-7548858449690575449LL) / (((/* implicit */long long int) 709122325U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [(short)7] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_1 [i_3]))));
                                arr_15 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)1)))))))))))));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(7548858449690575449LL)))) ? (((((unsigned long long int) -1225471144)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2948633411U)) ? (1346333885U) : (2948633424U)))))) : (((/* implicit */unsigned long long int) 709122322U))));
}
