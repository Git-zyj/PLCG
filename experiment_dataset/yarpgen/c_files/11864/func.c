/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11864
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_5)), (6442175455041002726LL)))))), ((+(var_0)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [(_Bool)1] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [16] [i_1 + 1])) ? ((-(((/* implicit */int) (unsigned char)18)))) : (((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1])) * (((/* implicit */int) arr_8 [(_Bool)1] [(unsigned char)9] [i_2]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) max((65535), (((/* implicit */int) (short)13972))))) & (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (2612790062U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))) : (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_8))))))))));
                                var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)18))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */short) (~(((/* implicit */int) max((arr_13 [(_Bool)1] [i_0 + 1] [(_Bool)1]), (arr_13 [(signed char)12] [i_0 + 1] [(signed char)12]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) arr_4 [i_0 + 1] [i_1] [i_0]);
                                var_19 = (-(((arr_11 [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0 + 1]) * (arr_11 [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1]))));
                                arr_22 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */short) arr_8 [i_1] [i_6] [15U]);
                                arr_23 [i_1] [i_5] [i_2] [i_1 - 1] [i_1] = ((/* implicit */signed char) (~(2612790062U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
