/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145397
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
    var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) 1902528921710469253LL))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_21 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 9LL)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned short)65519)))), ((-(((/* implicit */int) (unsigned short)19))))));
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (short)9916))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -7777708911150375279LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (var_19))))) % (((/* implicit */int) ((((_Bool) (short)25472)) && (((/* implicit */_Bool) ((3720248022U) % (((/* implicit */unsigned int) var_18))))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [20ULL] [i_2] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)211)) < (((/* implicit */int) (short)-25472)))))) : (((-1345018289525816364LL) / (7777708911150375275LL)))))) ? (max((-41118482681930884LL), (((/* implicit */long long int) (unsigned short)65496)))) : (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)6)) / (((/* implicit */int) (_Bool)1)))))))));
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65496))));
                        var_24 = ((/* implicit */signed char) (short)30234);
                    }
                } 
            } 
        } 
    }
}
