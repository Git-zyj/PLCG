/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172326
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
    var_18 *= ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] = var_6;
                    arr_9 [i_0] = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 14665007343154963628ULL)) ? (((/* implicit */int) (unsigned short)34309)) : (((/* implicit */int) (unsigned short)40790)))) ^ (((/* implicit */int) ((unsigned char) (unsigned char)82)))))) ? ((-((-(((/* implicit */int) (unsigned short)40769)))))) : (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned short)40766)) - (40755)))))));
        arr_11 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? ((-(((/* implicit */int) (unsigned short)24734)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)40769))))))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) (unsigned short)50021)));
    }
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) var_17);
        var_20 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) var_9)) : (var_12))));
    }
}
