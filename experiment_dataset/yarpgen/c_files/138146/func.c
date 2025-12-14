/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138146
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
    var_18 = ((/* implicit */short) -4153545855528280906LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1831511077)) ? (((((/* implicit */_Bool) var_6)) ? (-1831511053) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)92)))))))) ? (max((min((-1831511053), (((/* implicit */int) var_14)))), (((/* implicit */int) max(((_Bool)1), (var_2)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_1]))))));
                var_19 = ((/* implicit */long long int) max((var_19), (arr_2 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2]))))), (max((-6952589897183325088LL), (((/* implicit */long long int) 131071)))))), (((/* implicit */long long int) min((-1831511053), (((/* implicit */int) arr_7 [i_3] [i_3 + 1])))))));
                var_21 = ((/* implicit */unsigned char) ((((int) arr_7 [i_3] [i_3 + 1])) - (((/* implicit */int) max((arr_7 [i_3] [i_3 + 2]), (arr_7 [i_2] [i_3 + 1]))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_6 [i_2]))))) >> (((((/* implicit */int) max((arr_7 [i_3 + 1] [i_3 + 1]), (arr_9 [i_2])))) + (104)))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_23 [i_5] [(signed char)20] [(signed char)20] [(signed char)20] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 19U)) ? (((((/* implicit */_Bool) var_14)) ? (min((1831511050), (-1831511053))) : (((((/* implicit */_Bool) 2213003863819667828LL)) ? (1024979903) : (((/* implicit */int) (unsigned char)133)))))) : (((/* implicit */int) var_4))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(var_7))), (((int) (unsigned short)65162))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1831511037)) ? (((/* implicit */int) arr_18 [i_4] [i_5 + 2] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_5 + 2]))))) : ((-(((arr_15 [i_4] [i_4]) ? (2213003863819667828LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                                var_24 = ((/* implicit */_Bool) ((((long long int) ((unsigned char) arr_20 [i_5]))) << (((((/* implicit */int) arr_21 [i_2])) - (90)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
