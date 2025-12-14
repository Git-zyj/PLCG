/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117280
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
    var_11 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_12 [i_4] [i_4] [i_4 - 4] [i_4] [i_4 - 2])), (((((/* implicit */int) arr_12 [(unsigned short)3] [i_4] [i_4 - 2] [i_4] [i_4 + 1])) + (((/* implicit */int) arr_12 [i_4] [i_4] [i_4 - 4] [i_4 - 4] [i_4 + 1]))))));
                                var_13 ^= ((/* implicit */unsigned char) min(((-(arr_9 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [8ULL]))), ((+(arr_9 [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 4] [i_4 + 1])))));
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (short)32767)) : (659463171)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]);
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]))));
                                arr_18 [i_0] [i_1] [i_2] [5] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_6)))))))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0])))) : (((int) (+(var_3))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_1] [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_4 [i_1] [i_0]), (arr_17 [i_0] [i_1] [i_2] [i_0] [i_2])))), (((((/* implicit */int) (short)-32753)) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((((arr_9 [i_0] [i_1] [i_0] [i_0] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_14 [(signed char)3] [(signed char)3] [(signed char)3] [(signed char)3])) - (28864))))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) * (var_8))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [3ULL]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (signed char)55)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62030)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)178)) || (((/* implicit */_Bool) -2147483637))));
}
