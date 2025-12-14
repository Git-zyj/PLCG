/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162229
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
    var_16 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)160));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_17 *= ((/* implicit */short) (_Bool)1);
            var_18 &= ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) 805306368U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))));
            arr_6 [i_0 - 1] &= ((/* implicit */unsigned int) ((_Bool) 3596904098U));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                var_19 += ((/* implicit */unsigned short) var_2);
                /* LoopSeq 1 */
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                        var_21 += ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((unsigned int) 987333031U))))));
                        arr_15 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] [(unsigned short)14] [i_0 + 2] = ((/* implicit */unsigned int) (unsigned short)40690);
                        var_22 = ((/* implicit */_Bool) max((var_22), ((_Bool)1)));
                        arr_16 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) (_Bool)1))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40700)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)))) ? (1U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)19)) & (((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_19 [i_2] [i_1] [i_2] [i_0 - 2] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                        var_23 += ((/* implicit */long long int) (+(var_3)));
                    }
                }
                arr_20 [(unsigned short)13] [(short)10] [(unsigned short)22] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19194)) > (((/* implicit */int) (unsigned short)24859))));
                var_24 *= 1333845958U;
            }
            var_25 = ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */unsigned int) (unsigned short)29242)))) << (((/* implicit */int) (unsigned short)31))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)750)) ? (min((2654061269U), (((/* implicit */unsigned int) (unsigned char)19)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58217)))))) : (max((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (31) : (((/* implicit */int) var_2))))))));
        }
        var_26 = ((/* implicit */unsigned int) ((signed char) max((260046848U), (((/* implicit */unsigned int) var_12)))));
    }
    var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)511))))), (var_8)));
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((var_12), (((/* implicit */int) (unsigned short)19193)))))));
}
