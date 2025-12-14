/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177659
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((3000369611756340416ULL) >= (((/* implicit */unsigned long long int) var_14)))))))));
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_18))), (((15446374461953211213ULL) + (var_17))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_21 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (3000369611756340416ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_8 [i_3] [i_2])) : (((/* implicit */int) var_18))))) : ((-(15446374461953211213ULL)))))));
                        arr_10 [i_0] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3000369611756340427ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_4 [i_0] [i_1] [i_0])))))) ? (var_17) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) == (var_11))))) : (arr_5 [i_0] [i_1] [i_3 + 1])))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) arr_11 [i_4 + 1] [(signed char)8])) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58633)))))));
        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 1]))) <= (var_17)));
        var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_26 &= ((/* implicit */unsigned char) arr_11 [i_4 + 1] [6]);
        var_27 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) -7531850641557194242LL)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (unsigned short)0)))) / (((/* implicit */int) (unsigned short)51227))));
    }
}
