/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164355
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_1] [i_0]))))));
                arr_5 [(unsigned short)13] [i_0] = ((/* implicit */long long int) (~((+(max((2636941297U), (var_5)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2] [i_2 + 1]))) & (2636941286U)))) ? (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_2 [i_2 + 2] [i_2] [i_2 + 1])) - (163))))) : (((/* implicit */int) max(((unsigned short)9246), (((/* implicit */unsigned short) arr_2 [i_2 + 2] [i_2 - 1] [i_2 + 1])))))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) max(((unsigned char)91), (((/* implicit */unsigned char) (_Bool)1))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [(signed char)1] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)42864)), (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1435749918U)))) | (min((2636941301U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [(unsigned short)11]))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    arr_18 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [6] [i_4 - 1]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_4 + 2] [i_5 - 1])) ? (arr_10 [i_0] [i_4 + 2] [i_5 - 1] [(short)20]) : (arr_10 [i_0] [i_4 + 2] [i_5 - 1] [i_5])));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_0)));
                    }
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        arr_23 [i_6 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((67108863) << (((((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [i_0] [i_6 - 1] [i_6])) - (10163)))))) ? (((((/* implicit */_Bool) 1435749918U)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (_Bool)1)))) : (arr_10 [i_4 + 2] [i_1] [i_4] [i_6 - 2])));
                        arr_24 [i_0] [i_1] [i_4] [i_6] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (_Bool)1));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_12))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)31365)))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_4 + 2]))) / (((/* implicit */int) arr_20 [i_4 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 2]))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!((!(var_7))))))));
                        var_21 -= arr_11 [i_1] [i_4 + 2] [i_4] [i_0];
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned int) var_11);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) ? (arr_17 [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 1]) : (arr_17 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 1])));
                    }
                }
                for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    arr_35 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                    var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_9 + 1] [i_9] [i_9 + 1]))))), (5595898399663645714LL)));
                }
                for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 2) 
                {
                    arr_38 [i_0] [i_1] = ((/* implicit */int) 3140426735877990518LL);
                    arr_39 [i_1] = ((/* implicit */short) (-(min((((/* implicit */long long int) arr_8 [i_0] [i_10 - 1] [i_10 - 1])), (max((1245628131529076142LL), (-5595898399663645694LL)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (min((var_0), (((/* implicit */unsigned int) var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (var_5) : (var_0)))));
}
