/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144412
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
    var_20 = ((/* implicit */int) -4210224397100989980LL);
    var_21 ^= ((/* implicit */unsigned char) (((+(503316480U))) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) var_19);
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = (unsigned short)17382;
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)1023))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 7; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_11)), (var_13))))));
            var_24 *= ((/* implicit */unsigned char) var_1);
            arr_11 [i_2] = ((/* implicit */unsigned int) (unsigned short)37732);
        }
    }
    var_25 = ((/* implicit */signed char) (unsigned char)145);
}
