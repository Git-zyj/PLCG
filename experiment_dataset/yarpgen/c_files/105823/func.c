/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105823
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) << (((var_10) - (1641773789U))))))))) : (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((_Bool) ((signed char) max((var_3), (((/* implicit */unsigned long long int) var_12))))));
                var_15 += ((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [i_1]);
                var_16 = ((/* implicit */unsigned char) var_3);
                var_17 |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1654203114)) ? (((/* implicit */unsigned int) 1654203114)) : (1206060722U))));
                arr_4 [i_0] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3])) && (((/* implicit */_Bool) arr_7 [i_4]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 4; i_5 < 23; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((signed char) arr_14 [i_5 - 3] [i_5 - 3] [i_4] [i_4]));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1654203119))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_3])) | (((/* implicit */int) ((_Bool) var_0)))));
                            var_22 = ((/* implicit */long long int) ((unsigned short) arr_19 [i_7 + 1] [i_7 + 2] [i_7 - 2] [i_7] [i_7 - 2]));
                            var_23 = ((/* implicit */unsigned short) ((unsigned int) arr_18 [i_2] [i_7 + 3] [i_7] [i_7]));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 2; i_8 < 22; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) > (var_3))))));
                            arr_25 [i_8] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) (unsigned char)30);
                            var_25 = ((/* implicit */_Bool) arr_23 [i_8 - 2] [i_8 + 1] [i_8] [i_8 + 2] [i_8 + 2]);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18252)) ? (-3363910747468852609LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1654203115)) ? (3168173206U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)76))));
                        var_28 += ((/* implicit */unsigned char) arr_23 [i_2] [i_3] [i_4] [i_4] [i_6]);
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_24 [i_3] [i_4] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned short)54689)) ? (125829120U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35011)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_9 [i_2] [i_2])))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */int) ((_Bool) arr_7 [i_9 + 1]));
                        var_31 += ((/* implicit */unsigned short) (~(((/* implicit */int) (short)32161))));
                        var_32 &= ((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1]);
                        arr_29 [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) (~(arr_26 [i_2] [i_9 - 2])));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) : ((~(((/* implicit */int) var_12)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 2; i_10 < 21; i_10 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4)))))) != ((-(arr_30 [i_10 + 2]))))))));
            var_35 = ((/* implicit */unsigned short) arr_17 [i_10 + 4] [i_10 - 2] [i_10 + 3] [i_10 + 2] [i_10 - 1] [i_10 + 2]);
        }
        var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
    }
}
