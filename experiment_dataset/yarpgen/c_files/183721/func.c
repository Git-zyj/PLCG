/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183721
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1LL)))) ? (max((((/* implicit */unsigned int) var_3)), (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)))));
    var_20 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_8 [i_1 - 4] [i_3 + 1]))));
                        var_22 |= ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_0]));
            var_23 -= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) (short)(-32767 - 1))));
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) -13LL))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
    }
    for (short i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 + 1])) ? (arr_17 [(unsigned char)9] [i_5 - 1]) : (arr_17 [i_5] [i_5 - 2]))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_14 [i_5])))))))));
        var_26 = ((/* implicit */short) ((1LL) + (((/* implicit */long long int) 1533213719U))));
    }
    for (short i_6 = 3; i_6 < 19; i_6 += 2) 
    {
        arr_21 [i_6] [(short)4] = ((unsigned long long int) (~(max((((/* implicit */unsigned int) var_17)), (arr_19 [i_6])))));
        arr_22 [i_6 + 1] |= ((/* implicit */unsigned int) var_0);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_27 = ((unsigned char) -15LL);
        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9]))) != (((unsigned long long int) arr_1 [(unsigned short)6]))))), ((-(arr_2 [i_7])))));
        arr_26 [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_7 [(unsigned char)2] [i_7] [i_7] [(unsigned short)14])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [12ULL])))) - (((/* implicit */int) arr_12 [i_7] [i_7])))) == (((/* implicit */int) (unsigned char)5))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) var_12);
        arr_32 [i_8] [i_8] = ((/* implicit */long long int) ((short) 12510918668087368523ULL));
    }
}
