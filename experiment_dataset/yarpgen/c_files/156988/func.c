/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156988
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = (short)-5241;
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (var_8)));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == ((+(2699175212273387458LL)))))), ((-(((((/* implicit */_Bool) 18146548468731808524ULL)) ? (300195604977743092ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_2] [i_4] = ((/* implicit */int) (short)10330);
                                var_16 = var_8;
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_6))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_2] [(short)16] = ((/* implicit */long long int) arr_9 [i_2 - 1] [i_2] [i_2 - 1] [i_2]);
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        arr_23 [i_5] = (!(((/* implicit */_Bool) var_2)));
                        var_19 -= ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0] [i_6 + 1] [i_6] [i_6] [i_6] [i_0]) : (arr_10 [3LL] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]));
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        arr_28 [i_0] [i_1 - 2] [i_5] [i_7] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (short)10330))));
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        var_22 = ((/* implicit */short) (~((~(var_2)))));
                        arr_31 [i_0] [i_0] [i_5] [i_0] [i_8] = ((/* implicit */long long int) (unsigned char)255);
                        var_23 = ((/* implicit */short) var_2);
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_3))))));
                    }
                    var_25 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1] [i_1 + 1])) >> (((((/* implicit */int) var_5)) - (22494)))))));
                }
                var_26 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(var_3))))))));
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_27 = (-(((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1])) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_3)) : (((arr_29 [i_0] [i_0] [i_1 + 2] [i_9] [i_0] [i_11]) & (((/* implicit */unsigned long long int) var_7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        for (int i_13 = 1; i_13 < 19; i_13 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (unsigned char)192))));
                var_29 = ((/* implicit */long long int) (unsigned char)255);
            }
        } 
    } 
    var_30 = var_3;
}
