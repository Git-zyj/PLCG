/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150451
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = arr_3 [i_0] [i_1];
                var_12 += ((/* implicit */int) min((-8199205646271777334LL), (arr_0 [i_0 - 1] [i_0])));
                var_13 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) ^ (arr_2 [i_0 - 1]))));
            }
        } 
    } 
    var_14 |= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)183)), (arr_6 [i_3])))) ? (((2696295113626477767ULL) >> (((((/* implicit */int) var_4)) - (32027))))) : (arr_13 [i_2] [i_2] [i_4] [i_6]))), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_7 [i_4] [i_6])) >= (((/* implicit */int) var_7)))))))));
                                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)78)))))))), (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (6294546427642634224ULL))) : (((/* implicit */unsigned long long int) var_0))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (12152197646066917393ULL))) ^ (max((var_2), (12152197646066917371ULL)))))))));
            }
        } 
    } 
}
