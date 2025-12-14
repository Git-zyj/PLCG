/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121692
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_10 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((-8249187265580618059LL) + (9223372036854775807LL))) >> (((-1592197785) + (1592197842))))))))) != ((((!((_Bool)1))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) ((unsigned char) var_8))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (_Bool)1);
                                var_12 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) min((553535490), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (8249187265580618059LL)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)112))))) & (((-8249187265580618059LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61)))))));
                arr_13 [i_1] &= ((/* implicit */short) ((unsigned short) var_9));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_3);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-1)))) : (min((var_7), (70368744177662LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20269))))))));
}
