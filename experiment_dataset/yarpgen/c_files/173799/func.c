/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173799
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
    var_13 = ((/* implicit */unsigned short) ((var_12) & (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) (unsigned short)59812)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (-16LL)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32760))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (((((/* implicit */_Bool) 890343291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57942))) : (4294967295U)))))) ? (min((((-340712023881024823LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22))))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) (unsigned short)5206))), (arr_2 [i_0] [i_0])))) ? (3178636878788948701LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                var_16 = (short)-1;
                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */int) (short)-32750)) & (((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0])))));
                var_18 ^= min((-340712023881024837LL), (((/* implicit */long long int) (unsigned short)65527)));
            }
        } 
    } 
    var_19 = ((long long int) ((((340712023881024814LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) : ((((_Bool)1) ? (-3178636878788948680LL) : (-5969615716030098865LL)))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) (+(((max((((/* implicit */long long int) var_5)), (var_7))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)32768)))))))));
                                arr_19 [i_2] [i_3] [15LL] [i_5] [0ULL] = ((/* implicit */signed char) (short)32767);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_24 [i_2] [i_2] [i_3] [(unsigned short)22] [(unsigned short)22] = -8395615152326617713LL;
                        /* LoopSeq 2 */
                        for (short i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            arr_27 [i_2] [i_2] [i_8] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((var_7) / (arr_15 [i_8] [i_7]))))) ? ((+(((/* implicit */int) arr_18 [i_8] [i_8 + 1] [i_8 - 1] [(short)13] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_8 + 1] [i_3])))))));
                            var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_21 [i_7] [i_3] [i_4] [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [i_7] [i_7] [i_4 + 2] [i_4 + 3]))) : (((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2] [i_3] [i_4] [i_7] [i_8])) ? (-3403441557982255476LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(18446744073709551612ULL))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_30 [i_9] [i_9] [i_4 + 2] [10] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_7] [i_9]))));
                            var_23 = ((/* implicit */long long int) (+(3756591654U)));
                            var_24 = ((/* implicit */long long int) ((16389088779568437625ULL) + (((/* implicit */unsigned long long int) arr_28 [i_9] [i_4 + 2] [i_4] [i_4 + 2] [i_9] [i_7] [i_4 + 2]))));
                        }
                        arr_31 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_5))))));
                    }
                    for (signed char i_10 = 2; i_10 < 21; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min(((+((~(((/* implicit */int) var_6)))))), (((/* implicit */int) (unsigned short)65534))));
                        var_26 = ((short) var_8);
                    }
                    arr_36 [i_2] [i_3] [i_2] = ((/* implicit */short) max(((+(-3178636878788948718LL))), (min((-6617759540114198360LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_20 [(short)3] [i_3] [i_4 + 2] [i_3])), ((unsigned short)32767))))))));
                }
            } 
        } 
    } 
}
