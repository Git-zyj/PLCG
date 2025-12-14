/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163939
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
    var_18 = ((/* implicit */short) (~((~(((/* implicit */int) max((var_9), (var_5))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 += ((/* implicit */unsigned int) ((unsigned char) (short)32764));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_7 [4ULL] [i_2 + 2])))))), ((~(((var_12) * (var_6)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        var_20 -= ((/* implicit */_Bool) max(((+((-(arr_1 [i_2 + 2]))))), (((/* implicit */unsigned long long int) var_1))));
                        var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) (-(var_3)))));
                        var_22 = (~(max((max((var_13), (((/* implicit */unsigned int) arr_8 [i_3] [i_2] [(_Bool)1] [(short)23])))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765)))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_7 [(unsigned char)17] [(_Bool)1])))))) << (((var_6) - (1143277409U)))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */short) var_2);
        var_25 += ((/* implicit */unsigned int) (unsigned char)255);
    }
    var_26 = ((/* implicit */_Bool) var_5);
}
