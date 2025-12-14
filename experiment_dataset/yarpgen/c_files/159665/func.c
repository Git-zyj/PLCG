/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159665
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (short)-23);
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (var_14))))) & (((/* implicit */long long int) ((((/* implicit */int) (short)-23)) | (-1))))));
                    }
                    arr_12 [i_0] &= ((/* implicit */unsigned char) (short)-2);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) 4294967295U));
                    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) == (((((/* implicit */_Bool) (short)1923)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)1920)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1049368094)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-26)))))) ? (((((/* implicit */_Bool) 1049368087)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22))) : (10087244450119576261ULL))) : (((/* implicit */unsigned long long int) var_14)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(var_12)))))) > (((long long int) ((var_1) / (((/* implicit */int) (short)25)))))));
}
