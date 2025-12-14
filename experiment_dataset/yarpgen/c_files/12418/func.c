/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12418
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
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) (unsigned char)251))), (((((((/* implicit */_Bool) (unsigned short)18454)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) max(((unsigned short)18454), (((/* implicit */unsigned short) (short)-14647))))) : (var_11)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_19 = ((/* implicit */long long int) (-(((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_20 = ((/* implicit */signed char) (+((~(min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 + 2])) / (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_18 [i_1] = ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (unsigned char)5)), (arr_13 [i_1] [12U] [i_1]))));
                            /* LoopSeq 3 */
                            for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) arr_10 [i_4]);
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_7 [i_1]), (arr_7 [i_1]))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                            {
                                var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)8094)) ? (((/* implicit */unsigned int) var_6)) : (arr_13 [i_1] [i_2 + 3] [i_6])))));
                                var_25 = (unsigned char)4;
                            }
                            for (unsigned short i_7 = 3; i_7 < 21; i_7 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)13] [(short)13] [i_3] [i_3] [i_1] [i_3]))) > (arr_13 [i_1] [i_4] [8]))))))));
                                var_27 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                                var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_17 [i_1 + 2] [i_2] [i_2] [i_1 + 2] [i_7] [(short)1])), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)5)))) ? (((unsigned int) var_5)) : (max((4294967295U), (((/* implicit */unsigned int) arr_8 [i_7 + 1]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
