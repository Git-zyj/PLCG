/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143964
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 867878544)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -867878542)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) (signed char)-20)) ? (9223372036854775807LL) : (((/* implicit */long long int) 867878544))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 521224587988994415LL)) ? (-867878544) : (((/* implicit */int) (signed char)-20))));
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 521224587988994414LL)) ? (((/* implicit */long long int) 1073676288)) : (-2823150172033333780LL)));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned short)8061)) : (867878550)));
        var_19 = ((/* implicit */short) (unsigned short)54360);
        var_20 = ((/* implicit */signed char) 12737907326872960407ULL);
    }
    var_21 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (int i_4 = 3; i_4 < 9; i_4 += 3) 
    {
        arr_16 [i_4] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12288)) ? (3034940392153863703LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (unsigned short)28000))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (((((/* implicit */_Bool) (short)-21170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7681954754510125987ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)26)))))));
        var_22 = ((/* implicit */signed char) (_Bool)1);
    }
    var_23 = ((/* implicit */int) (_Bool)1);
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12717078434352436296ULL)) ? (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (247375426007627LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 618650500)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 71987225293750272LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30))))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-53))))))));
}
