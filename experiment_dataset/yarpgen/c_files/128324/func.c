/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128324
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
    var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 536869888))))), (min((((/* implicit */unsigned int) var_13)), (var_15)))))) && (((/* implicit */_Bool) 1798221766729241017ULL)));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned char) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_11)) : (536869861)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (-536869864))), (((/* implicit */int) ((-5330629263500820140LL) > (((/* implicit */long long int) var_6))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */short) 655623418U);
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_12))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_2] [i_2] [i_4] |= ((/* implicit */short) var_15);
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (_Bool)1))));
                                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [(unsigned short)8] [(unsigned short)8] [i_0])) : (((/* implicit */int) (short)252))));
                            }
                            var_22 *= ((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_23 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5330629263500820140LL)) ? (((/* implicit */int) var_2)) : (var_6)))) ? (((((/* implicit */int) var_11)) / (arr_15 [i_0] [i_1] [i_0]))) : (arr_20 [i_1 - 1] [i_1 - 1] [i_6] [i_1 - 1] [i_6]));
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(_Bool)1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3875)))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) | (arr_15 [i_1] [i_1 - 1] [i_1 - 1])));
                        arr_22 [i_0] [i_0] [i_0] [(unsigned short)2] = ((/* implicit */unsigned short) var_14);
                    }
                    var_25 *= ((/* implicit */unsigned short) var_4);
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((unsigned int) -5330629263500820140LL)), (((/* implicit */unsigned int) min((arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1])))))))));
                    var_27 = ((/* implicit */int) ((min((((arr_8 [i_7] [(unsigned char)7] [i_1] [i_0]) % (arr_8 [i_7] [i_1] [i_1] [i_7]))), (((/* implicit */int) ((_Bool) var_1))))) > (((/* implicit */int) arr_2 [i_1]))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) / ((+(var_9))))) * (((((/* implicit */_Bool) (+(0U)))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3887)))))))));
}
