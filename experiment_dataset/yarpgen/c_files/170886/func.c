/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170886
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (-217476330124070776LL)))))), ((~(((/* implicit */int) (short)27560))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_6 [(signed char)11] [i_1] [i_2] [16ULL] = ((/* implicit */_Bool) (((~(arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])))))));
                    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) > (((/* implicit */int) arr_5 [i_1] [i_2]))));
                }
                arr_7 [i_1] = min((((((/* implicit */_Bool) 12030386498027924780ULL)) ? (arr_2 [2] [2ULL] [i_0 + 1]) : (arr_2 [i_0] [(short)17] [i_0 + 1]))), (((arr_2 [i_1] [i_1] [i_0 - 1]) / (arr_2 [i_0 - 1] [i_1] [i_0 + 1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_14 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255))));
        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_9 [i_3])))) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3])))));
        var_17 -= ((/* implicit */unsigned int) ((signed char) arr_8 [i_3]));
        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3] [i_3]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)229)), (9187343239835811840ULL)))) ? (((/* implicit */unsigned long long int) 1471219147)) : (18446744073709551615ULL))) + (((unsigned long long int) (_Bool)1))));
        arr_14 [i_4] = ((/* implicit */unsigned int) (-(max((5007739444880228794ULL), (((/* implicit */unsigned long long int) (short)32747))))));
    }
}
