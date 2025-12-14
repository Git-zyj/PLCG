/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159286
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_14 += var_3;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_14 [i_0 - 1] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 4] [i_0 - 1] [i_0 + 4] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0 + 4] [i_0 - 1] [i_0 + 4] [i_0]))));
                            var_16 = arr_4 [i_0 + 1] [i_0] [i_3];
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_10 [i_5] [i_3] [i_3] [i_2] [i_1] [i_0 + 3])))));
                            var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))));
                            arr_19 [i_0 + 4] [i_1] [i_2] [i_3] [i_5] [i_0] = var_6;
                        }
                        var_19 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_0 [i_0]));
                    }
                }
                for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    var_20 &= ((/* implicit */short) var_13);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_6 - 1] [i_6 + 1] [i_0 + 4])) ? (((((/* implicit */_Bool) (unsigned char)82)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_0 + 1] [i_0 + 3] [i_6 + 1] [i_8 - 1] [i_1] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) var_13)) + (105463392931848362LL)))))));
                                var_21 -= ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) + (min((var_5), (((/* implicit */int) var_9)))))) + (((/* implicit */int) var_0))));
                                var_22 = ((/* implicit */signed char) (unsigned char)0);
                                var_23 = ((/* implicit */_Bool) ((signed char) (signed char)-22));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned int i_9 = 3; i_9 < 18; i_9 += 3) 
                {
                    var_24 *= ((/* implicit */long long int) (((~(var_2))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    arr_33 [i_0 + 2] [i_0] [i_9 + 1] = ((/* implicit */unsigned char) ((((unsigned int) (unsigned char)30)) & (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_20 [i_9 - 2] [i_1] [i_9 + 2])))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)178)), (arr_2 [i_0])))) | (((/* implicit */int) ((_Bool) var_11)))));
                }
                arr_34 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) var_3)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_0 + 3]))))))))) ? (((/* implicit */int) max((arr_4 [i_0 + 1] [i_0] [i_0 - 1]), (arr_4 [i_0 + 2] [i_0] [i_0 + 4])))) : (max((((/* implicit */int) (unsigned char)231)), (((((/* implicit */int) arr_23 [i_0 - 1])) * (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (int i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        for (int i_12 = 1; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_26 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 2] [i_11 + 2] [i_0 + 2] [i_0 + 4]), (arr_26 [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 2] [i_12 + 1] [i_12 + 1]))))) ^ (((arr_40 [i_0] [i_10] [i_10] [i_11 + 2] [i_12 + 1] [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                                arr_43 [i_0] [i_11 - 1] [i_10] [i_1] [i_0] = arr_0 [i_0];
                                var_27 += ((/* implicit */_Bool) arr_40 [i_11] [i_1] [i_10] [i_1] [i_11 - 2] [i_12 + 2]);
                                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_13))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1]))))))), (((((/* implicit */_Bool) arr_26 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 4])) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) (signed char)22))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) var_12);
    var_31 = ((/* implicit */unsigned char) var_5);
}
