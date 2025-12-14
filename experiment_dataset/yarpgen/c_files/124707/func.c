/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124707
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
    var_18 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (_Bool)1))))) ? (2413934619U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))), (var_8)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1881032676U)) ? (min((var_8), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) != (11LL)))))))) ? (arr_6 [i_0] [i_1] [i_2]) : (min((var_3), (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))))));
                    var_20 = ((/* implicit */int) (+(((max((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_0])))) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)1] [i_1] [i_0])))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_2 [i_2]))));
                    var_21 += ((/* implicit */int) 0U);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_22 &= ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (short i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_19 [i_6] [(short)12] [i_5] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9268)) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_3] [0U])) || ((_Bool)0))))));
                            var_23 = ((/* implicit */unsigned char) (+(arr_17 [i_5 + 3] [i_5 - 2] [i_6 + 2] [i_6] [i_6 - 1])));
                            arr_20 [0U] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [14ULL]);
                            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)124))));
                            arr_21 [i_0] [i_3] [i_4] [i_4] [i_0] [i_3] = ((/* implicit */long long int) ((-1LL) == (((/* implicit */long long int) 4138433400U))));
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */_Bool) (+((~(min((24624922), (var_14)))))));
    }
    var_26 = ((/* implicit */signed char) var_10);
    var_27 = ((/* implicit */signed char) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_12)))) : (((/* implicit */int) var_11))))));
    var_28 = ((/* implicit */short) -13LL);
}
