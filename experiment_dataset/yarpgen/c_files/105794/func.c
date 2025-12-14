/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105794
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (min((((long long int) (_Bool)1)), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_19 -= (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_0] [(short)8] [i_2])), (5934005784471538584LL)))));
                        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_15 [i_0] [(unsigned short)6] [(unsigned short)6] [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)37253))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-28455)) > ((+(((/* implicit */int) arr_7 [i_0] [(short)5] [i_0]))))))) : ((~((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            var_23 -= ((/* implicit */unsigned short) arr_17 [i_5]);
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_17 [(signed char)0]))))));
        var_25 = ((/* implicit */signed char) ((arr_16 [i_4 - 2]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_28 [i_7] [i_7 + 1] [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) arr_20 [(short)3])) : (-1890161003)))) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)15069)))))))));
                    var_26 = arr_22 [i_6];
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) arr_26 [i_6] [(signed char)12] [i_6]);
    }
}
