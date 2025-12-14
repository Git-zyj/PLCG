/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175616
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
    var_10 *= ((/* implicit */unsigned int) var_1);
    var_11 = ((/* implicit */unsigned char) 1134225055U);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)2141)) >> (((((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (signed char)127)))) : ((~(((/* implicit */int) (short)19456)))))) + (135)))));
    var_13 = ((/* implicit */signed char) (short)-19285);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)64)) >= (((/* implicit */int) (short)-6303))));
        var_14 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) var_0)))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_15 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 4157882693U)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (short)6071)))))), (max((((/* implicit */unsigned long long int) (unsigned char)55)), (3676887839922527775ULL)))));
                        var_16 = ((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_3 + 2]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20128))) : (-4184518387782511171LL)))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 1344461135U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1] [i_1 + 4]))))));
                        var_18 -= ((/* implicit */int) ((long long int) ((long long int) ((signed char) arr_9 [i_1] [i_2]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((((/* implicit */int) (signed char)-51)) / (((/* implicit */int) (signed char)-9)));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((max((((/* implicit */unsigned int) (short)-25489)), (((((/* implicit */_Bool) (short)-24386)) ? (1262358088U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3502006447U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6667147747352647616ULL)))) ? (((/* implicit */int) ((_Bool) (unsigned short)14518))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
}
