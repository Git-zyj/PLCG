/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14624
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1195350873)) ? (1977209241826974742LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_3] [i_0])) ? (arr_8 [i_3] [i_2] [i_1] [i_1] [1U]) : (arr_8 [14ULL] [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)139)))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (((((~(((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)0] [i_0])))) + (2147483647))) >> (((var_10) - (2653017066217284519LL))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [6ULL] &= (!(((/* implicit */_Bool) var_1)));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) ((min((((36020000925941760ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_5))))))) << (((((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12763))) : (1486911512948044844ULL))) - (12732ULL)))));
    var_15 = var_9;
}
