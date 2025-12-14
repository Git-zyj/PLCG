/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144489
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
    var_11 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) 4483846941963661794LL)) : (34358689792ULL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 2] [i_0 + 1])) ? (((unsigned int) arr_7 [i_2] [i_1 + 1] [i_0])) : (max((arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 3]), (((/* implicit */unsigned int) 2032463172))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) arr_1 [(unsigned char)12]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)(-127 - 1)))))))), ((-(arr_0 [i_1 - 1])))));
                                var_13 -= ((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1]);
                                var_14 = ((arr_4 [i_1 - 2] [i_1 - 2]) | (min((arr_4 [i_4] [i_1 + 3]), (arr_4 [i_4] [i_2]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (signed char)-1);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_0)) < ((+(((/* implicit */int) var_9))))))) + (((/* implicit */int) ((signed char) ((_Bool) var_7))))));
}
