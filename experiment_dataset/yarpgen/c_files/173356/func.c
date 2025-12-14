/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173356
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
    var_12 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_0)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-15391), (((/* implicit */short) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_7 [i_0] [i_0] [(short)2] [i_0] [i_0] [i_0]))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)-15391))) ? (min(((-(((/* implicit */int) (unsigned char)253)))), (((((/* implicit */_Bool) -4790968608615653154LL)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (short)7)))))) : (((/* implicit */int) min((((/* implicit */short) min((var_8), ((unsigned char)85)))), (((short) (unsigned char)4)))))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) min((((/* implicit */int) (short)-32757)), (min((((/* implicit */int) (short)15407)), (arr_5 [i_1] [i_0] [i_2])))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? ((-(arr_4 [i_0] [i_1] [i_1] [i_0]))) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) max((3640130451U), (1568157564U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) var_1)) + (15062470126525095421ULL)))))));
                    }
                    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)23)) && ((_Bool)0))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_7), (var_9)))), ((+(((/* implicit */int) var_7))))))) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 12367853682678961505ULL))))))))));
}
