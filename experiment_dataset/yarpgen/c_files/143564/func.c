/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143564
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)85)) ? (10932745) : (234199268)));
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((_Bool) max((var_0), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)53256))))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            {
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) > (((((/* implicit */int) (_Bool)1)) | (126976)))));
                var_22 = ((/* implicit */signed char) max((max((((/* implicit */unsigned short) (unsigned char)11)), ((unsigned short)65535))), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)243)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])), (arr_1 [i_1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max(((unsigned char)12), ((unsigned char)63)));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)18))))));
}
