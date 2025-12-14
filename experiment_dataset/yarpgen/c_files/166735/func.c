/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166735
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 8017605394401476549LL)))))) ? (((/* implicit */long long int) min((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_11)))))))) : (((((/* implicit */_Bool) ((var_2) * (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((-8017605394401476552LL) / (((/* implicit */long long int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_15 |= ((/* implicit */short) -8017605394401476549LL);
                            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_3])))))))) + (((((/* implicit */unsigned long long int) max((8017605394401476530LL), (((/* implicit */long long int) (unsigned char)43))))) | (((((/* implicit */_Bool) 8017605394401476555LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (16391054844709532848ULL)))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((int) arr_5 [(short)0]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)38))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(short)16] [(short)16]))) : (((long long int) (signed char)100)))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-39)) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [2LL] [i_1] [i_1] [(unsigned short)6] [i_2] [(_Bool)1])), ((unsigned short)54907)))))))));
                            var_18 |= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [(short)9])) ? (((/* implicit */unsigned long long int) var_3)) : (13089965637108471041ULL)))))) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_3])) : (min((((((/* implicit */_Bool) -5361391459510743193LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1 - 2])))), (((/* implicit */int) arr_1 [i_0 + 1])))));
                            var_19 = ((/* implicit */long long int) min((min((arr_1 [(unsigned char)23]), (arr_1 [i_3 - 2]))), (max((arr_1 [i_3 - 2]), (arr_1 [i_3 + 1])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [7LL])))))) - (((unsigned long long int) (unsigned char)106))))));
                var_21 += (-(((((/* implicit */long long int) ((((/* implicit */_Bool) 1548207554370676263ULL)) ? (((/* implicit */int) (unsigned short)10603)) : (-1929474881)))) + (((((/* implicit */_Bool) 15647762199087866031ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8621))) : (-5361391459510743171LL))))));
            }
        } 
    } 
}
