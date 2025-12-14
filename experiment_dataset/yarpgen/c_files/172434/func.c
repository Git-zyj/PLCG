/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172434
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
    var_15 = ((/* implicit */long long int) (+(var_2)));
    var_16 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)151))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) (~(var_7)));
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (var_13)))));
        var_19 = ((/* implicit */short) 376085563);
        var_20 = ((/* implicit */unsigned long long int) 827114832);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-7004129993923804746LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)60)) : (181702750)))) : (((((/* implicit */_Bool) (signed char)125)) ? (1161294160U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22565)))))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) 9LL)) ? ((-(-888839879))) : (((/* implicit */int) (unsigned short)65535))))));
                        var_23 *= ((/* implicit */unsigned short) var_1);
                        arr_13 [i_1] = ((/* implicit */unsigned int) -33554432);
                        arr_14 [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (_Bool)1)) : (2097152)))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3497003373U))));
    }
    var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4503599610593280ULL)) ? (2144301443U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))))) : ((+(-5558335228777786765LL)))))));
}
