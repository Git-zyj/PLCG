/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184065
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
    var_10 &= ((/* implicit */_Bool) (unsigned short)14336);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) (unsigned short)51384);
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((arr_2 [i_0 + 2] [(_Bool)1]) ? (var_8) : (((/* implicit */unsigned long long int) var_7))))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(4294967295U))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (short)-8914))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
                        arr_14 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) arr_10 [i_0]);
                        var_14 -= ((/* implicit */unsigned int) min(((unsigned char)254), ((unsigned char)24)));
                        var_15 ^= ((/* implicit */long long int) arr_8 [i_0 - 1] [(unsigned short)2] [i_3]);
                        var_16 = ((/* implicit */short) max(((-(0ULL))), (((/* implicit */unsigned long long int) 2037862509U))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) (unsigned short)51205);
    var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (((unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))))));
}
