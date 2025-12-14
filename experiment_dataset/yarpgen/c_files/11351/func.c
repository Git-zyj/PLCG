/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11351
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
    var_20 = ((/* implicit */long long int) min(((~(max((((/* implicit */int) var_0)), (var_17))))), (((/* implicit */int) min((((((/* implicit */_Bool) (short)10146)) && (((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) -4229545075973110014LL)) || (((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [15ULL]))) + (arr_2 [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 -= ((/* implicit */signed char) ((short) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)24))))), (max((4294967295U), (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))))));
                    var_22 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) (short)8122)) < (((/* implicit */int) var_14)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) & (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34716)) << (((((/* implicit */int) (short)-8123)) + (8128)))))), (max((4229545075973110014LL), (((/* implicit */long long int) var_2))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */short) 510939344U);
                    var_24 -= ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_3 [i_3 + 2] [i_3 + 1])))), ((+(((/* implicit */int) (short)-13243))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)8122)) : (((/* implicit */int) var_11)))))))) == (max((max((var_18), (((/* implicit */unsigned int) (short)-13243)))), (((var_16) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) ((signed char) var_19))) > ((-(((/* implicit */int) var_11))))))))))));
}
