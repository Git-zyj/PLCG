/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135520
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) 7U)), (((((/* implicit */unsigned long long int) var_5)) + (var_3)))))) ? (((((/* implicit */_Bool) (-(var_4)))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3000385599836208290LL)))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)183)))))))));
    var_15 += ((/* implicit */unsigned long long int) var_6);
    var_16 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_2] [i_2]))))) : (((/* implicit */int) ((unsigned char) ((signed char) arr_5 [i_0] [11ULL]))))));
                    var_18 = ((/* implicit */signed char) ((arr_2 [i_0]) % ((~(((/* implicit */int) arr_0 [i_0]))))));
                    arr_8 [3U] [3U] [i_2] [2] &= ((/* implicit */int) (((-(((/* implicit */int) (short)6)))) < (arr_7 [i_0] [i_1] [i_0])));
                    arr_9 [i_0] = (((!(((/* implicit */_Bool) 4170837192U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_3 [i_0] [i_0]))), ((+(arr_2 [2U])))))) : (arr_4 [i_0]));
                    var_19 = ((/* implicit */unsigned short) ((((arr_4 [i_1]) != (((/* implicit */unsigned long long int) max((var_9), (124130104U)))))) ? (arr_3 [(short)4] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [(unsigned char)12] [i_2] [(unsigned char)20]))))));
                }
            } 
        } 
    } 
}
