/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168730
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_17 += ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (262143LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (min((((/* implicit */long long int) arr_1 [i_0 - 1])), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)255)))))))));
        var_18 = ((short) (unsigned char)255);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_6);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned char)0))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))));
        arr_5 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1 - 1])) >= (((/* implicit */int) arr_1 [i_1 + 1]))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_8 [i_2] = var_10;
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(unsigned char)12] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2]))))) : (min((-6147524015631695133LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9025)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_7 [i_2] [i_2])))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) var_8);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) arr_6 [i_4 + 2])), (1799947067920457247LL))));
                    arr_17 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((1799947067920457247LL), (((/* implicit */long long int) arr_13 [i_4 - 1] [i_3]))))) ? (((/* implicit */int) (unsigned char)170)) : ((~(((/* implicit */int) ((unsigned char) (unsigned char)221)))))));
                    var_20 = ((((/* implicit */_Bool) ((-1799947067920457248LL) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (min((((/* implicit */unsigned long long int) ((signed char) (short)(-32767 - 1)))), (var_1))));
                    arr_18 [i_2] = ((/* implicit */unsigned short) min(((-(min((((/* implicit */unsigned long long int) arr_11 [i_3])), (15349149558850860009ULL))))), (((/* implicit */unsigned long long int) min((-21LL), (((/* implicit */long long int) (unsigned char)0)))))));
                    var_21 = min((((/* implicit */long long int) arr_7 [i_2] [i_2])), (-7662006864198187516LL));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        arr_25 [i_2] [i_2] = ((/* implicit */long long int) var_13);
                        var_22 = (-(max((((/* implicit */unsigned long long int) ((18446744073709551594ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_2] [i_5] [i_2])))))), (max((((/* implicit */unsigned long long int) arr_19 [i_2] [i_5] [i_2])), (12088784145218012556ULL))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_1)))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_8 - 1]))) : (((/* implicit */int) ((short) 20ULL)))));
                            var_24 -= ((/* implicit */signed char) max((((unsigned long long int) max((1799947067920457241LL), (20LL)))), (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */short) arr_11 [i_2])))))));
                            var_25 = ((/* implicit */short) min((-1799947067920457248LL), (1799947067920457247LL)));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) max((max((18446744073709551594ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))), (((unsigned long long int) var_16))));
}
