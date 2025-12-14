/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110948
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [12ULL] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_10);
                    var_18 = ((/* implicit */unsigned long long int) (((~((+(((/* implicit */int) (unsigned char)100)))))) == (max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)69)), (((((/* implicit */int) (unsigned char)183)) >> (((((/* implicit */int) (unsigned char)183)) - (181)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min(((unsigned short)38598), (var_5)))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)10] [8] [i_3])))) : (((/* implicit */int) (unsigned char)172)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_2 [i_3]))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : ((((_Bool)1) ? (var_4) : (var_14))));
                            var_20 = ((/* implicit */unsigned char) 2575514913087612723ULL);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2])) : (1822729005)))))))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) -1423724679))));
                        arr_18 [i_0] [i_1 + 2] [i_0] [i_5] = ((((((/* implicit */int) (unsigned char)0)) >> ((((+(((/* implicit */int) (unsigned char)172)))) - (158))))) - (1048575));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_28 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */int) (unsigned char)255);
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                    arr_29 [i_6] |= ((/* implicit */unsigned char) ((var_8) != (((/* implicit */int) (_Bool)1))));
                }
                arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)4);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 4; i_9 < 19; i_9 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), ((_Bool)1)));
                    arr_33 [i_7] [i_7] [i_9] = (+(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned char)30))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (arr_23 [1])))) || (((/* implicit */_Bool) arr_26 [i_9 - 3] [i_9] [i_9] [i_9 + 4]))));
                                arr_39 [i_6] [i_7] [i_9 + 1] [i_10] [i_11] = ((((/* implicit */_Bool) arr_35 [i_9] [i_9 - 2] [i_9] [i_9])) ? (((/* implicit */int) arr_35 [i_9 + 3] [i_9 + 2] [i_9] [i_9])) : (var_4));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) max((var_26), ((unsigned char)180)));
                    arr_40 [i_9] [i_7] [16ULL] = ((/* implicit */int) ((unsigned short) arr_20 [i_9 - 3]));
                }
            }
        } 
    } 
}
