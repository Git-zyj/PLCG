/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110252
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)112))))) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (signed char)-112)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_2))))) ? ((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-124)))) : ((-(((/* implicit */int) (signed char)-118))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (_Bool)1))));
                                var_13 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (signed char)124)))))) != (((((/* implicit */_Bool) arr_13 [(signed char)4] [i_1] [i_1] [i_3] [i_4] [i_0 - 1])) ? (((/* implicit */unsigned int) var_7)) : ((+(6U)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (-(-287330735)));
                arr_14 [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((unsigned long long int) -59432449)) ^ (((/* implicit */unsigned long long int) arr_9 [i_1] [i_0]))));
            }
        } 
    } 
}
