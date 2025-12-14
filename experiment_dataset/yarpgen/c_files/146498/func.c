/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146498
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
    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -626740393)) ? (((/* implicit */int) (short)29335)) : (((/* implicit */int) (signed char)-57))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)2))))) : (var_17)))));
    var_19 = ((/* implicit */short) max((var_19), (((short) max((var_6), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32753)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (39252)))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) (+(arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))))))));
        var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (short)-32754)), ((+(arr_0 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) (short)32753);
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-32730), (((/* implicit */short) (_Bool)1)))))) : ((-(18446744073709551610ULL))))))));
            arr_9 [i_1] [i_1] [i_2] |= ((/* implicit */short) (unsigned char)140);
        }
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)0)), ((short)32743)));
        var_26 = ((/* implicit */unsigned char) min((arr_0 [i_1] [i_1]), (((/* implicit */int) arr_7 [i_1] [i_1]))));
    }
    var_27 = ((/* implicit */unsigned short) 626740376);
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((/* implicit */_Bool) 759890318586408910ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))))) : (((((/* implicit */_Bool) (unsigned short)34008)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (12446879289856660720ULL)))))));
}
