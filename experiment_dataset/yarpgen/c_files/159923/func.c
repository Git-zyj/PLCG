/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159923
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) arr_11 [(unsigned char)1] [i_1 - 1] [i_2] [i_4])), ((+(((/* implicit */int) (short)768))))));
                                var_20 = ((/* implicit */int) arr_2 [i_1 - 2]);
                            }
                        } 
                    } 
                } 
                var_21 = (_Bool)1;
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned char)4])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_7 [i_0] [3U]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_25 |= ((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) var_8))), (max((((arr_18 [(unsigned char)5]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (arr_18 [i_6])))))));
                var_26 = ((/* implicit */int) max((var_26), (2147483647)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_7 = 2; i_7 < 22; i_7 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_5])) % (((/* implicit */int) arr_21 [i_6 - 1] [i_6] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 4; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) var_1);
                                var_29 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_5])) | (((/* implicit */int) var_4)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            {
                var_31 = ((/* implicit */int) arr_28 [i_10] [i_11] [17] [12]);
                var_32 = ((/* implicit */unsigned short) arr_31 [(signed char)0] [(_Bool)1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_12 = 1; i_12 < 12; i_12 += 2) 
    {
        var_33 |= ((/* implicit */unsigned short) ((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12]))));
        var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_12 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_12 - 1]))));
    }
    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) max((arr_41 [i_13]), (arr_41 [i_13]))))))));
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-29)))))));
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((arr_42 [i_13] [i_13]) && (((/* implicit */_Bool) var_14)))))) ? (((/* implicit */int) arr_41 [(_Bool)1])) : (((/* implicit */int) (!((_Bool)1)))))))));
        var_38 = ((/* implicit */int) ((((/* implicit */int) arr_40 [i_13])) < (((/* implicit */int) (((-(8845600030036826224ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_13])) | (((/* implicit */int) arr_41 [i_13]))))))))));
    }
}
