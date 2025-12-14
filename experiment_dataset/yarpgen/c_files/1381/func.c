/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1381
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
    var_19 |= ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_20 ^= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (5613269188406439409LL)))) || (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])))))) > (((long long int) (unsigned char)243)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0 + 1] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4431))))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_16 [i_0 - 1] [i_4] [i_0 - 1] [i_3] [(unsigned short)1] = ((/* implicit */int) ((var_7) ? (1816626987U) : (((/* implicit */unsigned int) var_16))));
                            var_21 = ((/* implicit */unsigned short) ((signed char) ((((-5613269188406439409LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)253)) - (215))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) 2629408465873059360LL)) : (arr_7 [i_0 + 1])));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_20 [i_0] [(short)10] = ((/* implicit */int) (-(((((/* implicit */_Bool) 4294967285U)) ? (min((arr_17 [i_5]), (((/* implicit */unsigned long long int) (unsigned char)3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
            var_23 = (~(((/* implicit */int) (short)-17297)));
            var_24 = ((/* implicit */unsigned int) -2629408465873059361LL);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1))))) ? (11U) : (arr_2 [i_0 + 2]));
            arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 + 2] [i_0 - 1])) ? (((((/* implicit */_Bool) (unsigned short)51517)) ? (((/* implicit */long long int) -307388701)) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_26 = ((/* implicit */long long int) arr_21 [i_0 + 1] [i_0 + 1] [i_6]);
        }
        var_27 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(var_2)))), (((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - (((/* implicit */unsigned int) arr_10 [i_0 - 1]))))));
        var_28 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) ((unsigned short) 4194176U))))));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3108422783U))), (((((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (480462041)))) / ((-(var_8))))))))));
    }
}
