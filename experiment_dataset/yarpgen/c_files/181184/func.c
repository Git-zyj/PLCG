/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181184
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_17 *= ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 2])) != (((/* implicit */int) var_2))))))) >= (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 3] [i_0])) | (((/* implicit */int) arr_0 [i_0 - 2]))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_0 [(unsigned short)7]))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_10))))) / ((~(((/* implicit */int) arr_1 [i_0 - 3] [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_4) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_2))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned int) var_4))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_9 [i_1 + 3] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_12);
                    arr_10 [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_16))))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_4))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_17 [i_2] [i_2 - 4] [i_2 - 3] [i_2 - 1] [(short)10] [i_2] [i_2 - 3] = ((/* implicit */int) (unsigned short)17445);
                                arr_18 [i_1] = ((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1 + 2] [i_3]);
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [(unsigned char)0] [i_1 - 1] [i_1 - 1] [i_2 - 2])) ? ((+(((/* implicit */int) arr_0 [i_1 + 2])))) : (((/* implicit */int) arr_13 [i_2 + 2] [i_4 + 2] [i_2 - 1] [i_3])))) / (arr_12 [i_3] [i_3] [i_3] [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_9)))))))) : (((((/* implicit */_Bool) ((signed char) var_11))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    var_21 = ((/* implicit */_Bool) var_8);
}
