/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111768
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-23220)), (4294967295U)))) ? ((+(arr_0 [(unsigned char)18]))) : (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((arr_7 [i_4] [i_3] [i_0] [i_0]), (arr_0 [i_0])))))) ? (((long long int) (!(((/* implicit */_Bool) (unsigned short)65533))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((arr_0 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)21] [i_1] [i_0] [i_1] [i_0])))))), (max((((/* implicit */unsigned char) arr_12 [i_0] [i_2] [i_0] [i_3 + 1] [i_2])), (var_2)))))))));
                            var_15 = ((/* implicit */unsigned short) var_12);
                        }
                        var_16 = ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65533)), (var_9)))) || (((/* implicit */_Bool) min(((unsigned short)65534), (((/* implicit */unsigned short) var_4)))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)2);
                    }
                    var_18 |= ((/* implicit */long long int) (unsigned short)65528);
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */long long int) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_8))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_5] [i_5] [i_5] [i_5])), (arr_8 [i_5] [i_5] [i_5] [i_5])))) > (((((/* implicit */int) (unsigned short)2)) >> (((((/* implicit */int) arr_6 [i_5])) - (138)))))))), (max(((-(arr_16 [i_6]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_9))))))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 4; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) arr_5 [i_6] [i_6] [i_5])) | (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8]))) : (arr_0 [i_8]))))));
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -7870659413117512617LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_10 = 1; i_10 < 15; i_10 += 3) 
    {
        arr_30 [i_10] = ((/* implicit */long long int) var_11);
        var_22 = (~(arr_0 [(unsigned char)4]));
    }
    var_23 = ((/* implicit */long long int) ((((var_5) != (max((var_5), (((/* implicit */unsigned int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? ((~(443230078912117258ULL))) : (((/* implicit */unsigned long long int) ((((var_0) + (2147483647))) >> (((var_9) - (2711852488U))))))))));
}
