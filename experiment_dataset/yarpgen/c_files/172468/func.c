/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172468
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((~(2072718607U))))))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned char)69), ((unsigned char)187)))), ((-(10965402585116690383ULL))))))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)40270))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) (+(max(((+(((/* implicit */int) (unsigned char)69)))), ((-(((/* implicit */int) var_7))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3 - 2] = ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) arr_0 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_23 = (~(max(((+(((/* implicit */int) var_17)))), ((-(((/* implicit */int) (unsigned short)25260)))))));
                            arr_16 [i_0] [i_1] [i_3 + 1] [i_3 + 2] [i_2 + 3] [22U] [i_1] = ((/* implicit */long long int) (~((~((~(784686608U)))))));
                            arr_17 [i_0] [(unsigned char)11] [15] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(11823324773389509130ULL)))))))));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-81)))))));
                        }
                        var_25 += ((/* implicit */_Bool) min(((~((~(((/* implicit */int) (unsigned char)41)))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)18703)))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6] [19U] [i_2] [i_1] [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)84)))))))));
                                arr_24 [i_6] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((43330408U), (((/* implicit */unsigned int) (signed char)-81))))))))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((max(((~(arr_20 [8LL] [i_5 - 2] [i_2 + 3] [(signed char)4] [(signed char)4] [(signed char)4]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)69))))))), ((~(min((arr_22 [i_0] [i_1 - 2] [(short)18] [i_5 + 1] [i_1 - 2]), (((/* implicit */long long int) var_0)))))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((7481341488592861216ULL), (((/* implicit */unsigned long long int) min((3329309254U), (2672934120U)))))))));
                }
            } 
        } 
    } 
}
