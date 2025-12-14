/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116790
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)15916))) + (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) (-(var_13)));
            var_16 = ((/* implicit */signed char) arr_5 [i_1 - 2]);
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_8 [i_2] [(unsigned short)11]))) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            var_18 = ((/* implicit */short) ((arr_7 [i_2] [i_0]) == (425129232)));
            var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0] [i_2]) : (((/* implicit */int) (_Bool)1))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)113)) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */int) (unsigned char)99))));
        }
        for (int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (arr_11 [i_0] [i_0])));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_2 [i_3 - 1]))));
            arr_12 [i_3] = ((((/* implicit */int) var_5)) <= (var_0));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_3])) >= (((/* implicit */int) (short)30))))) : (((/* implicit */int) arr_4 [i_3] [i_3 - 1]))));
        }
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
        arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2143289344)) == (arr_9 [i_0])));
    }
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_0 [i_4] [i_4]))));
        var_26 &= ((/* implicit */int) max((((/* implicit */unsigned int) var_9)), (((unsigned int) (unsigned char)0))));
        arr_17 [i_4] &= ((/* implicit */int) ((3467751925U) << (((2143289344) - (2143289332)))));
    }
    var_27 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [i_5] [i_5] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >= ((-(((/* implicit */int) (_Bool)0))))));
                                arr_32 [(_Bool)1] [i_8] [i_7] [i_8] [i_5] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) (short)-31)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_27 [i_5] [i_6] [4U] [i_8] [4U] [4U])))))), (min((((arr_25 [i_5] [i_5] [i_5] [i_5]) & (((/* implicit */int) (unsigned short)4096)))), (((var_5) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */int) ((min((2127250057U), (((/* implicit */unsigned int) arr_28 [i_6])))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    arr_33 [i_7] [i_6] [i_6] [i_5] = ((/* implicit */int) ((((((/* implicit */int) var_7)) > (var_0))) ? ((-(((((/* implicit */_Bool) (unsigned short)49619)) ? (var_8) : (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5])))))) : (((/* implicit */unsigned long long int) 4294967291U))));
                    var_29 = ((/* implicit */unsigned char) arr_26 [i_5] [i_6] [i_5]);
                }
            } 
        } 
    } 
}
