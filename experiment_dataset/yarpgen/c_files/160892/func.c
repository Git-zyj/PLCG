/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160892
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
    var_11 = ((/* implicit */short) ((11912219991451215312ULL) != (11912219991451215299ULL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) (!((_Bool)1)));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))))));
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_1 + 1])))) | (((/* implicit */int) (unsigned short)65509))));
                    var_14 = ((/* implicit */signed char) max((min((11449305699229821079ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1 + 1] [i_0] [i_0])))), ((((~(6534524082258336303ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_2]) << (((arr_12 [i_0] [i_0] [i_0]) - (6542308120669191237ULL)))))) ? (max((arr_12 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) 3272198354022915121LL)))) : (arr_12 [i_3 - 2] [i_1 + 1] [i_0])));
                                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) == (((arr_9 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0]))));
                                var_18 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (3300150335U))) ? (arr_4 [i_0] [i_0] [i_0] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0] [(_Bool)1] [i_3 + 2]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_0] [(signed char)8] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) - (98)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */_Bool) ((((var_0) > (var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) (unsigned short)65518)))))))) : (((/* implicit */int) var_2))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            arr_19 [i_5] = ((/* implicit */_Bool) ((arr_15 [i_6]) - (((/* implicit */unsigned int) max((((/* implicit */int) (short)-15804)), (1865380171))))));
            var_19 = ((_Bool) min((((/* implicit */short) arr_14 [i_5])), (var_6)));
            arr_20 [i_5 + 3] [i_5 + 3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(127ULL)))) ? (var_0) : (((/* implicit */unsigned long long int) 65535))))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_18 [i_5] [i_6]))) : ((((_Bool)1) ? (max((3664337868599899840ULL), (((/* implicit */unsigned long long int) arr_14 [i_5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))))))))));
            arr_21 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_15 [i_6])), ((~(arr_18 [i_5 + 3] [i_5 - 1])))));
            arr_22 [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (_Bool)1))))), ((~(arr_18 [i_5] [i_5 + 1])))));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (max((((/* implicit */short) (_Bool)1)), (var_7)))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_21 = var_6;
}
