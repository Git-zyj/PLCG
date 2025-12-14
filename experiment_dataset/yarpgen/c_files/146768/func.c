/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146768
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(_Bool)1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (2000795360U) : (((/* implicit */unsigned int) -891505080))))) ? ((+(2294171936U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8192)))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_9 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-5360)) : (((/* implicit */int) (_Bool)1)))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-((-(2000795367U))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7320))))) ? (((((/* implicit */_Bool) (-(145105674U)))) ? (((((/* implicit */_Bool) -175948149348942643LL)) ? (4065170798U) : (2294171926U))) : (((/* implicit */unsigned int) 2127418893)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 891505093)))))))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (_Bool)1))));
                        var_17 ^= (~((~(-2127418905))));
                    }
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) 175948149348942643LL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8191U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 891505103)) ? (846698295) : (-256547550)))) : (((((/* implicit */_Bool) (unsigned short)20)) ? (11436923440164535101ULL) : (((/* implicit */unsigned long long int) -256547550))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 891505076)))) ? ((-(-224287927))) : (((/* implicit */int) ((signed char) -9223372036854775791LL)))))) : ((-(((((/* implicit */_Bool) (signed char)116)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) 8191U))))))))));
                        arr_17 [i_1] [i_0 - 1] [i_0] [i_1 + 1] [i_2] [i_5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)-6362)) ? ((-(((/* implicit */int) (signed char)121)))) : (((((/* implicit */_Bool) 224287932)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned short)43944)))))));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 224287932)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3069))) : (5137807240401838682LL)))) : (((((/* implicit */_Bool) 2000795366U)) ? (((/* implicit */unsigned long long int) 3221327122U)) : (3283541850964179181ULL)))))) ? (((((/* implicit */_Bool) 9223372036854775790LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)46))))) : (max((6357956417981929871LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) (~(202929801)))))))));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-6356)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775785LL)));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_12);
    var_22 = ((/* implicit */unsigned short) ((_Bool) 2000795383U));
}
