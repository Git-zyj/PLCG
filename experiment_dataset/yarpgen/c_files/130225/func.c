/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130225
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
    var_18 ^= ((/* implicit */unsigned char) (-(min((5637456776806370470LL), (((/* implicit */long long int) (unsigned char)48))))));
    var_19 = ((/* implicit */short) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = (unsigned char)255;
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) (signed char)103);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((-5637456776806370464LL) != (var_3)))) - (((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned char)226))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (min((((/* implicit */unsigned long long int) -595438474)), (var_2)))))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)216)) || (((/* implicit */_Bool) var_11)))))));
                        arr_11 [i_2] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = (unsigned char)39;
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (6748491764933504977LL) : (-5637456776806370470LL)))));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-5653715547657775254LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 745261546465671830LL)) && (((/* implicit */_Bool) -674107089318667299LL))))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (-5637456776806370495LL) : (var_17))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (-1343411226)))))))));
        var_23 = max((((/* implicit */long long int) var_14)), (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)48)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) << (((((((/* implicit */int) (signed char)-103)) + (130))) - (6)))))) : (min((((/* implicit */long long int) -1978046191)), (var_17))))));
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */int) ((((-745261546465671859LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-32)) + (90))) - (58)))));
        var_24 += ((((/* implicit */_Bool) -8799658289573675108LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (min((-1986037223), (((/* implicit */int) (unsigned char)208))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) | (var_11))));
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) 1986037204)), (((((/* implicit */_Bool) ((2147483647) << (((((-1LL) + (19LL))) - (18LL)))))) ? ((+(-4833495962037509423LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    }
}
