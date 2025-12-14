/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111635
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
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10852)))))))) ? ((-(((/* implicit */int) (!(var_11)))))) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_7 [i_2] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_2]))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_0] [i_2] [i_0] [(short)7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [10U] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_20 = ((/* implicit */_Bool) arr_0 [i_0] [i_2]);
                    }
                    for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) 1271387542);
                        var_22 += 15432941666204108669ULL;
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_6 [i_1] [i_1]))));
                        var_24 = ((/* implicit */_Bool) 3013802407505442925ULL);
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15432941666204108702ULL)) ? (arr_11 [i_1] [i_2] [i_0]) : (arr_9 [i_5] [i_2] [i_1] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14887))) / (3013802407505442946ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */short) arr_4 [i_0] [i_1] [i_6]);
                            var_27 = ((/* implicit */unsigned int) var_5);
                        }
                    }
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [4ULL])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) || (((/* implicit */_Bool) 939635191)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3213802546U)) >= (arr_2 [i_1] [i_2]))))) : (arr_5 [i_0] [i_2]))))));
                    var_29 &= var_17;
                }
            } 
        } 
    } 
}
