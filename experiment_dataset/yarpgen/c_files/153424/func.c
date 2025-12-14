/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153424
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
    var_16 = ((/* implicit */unsigned long long int) ((int) 12022356832072828953ULL));
    var_17 = ((/* implicit */short) min((12022356832072828953ULL), (((/* implicit */unsigned long long int) 0LL))));
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1233261126U)))) ? (((/* implicit */int) arr_0 [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */int) max((((/* implicit */short) var_3)), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) -4199413101134423179LL));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 13873595148389183082ULL))))));
            arr_10 [i_1] [i_2] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
            arr_11 [i_2] [12LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((int) arr_4 [i_2]))))) + (((((/* implicit */_Bool) arr_2 [i_2] [i_1 - 2])) ? (arr_2 [i_2] [i_2]) : (arr_2 [i_2] [i_2])))));
        }
        for (int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            arr_16 [i_3] [i_3] [i_1] = ((/* implicit */short) 6550878900758962274ULL);
            arr_17 [i_3] [i_3] = var_4;
            arr_18 [i_3] [(short)9] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1])))))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) arr_3 [4ULL] [i_1]);
                            var_23 = arr_26 [i_3] [i_4] [i_5] [i_6];
                        }
                        arr_28 [i_4 + 1] [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9513777372198089461ULL)) && (((/* implicit */_Bool) (signed char)36)))))) != (arr_2 [i_1 - 2] [i_1 - 1]))));
                    }
                } 
            } 
        }
    }
}
