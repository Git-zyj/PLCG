/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139909
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_17 |= ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (unsigned short)5372))))));
                        arr_8 [(short)7] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)9)))))));
                    }
                    arr_9 [4U] [i_2] [(unsigned char)5] [4U] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)45)))))));
                    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (arr_3 [i_1] [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_15)) ? (-1128447868) : (((/* implicit */int) (unsigned short)57112)))))) ? (((/* implicit */int) ((short) ((unsigned long long int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1] [i_0]))))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)57112)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((int) ((var_10) % (((/* implicit */int) (unsigned char)17))))) & ((~(((((/* implicit */int) var_11)) ^ (-1133702103)))))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned short) (((~(((/* implicit */int) var_16)))) >> (((((int) (unsigned char)247)) - (241)))))))));
}
