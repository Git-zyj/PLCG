/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112735
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
    var_13 *= ((/* implicit */unsigned int) (-(var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
            arr_7 [i_1] [i_1] [(short)5] = ((/* implicit */signed char) arr_3 [i_0 + 1] [i_0 + 1]);
            arr_8 [i_0] [i_1] [7U] = ((/* implicit */short) arr_1 [i_0 + 1]);
        }
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (arr_3 [i_0] [i_0 + 1])));
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (+(3273835781479834938LL)));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_5])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2])))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_4]))) : (arr_16 [i_5] [i_4] [i_3] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [8U] [8U])))))));
                            var_18 *= ((/* implicit */short) arr_14 [i_0] [i_0]);
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_5] [i_4] [i_3]))));
                            arr_21 [i_5] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
                        }
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((((/* implicit */int) arr_20 [11U] [i_2] [i_3] [i_2] [1U])) + (((/* implicit */int) (unsigned char)128)))) : ((+(((/* implicit */int) arr_13 [i_0]))))));
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_2 + 4])) : (arr_5 [i_2 + 3] [i_2 + 3] [i_2 + 4])));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) 4294967293U);
}
