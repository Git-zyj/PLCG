/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129917
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
    var_19 = ((/* implicit */unsigned int) (short)7682);
    var_20 *= ((/* implicit */signed char) (+(((/* implicit */int) (short)-15688))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((int) (unsigned char)13))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43551)) <= (((/* implicit */int) (unsigned char)34))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_3 [(unsigned char)5] [(unsigned char)5]);
        arr_7 [(unsigned short)5] [7ULL] = ((/* implicit */_Bool) -1559954173);
        arr_8 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)141))));
        arr_9 [i_1] = ((/* implicit */unsigned int) (-(arr_4 [i_1])));
    }
    for (short i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)143))));
        arr_13 [i_2] = ((/* implicit */unsigned char) (signed char)17);
    }
    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) 4294967270U)) || (((/* implicit */_Bool) (unsigned short)22458)))) && (((/* implicit */_Bool) (signed char)0))));
    var_24 = ((/* implicit */short) ((_Bool) var_9));
}
