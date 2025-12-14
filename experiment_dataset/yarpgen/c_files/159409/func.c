/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159409
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((-829189728), (829189727)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((~((((_Bool)1) ? (-8919185250675765570LL) : (((/* implicit */long long int) -5)))))) << (((((((((/* implicit */_Bool) arr_10 [19ULL] [i_1] [i_2] [i_3 + 2] [i_2] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_1] [(_Bool)1] [i_2] [i_3 + 1] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))) + (1568))) - (44))))))));
                                arr_11 [(unsigned short)6] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-94)) & (((/* implicit */int) (unsigned short)65535))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) max((arr_2 [i_3] [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (var_1))))))) ? (((/* implicit */unsigned long long int) (+(((int) (short)-18091))))) : (var_10))))));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)175)));
}
