/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176775
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))))));
        var_18 &= (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31796))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)24073))))) & (1710742999U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [(unsigned short)6])) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [9])) : (((/* implicit */int) var_16)))))))));
                arr_12 [i_1] [i_1] [i_1] [i_1] = 1752986731954507191LL;
                var_19 = ((/* implicit */unsigned int) -1752986731954507192LL);
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_9 [i_1]))));
            }
            arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (3519851978884370708ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)52770)) : (var_0))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) ((unsigned int) (_Bool)1)))) : (845417328)));
        }
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_21 = arr_4 [i_4] [i_5];
                var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_0 [i_5])))));
            }
            arr_19 [i_4] [i_4] &= ((/* implicit */long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19226))) : (((unsigned int) arr_2 [i_1] [i_1]))));
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))) / (arr_14 [i_1]))));
        }
        var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3144465736U))));
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (min((658160899U), (var_12))) : (36802212U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)26684)), (min((((/* implicit */unsigned int) var_14)), (arr_4 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1]))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) arr_6 [i_6] [i_6]);
            var_26 = ((/* implicit */unsigned short) ((((3519851978884370718ULL) * (((/* implicit */unsigned long long int) 3144465767U)))) << (((var_5) - (3135335183U)))));
            arr_25 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_1])))))) <= (max((((/* implicit */int) (_Bool)0)), ((-2147483647 - 1))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) var_9);
                var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) ((min((8518597217723360071ULL), (((/* implicit */unsigned long long int) (unsigned short)59656)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_6]))))))))) ? (((((((/* implicit */unsigned long long int) var_8)) < (arr_1 [i_1]))) ? ((~(arr_6 [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_1])) < (36028797018962944LL))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6])))));
                var_29 = ((/* implicit */unsigned long long int) ((signed char) (((~(arr_26 [i_1] [i_7 + 1]))) <= (((((/* implicit */_Bool) arr_1 [i_6])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_1]))))))));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_30 += ((/* implicit */unsigned int) 1752986731954507209LL);
            var_31 = 1640955698620841516ULL;
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_3 [i_1])))) ? ((~(arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
        }
    }
    var_33 = ((/* implicit */unsigned char) var_10);
    var_34 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (short)11680))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)127)) : (var_0)))) : (((long long int) 9812837942712210797ULL))))));
    var_35 = var_9;
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (signed char)35)))) : ((~(((/* implicit */int) var_14))))));
}
