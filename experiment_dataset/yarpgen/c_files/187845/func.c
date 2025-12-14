/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187845
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
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-111)) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))) + (((arr_3 [i_0 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13)))))));
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        arr_9 [i_2] = ((((((/* implicit */int) max(((_Bool)0), (var_15)))) != (((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_12)))))) ? (max(((-(arr_7 [i_2 + 1] [i_2]))), (((/* implicit */long long int) arr_6 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_1), (((/* implicit */unsigned int) (_Bool)0)))) != (((/* implicit */unsigned int) var_13)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_18 [i_6] [i_6] [i_2] [i_6] [i_6] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_5] [i_6 + 1])))))));
                            arr_19 [i_2] [i_5] [i_2] [i_5] [i_6 - 1] = (~(arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_6 + 1]));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_22 [i_2] [i_2 - 1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_3] [i_7] [i_7])) || (((/* implicit */_Bool) arr_21 [(short)6] [i_3] [(signed char)5])))))));
                arr_23 [i_2] [i_2] [10U] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_6 [i_2]))));
            }
            var_20 |= ((/* implicit */unsigned long long int) var_17);
            /* LoopSeq 1 */
            for (int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_8 - 2])) ? (((/* implicit */int) arr_17 [i_8 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) var_0))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_8 - 2] [i_8] [(short)1])) && (((/* implicit */_Bool) var_0))));
                var_23 += ((/* implicit */int) ((short) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_13 [(unsigned short)6] [i_3] [i_3] [(unsigned short)6])))));
            }
        }
        arr_27 [i_2] [i_2] = ((/* implicit */unsigned short) (unsigned char)255);
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2])))))) ? (((/* implicit */int) min((arr_17 [i_2 + 1] [(signed char)2] [i_2] [i_2] [i_2 + 1] [i_2]), (((/* implicit */short) arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : (((/* implicit */int) (unsigned short)39589)))))))));
    }
}
