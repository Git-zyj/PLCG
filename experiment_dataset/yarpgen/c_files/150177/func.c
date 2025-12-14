/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150177
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
    var_17 = ((/* implicit */unsigned int) (+(min(((-(var_6))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (var_15) : (arr_1 [(signed char)2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))) ? (max(((~(arr_0 [i_0]))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-((-(12002747199456869134ULL)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            {
                var_18 = (-(((arr_9 [i_1]) + (((/* implicit */unsigned long long int) arr_1 [i_2])))));
                arr_10 [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_2]))))) ? (var_7) : (((((/* implicit */_Bool) (short)-7023)) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))))) ? (((/* implicit */unsigned long long int) min((((-3789936199408749622LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))), ((~(3789936199408749646LL)))))) : (((((/* implicit */unsigned long long int) (~(13U)))) & (max((arr_9 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]))))))));
                var_20 = ((/* implicit */unsigned int) (-(3789936199408749614LL)));
                var_21 *= ((/* implicit */short) ((max(((+(3789936199408749639LL))), (((/* implicit */long long int) 268435328)))) ^ (((/* implicit */long long int) (~((-(((/* implicit */int) arr_7 [i_2])))))))));
            }
        } 
    } 
}
