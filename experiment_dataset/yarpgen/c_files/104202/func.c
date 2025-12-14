/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104202
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 - 2] [i_3] = (~(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_8 [i_1] [i_3])))), (((((/* implicit */int) var_8)) <= (((/* implicit */int) var_16))))))));
                            var_17 = ((/* implicit */int) (signed char)0);
                            var_18 = ((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_3]), (((((/* implicit */int) arr_4 [i_0 + 1])) & (((/* implicit */int) ((signed char) (short)-1)))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                var_19 ^= ((/* implicit */short) ((unsigned short) (~(arr_8 [i_2] [i_1]))));
                                arr_14 [i_4] [i_1] [i_4] |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) - (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_0] [i_4] [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0])), (var_3)))))))));
                            }
                        }
                    } 
                } 
                var_20 = ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) (short)-6549))))) < ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned short)3948)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_20 [i_1] [7LL] [i_1] [i_1] = ((/* implicit */signed char) ((-1) - (((/* implicit */int) var_16))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) arr_15 [i_0] [i_0] [i_6])), (arr_8 [i_0] [i_6]))))));
                        arr_21 [i_0] [(unsigned short)3] [(unsigned short)3] [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_8 [i_1] [i_1]))))));
                    }
                    var_22 = ((/* implicit */long long int) max((max(((+(((/* implicit */int) arr_17 [i_1] [i_1] [i_5] [i_5])))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_16 [i_1]) : (((/* implicit */int) var_11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0 - 1])))))));
                    var_23 *= ((/* implicit */short) (unsigned short)0);
                    arr_22 [i_0] [i_1] [i_1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0] [i_0 + 1] [i_0]))))));
                    var_24 = ((/* implicit */short) max((((/* implicit */int) var_8)), (((int) var_12))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (short)6573)))))));
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_27 [0] [0] [i_7] [i_8 + 1])) ? (arr_2 [i_1] [i_1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)11630))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))), ((+(max((((/* implicit */long long int) var_11)), (var_0)))))));
                                var_27 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                                arr_29 [i_0 - 1] [i_1] [i_1] [i_1] = ((/* implicit */short) max((((int) arr_2 [i_1] [i_8 - 1] [i_8 + 1])), (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_0 + 1] [i_0]))));
                                var_28 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_8 - 1] [i_8])))), (((/* implicit */int) arr_19 [i_0] [i_0] [i_8 + 1] [i_1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */int) min(((unsigned short)25776), (var_13)));
}
