/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156622
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
    var_16 = ((/* implicit */short) ((var_3) < (var_12)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_15)) & (((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1] [16U]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        arr_15 [i_3] [(signed char)12] [i_3] = ((/* implicit */_Bool) (unsigned char)31);
                        var_19 -= ((/* implicit */unsigned int) 1643997978966302390LL);
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_2)))) ? (4294967295U) : (((/* implicit */unsigned int) (~(max((var_6), (((/* implicit */int) (short)-20200)))))))));
                    }
                    arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)20199)) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) * (var_14))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
                    arr_17 [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
                }
            } 
        } 
        var_21 ^= (!(((/* implicit */_Bool) (unsigned short)16777)));
        var_22 = (_Bool)1;
    }
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_21 [(signed char)23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
        var_23 = ((/* implicit */int) ((max(((+(arr_1 [(unsigned short)15]))), (((/* implicit */long long int) var_12)))) >= (((/* implicit */long long int) max((3318108147U), (((/* implicit */unsigned int) (short)30202)))))));
    }
    var_24 = ((/* implicit */signed char) min((var_2), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (var_7))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6))))))))));
    var_25 &= ((min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_7)) ? (var_11) : (-2992979237525869627LL))))) >> (((/* implicit */int) (!((_Bool)1)))));
}
