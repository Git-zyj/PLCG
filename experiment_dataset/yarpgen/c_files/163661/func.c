/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163661
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_17 = ((/* implicit */unsigned short) (+(arr_1 [i_0])));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * ((-9223372036854775807LL - 1LL))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_14))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) var_7))), (var_10)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)3))));
        var_21 = ((/* implicit */unsigned short) (((_Bool)0) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) (signed char)124)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((933466631) << (((arr_6 [5LL] [i_2]) - (886846283U))))))))));
            var_23 = ((/* implicit */_Bool) arr_9 [i_1] [i_2 + 1] [8LL]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -561525086)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_3] [i_3])) == (((/* implicit */int) (short)-5317))))) : ((((_Bool)0) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (_Bool)1))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1]))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_26 = ((/* implicit */short) ((((((/* implicit */int) arr_15 [i_4] [i_4])) * (((/* implicit */int) (short)0)))) * (((/* implicit */int) ((arr_14 [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2547531288144926543LL)) ? (((var_13) - (max((-953297816), (((/* implicit */int) (short)-22028)))))) : (((/* implicit */int) ((unsigned short) ((var_8) + (((/* implicit */int) (_Bool)1))))))));
        var_28 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4679)) + (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (signed char)-98))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8213))) - (arr_1 [i_4])))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_1 [i_4]) : (((/* implicit */unsigned long long int) -417052754)))) + (((/* implicit */unsigned long long int) (+(arr_14 [i_4])))))))));
    }
    var_30 = ((/* implicit */short) (~((~((~(1126306961)))))));
    var_31 ^= ((/* implicit */long long int) (unsigned char)47);
}
