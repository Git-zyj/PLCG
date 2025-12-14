/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108823
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */int) ((min((min((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1444100245)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) var_2))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                    var_15 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((int) arr_2 [i_0] [i_0] [i_2 + 1]))), (min((var_13), (((/* implicit */unsigned int) arr_7 [i_0] [(unsigned char)12] [(unsigned char)12] [i_1])))))), (((/* implicit */unsigned int) ((unsigned char) var_5)))));
                    var_16 += ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned int) ((unsigned short) ((short) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned short i_5 = 4; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((-749167884) | (((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_3])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))));
                    arr_18 [i_3] [i_4] [i_5] = ((/* implicit */long long int) 2147475456U);
                    var_17 -= ((/* implicit */int) max((((unsigned char) (_Bool)1)), (arr_15 [i_5 + 1] [i_5 - 4] [i_5])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_32 [i_7] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_13 [i_9])), (arr_6 [i_10] [i_8] [i_9])));
                                arr_33 [i_7] [i_10] = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6 + 1])))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_12 [i_7 + 1]), (arr_12 [i_6 + 1])))) == (max((max((var_7), (((/* implicit */unsigned long long int) arr_4 [i_6] [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_23 [i_6] [i_7 - 2]) : (((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (min((((/* implicit */unsigned long long int) var_1)), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_5)))))))));
    var_21 *= ((/* implicit */unsigned long long int) ((unsigned short) var_10));
}
