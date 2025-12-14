/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126588
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((min((((/* implicit */long long int) 1490874705U)), (4896323007163070237LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_18 |= ((/* implicit */long long int) var_7);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1191165597843302728LL)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) ((unsigned short) var_13)))));
                        arr_9 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((var_11) ? (-2620717896772877901LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) 
                    {
                        var_20 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_0] [2U] [i_0] [(_Bool)0] = var_8;
                        var_21 = ((/* implicit */unsigned int) -2620717896772877901LL);
                        arr_14 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) var_15);
                        arr_15 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) * (var_9)));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) var_4);
                        var_22 = ((/* implicit */unsigned short) var_1);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) == (var_13)));
                            arr_22 [i_5] [i_1] [i_2] [i_5] [(unsigned short)12] = ((unsigned short) var_8);
                            var_24 = var_10;
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7295))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)170)))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) 1490874705U)) : (var_9)))));
                        }
                        var_28 = ((/* implicit */long long int) (+(var_13)));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_8]))));
                        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                    }
                    arr_30 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned short) max(((+((+(var_9))))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680))) > (-6349499394962951244LL)))))))));
                    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 888186519U))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_7);
    var_33 = ((/* implicit */unsigned char) min((var_14), (var_12)));
    var_34 = max((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (max((((/* implicit */long long int) var_6)), (-6175208719587181029LL))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)48584))))), (var_9))));
    var_35 = ((/* implicit */unsigned int) var_0);
}
