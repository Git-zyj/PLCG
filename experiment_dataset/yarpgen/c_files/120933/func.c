/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120933
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                        arr_10 [(_Bool)1] [i_1] [i_1] [i_1] [i_2] [i_3] |= ((/* implicit */_Bool) min(((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_3 - 1])))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 + 1]), (((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_2])))))));
                    }
                    arr_11 [i_0] = ((/* implicit */int) (~((~(max((arr_9 [i_2] [i_1] [(unsigned short)0] [(unsigned short)11] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_6))))))));
                    var_15 ^= ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3])))) ? ((-(((/* implicit */int) var_3)))) : (max((((/* implicit */int) (unsigned char)46)), (var_12))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 460757542)))) || (((/* implicit */_Bool) min(((unsigned char)0), (var_9)))))))) % (max((var_4), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) (_Bool)1)))))))));
}
