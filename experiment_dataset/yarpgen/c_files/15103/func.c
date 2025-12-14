/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15103
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
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
    var_16 = ((/* implicit */unsigned char) min((min((max((((/* implicit */long long int) var_6)), (var_9))), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(3431047375U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((4253081956U), (((/* implicit */unsigned int) (unsigned short)17271)))))))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) ((unsigned long long int) var_3))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned int) max((((4253081940U) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */int) arr_0 [i_0]))))) ? (2359010845018461544ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_14))) % ((~(((/* implicit */int) arr_1 [i_0]))))))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)248), (((/* implicit */unsigned char) arr_0 [i_0]))))) ? ((-(((/* implicit */int) (unsigned char)203)))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (min((var_12), (((/* implicit */long long int) var_13))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) var_4))))))) ? (4253081936U) : (max((((/* implicit */unsigned int) arr_7 [i_2 - 2] [i_1] [i_2 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (4253081955U)))))));
                    var_21 = ((/* implicit */unsigned long long int) min((((signed char) ((((/* implicit */_Bool) var_10)) ? (var_6) : (var_6)))), (((/* implicit */signed char) ((_Bool) arr_5 [i_0] [i_0])))));
                }
            } 
        } 
    }
}
