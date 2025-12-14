/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169947
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7253)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (10519263U)));
                    var_14 |= ((/* implicit */unsigned long long int) ((signed char) 4284448032U));
                    arr_9 [3ULL] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) -1781459191369667515LL)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (short)-4))))), (((((/* implicit */_Bool) var_1)) ? (arr_7 [(signed char)11] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (max((((long long int) 10519270U)), (arr_4 [i_1 + 3] [i_1 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))));
                    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8394947971573110049ULL)) ? (((((/* implicit */_Bool) ((long long int) arr_8 [(short)10] [(short)10]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [0ULL] [i_1] [i_2] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [(signed char)10] [(signed char)22])) ? (4284448032U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)8234))) % (10519279U)))));
                    var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)65516)))) : ((((_Bool)1) ? (4284448028U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_9);
}
