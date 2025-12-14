/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156657
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
    var_15 = (~(((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11))))) >> (((((((/* implicit */int) var_12)) - (((/* implicit */int) var_6)))) + (42))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_8)))))) * (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_7))) >> (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_1]))) : (((/* implicit */int) ((unsigned short) arr_4 [i_1])))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))))));
                arr_5 [i_0] = ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_10 [i_3] [i_3] [i_3] [i_3] [(unsigned char)12] [(unsigned char)12]), (((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 117440512)))))) : (max((var_3), (((/* implicit */long long int) (signed char)-14)))))) | (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (1652004828U))))))));
                            arr_14 [i_3] = ((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_2] [i_3]);
                            arr_15 [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3]))))) >= (((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_3] [i_3] [13LL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (7888378963495703186ULL)))))), ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
