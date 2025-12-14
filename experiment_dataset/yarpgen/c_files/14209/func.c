/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14209
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
    var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(10204207926878930890ULL)))) ? (var_10) : (((((/* implicit */_Bool) var_1)) ? (8242536146830620725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) -8626820301088064660LL)) ? (10204207926878930888ULL) : (var_10)))));
        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9))))) : (var_12)));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) * (((((/* implicit */_Bool) 6980140060702661595LL)) ? (8242536146830620726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))))));
        var_17 = ((/* implicit */short) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned short) (((-(arr_0 [i_0]))) / (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (((((~(((/* implicit */int) (short)4095)))) == (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)7)) >= (((/* implicit */int) (short)-19048)))))))) : (8242536146830620726ULL)));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-6980140060702661596LL)))) ? (min((arr_0 [i_1]), (674720261U))) : ((+(arr_0 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (-1LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3261807553551936793ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= ((+(8242536146830620735ULL)))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_16 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 + 1]))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)15))));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ ((-(((((/* implicit */int) var_5)) % (((/* implicit */int) arr_9 [i_2]))))))));
                    var_23 = ((/* implicit */_Bool) arr_2 [i_4]);
                }
            } 
        } 
    }
}
