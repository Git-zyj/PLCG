/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140922
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 430397036U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : ((+(arr_4 [i_0] [i_0] [(signed char)15])))))) ? (var_1) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) (~(-835003477470342609LL)))) : (arr_4 [i_0] [i_0] [i_0])))));
                var_10 = ((/* implicit */unsigned long long int) arr_3 [13LL] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 7; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                {
                    arr_16 [i_2 + 1] [i_3] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */int) arr_11 [i_2] [(_Bool)1]))))) ? (((((/* implicit */_Bool) var_5)) ? (-6083896006365939038LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) arr_3 [(_Bool)1] [i_3])))) < (((/* implicit */long long int) ((/* implicit */int) (!(var_3)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 6; i_5 += 4) 
                    {
                        arr_21 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */long long int) 2319144351U)) : (6083896006365939038LL)));
                        arr_22 [i_2] [i_2] [(unsigned char)5] [i_5] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_2] [(signed char)8] [i_4 + 2] [i_2] [i_5])))))));
                        var_11 = ((/* implicit */long long int) var_9);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_12 = (+(12605198583190286461ULL));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_14 [i_4 - 2] [i_3 + 2] [i_2] [(unsigned short)9])));
                        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1] [4ULL]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) arr_18 [(_Bool)1] [i_3 - 2] [i_6] [(_Bool)1])) != (var_7))))));
                        arr_25 [i_2] [(unsigned char)5] [1] [i_3] [i_4] [i_6] = ((/* implicit */short) arr_15 [i_2 + 1] [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_15 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -835003477470342609LL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))))));
                        arr_28 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_2])) : (((/* implicit */int) arr_10 [i_3 + 3] [i_2]))));
                        var_16 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 6489768417037330560LL)) && (((/* implicit */_Bool) -9223372036854775807LL))))) < (((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1] [i_3 - 2] [(unsigned short)4]))));
                    }
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned long long int) ((var_0) - (((((/* implicit */_Bool) ((long long int) -4714676556507124347LL))) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_6)))) : (614712353)))));
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_7)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (((((/* implicit */_Bool) -2064245250)) ? (((/* implicit */unsigned long long int) 6545767336980797206LL)) : (178205986678698411ULL)))))))))));
    var_19 |= ((/* implicit */unsigned char) (~(var_7)));
}
