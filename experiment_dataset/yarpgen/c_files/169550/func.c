/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169550
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_12 [(short)0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)120)) > (((/* implicit */int) (unsigned char)231))));
                        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) : (var_9))))));
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 4] [i_1] [i_1 + 2] [i_3])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_0))));
                        var_13 *= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) >= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */int) arr_10 [i_1 - 2] [i_2 - 4] [i_2 - 4])) ^ (((/* implicit */int) arr_4 [(unsigned short)19] [i_2] [i_0])))) : (((/* implicit */int) ((_Bool) 4156496252U))))))));
                    }
                    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-14949))))) && (((_Bool) ((signed char) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((_Bool) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)13896)))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)36566))))))))));
}
