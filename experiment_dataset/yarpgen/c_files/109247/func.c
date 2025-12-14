/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109247
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((1520273467U) - (1520273442U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0]));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) (-(arr_0 [i_4])));
                            arr_14 [i_0] [(unsigned short)14] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                            var_23 = ((/* implicit */long long int) (+(arr_12 [i_4] [i_1] [i_2] [i_3 - 1] [i_4])));
                            var_24 = ((/* implicit */long long int) ((signed char) ((signed char) (signed char)122)));
                            var_25 = arr_7 [i_0] [i_1] [i_3 + 1] [i_4];
                        }
                        arr_15 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                        var_26 = ((/* implicit */unsigned long long int) ((long long int) 2774693829U));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23705)))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (7136420213325278732LL) : (7136420213325278736LL)));
                    }
                    var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 136363280U)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))), (((/* implicit */int) ((unsigned short) arr_8 [i_0] [(unsigned short)9] [(unsigned short)18])))));
                }
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_30 = min(((+(arr_18 [4LL]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1]))))));
                    arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))))), (arr_0 [i_0]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) arr_13 [i_0] [9LL] [(unsigned short)0] [i_0] [(unsigned short)1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_6] [i_6] [i_0] [i_0])))))))));
                    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4158604015U))));
                    var_32 = ((unsigned int) arr_16 [i_6]);
                    var_33 |= ((unsigned short) var_13);
                    arr_23 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [(signed char)11] [(signed char)1] [(signed char)21] [(signed char)21])) << (((/* implicit */int) arr_2 [i_0] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_1])))) & (min((arr_0 [i_1]), (((/* implicit */long long int) arr_5 [i_0] [(signed char)15])))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [(signed char)16])) * (((/* implicit */int) arr_5 [i_0] [i_0]))));
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((unsigned short) (unsigned short)12627)))));
                }
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_0 [(signed char)16])))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_1])) > (var_9)))) << (((((/* implicit */int) var_19)) - (61480)))))) : (arr_4 [i_0])));
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) var_10);
    var_38 = ((/* implicit */unsigned short) var_7);
}
