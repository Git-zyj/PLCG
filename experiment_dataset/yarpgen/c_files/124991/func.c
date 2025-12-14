/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124991
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((14346745932779288624ULL) << (0U)));
                        var_18 = ((/* implicit */signed char) ((arr_1 [i_0]) & (arr_1 [i_3])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_12 [i_0] [8U] [i_2])) - (((/* implicit */int) arr_10 [i_1]))))));
                        arr_16 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_1] [i_5] [i_0]);
                        var_19 = arr_3 [i_1] [i_1];
                        arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (short)-8940))) - (((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (4890209290672122765ULL)))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_5] [i_2] [i_2] [i_1] [i_0])) % (arr_13 [i_0] [i_1] [i_1])));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [i_1] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) ((signed char) arr_18 [13ULL] [i_1])))) + (((arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]) + (((unsigned int) arr_5 [i_1]))))));
                                arr_29 [i_0] [i_1] [i_1] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1])) | (((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_1])) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) 1805818500U))))) : (((((/* implicit */_Bool) (unsigned short)58362)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_6]))) : (arr_3 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) ((arr_5 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (short)8940)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned int) 2147483647))))));
                var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) 3371794144U)) ? (((((/* implicit */unsigned long long int) 268435440)) % (1257311138726014792ULL))) : (((/* implicit */unsigned long long int) (-(arr_13 [i_0] [i_0] [i_1])))))), (((/* implicit */unsigned long long int) ((((arr_3 [i_0] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (short)11040)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_2);
    var_25 = ((/* implicit */int) var_13);
    var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((min((2147483647), (2147483631))) << ((-(0U)))))), (var_5)));
    var_27 = ((/* implicit */unsigned char) var_11);
}
