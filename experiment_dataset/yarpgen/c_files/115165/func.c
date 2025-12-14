/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115165
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
    var_12 = ((/* implicit */long long int) 10U);
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)14)) & (((/* implicit */int) ((9223372036854775802LL) > (((/* implicit */long long int) 4294967295U)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_0)) ? ((~(var_11))) : ((~(var_11)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */unsigned int) ((int) ((((((/* implicit */int) arr_8 [i_0])) > (var_2))) ? (((/* implicit */int) ((unsigned short) (unsigned char)52))) : (max((30720), (30719))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)140)), (arr_6 [i_0] [(short)6] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))) : ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(-30704)))), ((~((~(9U))))))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967276U))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_21 [i_4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) max((var_7), (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_5]))) : (2980361916U))) | (((19U) | (((/* implicit */unsigned int) var_6))))))));
                    var_19 = ((/* implicit */unsigned long long int) arr_18 [i_4] [i_4 + 1] [i_4]);
                    var_20 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))))) % (var_2)))), (((((/* implicit */_Bool) -30717)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))) : (6754098118794179534ULL)))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_19 [i_3]))));
    }
}
