/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109545
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
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)29))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(arr_3 [i_0] [i_2 - 1]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        arr_10 [(short)9] = var_1;
        arr_11 [i_0] [i_0] = (signed char)-13;
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            var_17 *= ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_3 + 4] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)29)) > (((((((/* implicit */int) (signed char)-37)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_3])) - (27595)))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48)))))))));
        }
        arr_16 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-29)))) % (((/* implicit */int) (signed char)127)))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(((/* implicit */int) min(((short)32767), (((/* implicit */short) (signed char)43)))))))) : (min((max((-5952392265884579014LL), (((/* implicit */long long int) var_4)))), (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
}
