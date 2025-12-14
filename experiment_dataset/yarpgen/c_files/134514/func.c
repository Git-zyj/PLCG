/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134514
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((max((arr_6 [i_4 - 4] [i_1 + 1]), (((/* implicit */unsigned long long int) var_1)))) ^ (((8217744001357410285ULL) ^ (9115971568254836330ULL)))));
                                arr_19 [i_1] [i_1] [(unsigned char)2] [i_4 + 2] [i_5] |= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_4 - 1])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) 16775168U);
                    arr_20 [i_1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_1 - 2] [i_1 + 1])) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) ((unsigned char) arr_17 [i_1] [i_1] [i_1] [i_3] [i_3]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_3 [i_6]) : (arr_3 [i_6])))) ? ((((~(((/* implicit */int) var_15)))) ^ (((/* implicit */int) ((134217727U) > (2684898496U)))))) : (((/* implicit */int) min((arr_22 [i_6]), (((/* implicit */short) var_6))))))))));
        arr_23 [i_6] = ((/* implicit */unsigned int) 10229000072352141331ULL);
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_19 -= max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) & (((((/* implicit */_Bool) arr_25 [i_7])) ? (arr_25 [(unsigned char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        arr_26 [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)6)) > (((/* implicit */int) (short)-1))));
        arr_27 [i_7] [i_7] |= ((/* implicit */unsigned char) (short)-10);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 2; i_10 < 9; i_10 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(var_10))))));
                        var_21 -= ((short) ((arr_25 [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        arr_36 [i_8] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_9] [(short)4] [i_10 - 2] [i_10 - 2]))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3357968054U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7]))) : (arr_2 [i_9])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_34 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 2]))));
                    }
                    var_23 = ((unsigned char) var_9);
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
    {
        var_24 &= ((/* implicit */short) var_10);
        arr_41 [i_11] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_39 [i_11])))), (((/* implicit */int) var_4))));
        var_25 = ((/* implicit */unsigned char) min((var_25), ((unsigned char)0)));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
    }
}
