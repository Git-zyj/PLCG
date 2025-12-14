/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131982
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
    var_12 = (((!((_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) (unsigned char)7)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)99)) ? (-6157025122991218993LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))))))) : (((long long int) ((signed char) (_Bool)1))));
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(arr_0 [i_0]))))));
                            arr_11 [i_3] [i_1 - 4] [i_1 - 4] [i_0] = ((/* implicit */unsigned short) (unsigned char)252);
                        }
                    } 
                } 
                var_15 = (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [8ULL])))))) <= (((((/* implicit */_Bool) -449658328)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) : (-1749241759164577897LL)))))));
            }
        } 
    } 
}
