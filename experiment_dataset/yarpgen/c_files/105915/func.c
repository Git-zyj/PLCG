/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105915
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_14 += ((/* implicit */long long int) var_4);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_4 [5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1]))))) / (max((((/* implicit */long long int) var_6)), (arr_0 [i_1] [i_1])))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : ((-(arr_2 [10U] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [13U] [i_1]))) || (((/* implicit */_Bool) var_11)))))) : (((((((/* implicit */_Bool) var_12)) ? (-7436066804438986588LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_6))), (arr_1 [i_1] [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) arr_3 [i_2] [i_2]);
        var_17 = ((/* implicit */long long int) ((_Bool) ((min((var_4), (arr_8 [(unsigned short)9]))) / (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_2])), (var_0)))))));
    }
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_4))));
    var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7436066804438986588LL))) + (((/* implicit */long long int) ((/* implicit */int) max((var_10), (var_5))))))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 4) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((max((var_7), ((_Bool)1))) ? (min((arr_15 [i_3] [9LL]), (((/* implicit */long long int) var_12)))) : (-653372789519736238LL))))))));
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_6 [i_3]), (arr_6 [i_5 - 1])))), (min((-9223372036854775806LL), (((/* implicit */long long int) 1012797445))))));
                    var_22 = ((/* implicit */unsigned short) ((int) max((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) var_4)) & (var_3))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_27 [i_7] [10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4 - 3] [i_4 + 1] [i_5 - 1] [i_7])) && (((/* implicit */_Bool) -6034124754337260053LL)))))) == (((min((((/* implicit */long long int) (unsigned short)65533)), (var_3))) >> (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_22 [i_4] [i_4])) : (((/* implicit */int) arr_22 [(unsigned short)2] [i_5]))))))));
                                var_23 = ((((/* implicit */_Bool) var_9)) ? (((int) min((var_11), (var_6)))) : ((+((+(arr_25 [(unsigned short)8] [i_7] [i_4]))))));
                                arr_28 [i_7] [i_4 - 1] [i_4] [i_4] [6] = ((/* implicit */long long int) (_Bool)1);
                                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-90))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
