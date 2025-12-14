/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188223
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
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (1762699521U)))) && (((/* implicit */_Bool) max((var_1), (var_4))))))) : (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0]))) : (arr_3 [i_0] [i_1])));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_3] = ((/* implicit */int) (-(((long long int) (unsigned char)140))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0] [i_0])))) ? (((/* implicit */int) (short)32741)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 2] [i_3]))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)))) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (arr_7 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0]))))));
        }
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_9))))));
        var_15 *= ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_15 [i_0] = ((/* implicit */signed char) var_8);
    }
}
