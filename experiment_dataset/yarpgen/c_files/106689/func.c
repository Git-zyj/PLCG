/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106689
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
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((arr_2 [i_0]) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)11628)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - (11599)))));
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : ((+(-8953387371755190277LL)))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (short)-11639))) == ((+(((/* implicit */int) (short)11628))))));
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) arr_4 [i_3 - 2]);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((4294967284U), (((/* implicit */unsigned int) arr_6 [i_3 - 2]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34679)))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_11 [i_1]))))) ? (((((/* implicit */_Bool) arr_11 [i_2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) == (max((((arr_8 [i_1] [13ULL]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)11638))))), (((/* implicit */long long int) arr_8 [i_3 - 3] [i_3 - 2]))))));
                    var_19 = ((/* implicit */_Bool) min((min((((/* implicit */short) arr_8 [i_3 - 4] [i_3])), (var_3))), (max(((short)-11632), (((/* implicit */short) (_Bool)1))))));
                }
            } 
        } 
    } 
}
