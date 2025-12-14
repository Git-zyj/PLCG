/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156907
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
    var_16 = ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((unsigned char) ((long long int) (~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_3] [i_2] [(short)4] [i_0] = ((unsigned short) (~(arr_5 [i_0])));
                            arr_14 [i_0] [i_1 + 1] [i_1 + 2] [i_0] [i_3] [i_4 - 3] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))));
                            var_18 = ((/* implicit */int) (-((-(var_9)))));
                            var_19 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) var_11)))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
                            var_21 = ((/* implicit */unsigned char) ((_Bool) ((short) var_1)));
                            arr_17 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (~((-(((/* implicit */int) var_2))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))));
                            arr_22 [i_0] [i_1 + 1] [11LL] [i_3] [i_0] = ((/* implicit */unsigned short) (-((+(arr_10 [i_6] [(unsigned short)4] [i_0] [i_3] [i_3])))));
                        }
                        var_23 *= ((/* implicit */unsigned short) (+(((long long int) var_3))));
                        arr_23 [2U] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_5)))));
                        var_24 *= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)27456))))));
                    }
                }
            } 
        } 
    } 
}
