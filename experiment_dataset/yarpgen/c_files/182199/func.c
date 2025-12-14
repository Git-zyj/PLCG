/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182199
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
    var_20 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) ((1663751797U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2631215501U)))) ? (((/* implicit */int) ((short) var_18))) : (((/* implicit */int) (short)16))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [11ULL] = ((/* implicit */_Bool) ((((arr_0 [i_0] [18LL]) & (arr_0 [i_0] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4083199606U))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_22 += ((/* implicit */long long int) (((+(arr_0 [4] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)9] [i_1])) || (((/* implicit */_Bool) -291252697))))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_5 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : ((+(arr_1 [i_0] [i_1 + 1])))));
            arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2631215499U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31308))) : (1218210789U)))));
            arr_7 [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2684249801U)))) ? (((unsigned long long int) (signed char)-1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14742)))));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((long long int) 4119475758U))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_12 [4] = ((/* implicit */_Bool) ((short) (_Bool)0));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [0U] [i_0]))) ? (((/* implicit */unsigned long long int) (+(arr_5 [i_3] [i_0])))) : ((+(16ULL)))));
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    arr_19 [i_0] [i_2] [i_3] [i_0] [i_0] = (+(((/* implicit */int) ((_Bool) arr_1 [i_2] [i_3]))));
                    arr_20 [i_0] [i_2] [i_0] [i_4] &= ((/* implicit */unsigned int) ((unsigned long long int) arr_16 [i_0]));
                    arr_21 [i_0] [14LL] [12] [(short)23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */unsigned long long int) 522240)) : (arr_18 [i_4 - 1] [i_4 + 1] [i_2] [i_2] [0U])));
                    arr_22 [i_4 + 2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [16U])) ? (1663751828U) : (211767682U)))) || (((/* implicit */_Bool) (~(2631215487U))))));
                }
            }
        }
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_25 [i_5] [0] |= arr_16 [(short)1];
        arr_26 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_14 [i_5] [i_5]))) ? ((+(((/* implicit */int) (signed char)98)))) : ((~(arr_23 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_25 = (~(((/* implicit */int) (short)21704)));
        arr_30 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_13 [i_6]))))));
    }
}
