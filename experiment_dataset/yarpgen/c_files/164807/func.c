/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164807
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) (short)32764))));
        arr_2 [(signed char)7] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)69))));
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) + (arr_0 [i_0])));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [15LL] [i_1] [i_2] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)192)) - (((((/* implicit */int) (short)32767)) >> (((18158513697557839872ULL) - (18158513697557839848ULL)))))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)196)));
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                    }
                }
            } 
        } 
        arr_18 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_13) : (-7838328004265274711LL));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 576460752303423487LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-32765))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)53564))))))))));
        var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)80))))), (var_7))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (signed char i_6 = 4; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_27 [i_4] [14LL] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (var_9))));
                    arr_28 [i_4] [(signed char)18] [i_6 - 2] = ((/* implicit */short) max((((((((/* implicit */int) var_15)) & (((/* implicit */int) (short)32764)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))), ((+(((/* implicit */int) arr_24 [i_6 - 4] [i_6 - 3] [i_6 - 4]))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) var_14);
}
