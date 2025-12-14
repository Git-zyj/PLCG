/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15888
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-59)) - (((/* implicit */int) (short)-31367))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((signed char) 1ULL)))))) : (max((((unsigned long long int) (unsigned short)4467)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4473))) : (var_8))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_14 |= ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]));
        var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)61074)) > (((/* implicit */int) (short)-31384))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((506667800), (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) -438808466);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 1084376578U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)70)))));
                            var_19 ^= ((signed char) (signed char)68);
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_5] [i_4]))));
                            var_21 *= ((/* implicit */short) ((signed char) (unsigned short)23554));
                        }
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) var_10);
}
