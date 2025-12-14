/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167729
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) var_5);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2147483647)))) ? ((-(((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)3))))));
        var_19 = (signed char)-94;
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) == (((((/* implicit */int) ((((/* implicit */int) (short)-4960)) <= (((/* implicit */int) arr_0 [i_0]))))) / (((/* implicit */int) var_15))))));
        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_1 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_7))))) : ((~(arr_1 [i_1])))))) + (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (15104094975071554410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_4 [i_1]))))) == (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                {
                    var_24 *= ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (-9223372036854775800LL))) != (arr_1 [i_3 - 1]))))));
                    arr_12 [i_1] [i_2] [i_3] [i_3] = var_13;
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1]);
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        var_25 = (((~(((/* implicit */int) (unsigned short)46402)))) * (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_4]))) < (((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [i_4])) < (((/* implicit */int) (unsigned char)23)))))))));
        var_26 = ((/* implicit */long long int) ((((min((((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)22888)))), (((/* implicit */int) ((3342649098637997206ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27990)))))))) + (2147483647))) << (((min((arr_15 [i_4]), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-23)) < (((/* implicit */int) (unsigned char)6))))))) - (1U)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) (((_Bool)1) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28))) != (18446744073709551615ULL)))));
        var_28 = ((/* implicit */short) (_Bool)0);
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)115)) && (((/* implicit */_Bool) 8784189023789478156ULL))));
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) : (var_6))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)49)) || (((/* implicit */_Bool) arr_11 [i_5] [i_5])))))));
    }
    var_30 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) != ((((_Bool)1) ? (8416520918878447409ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
