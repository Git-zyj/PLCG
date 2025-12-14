/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121200
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
    var_10 *= ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0])));
        var_11 = ((/* implicit */unsigned long long int) -8889795581289001599LL);
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */unsigned char) var_0);
        var_12 *= arr_6 [(unsigned char)12];
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_9 [i_1] [i_1]) << (((((((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1])) / (((/* implicit */int) arr_7 [i_1])))) + (256)))))) : (((/* implicit */unsigned char) ((arr_9 [i_1] [i_1]) << (((((((((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1])) / (((/* implicit */int) arr_7 [i_1])))) + (256))) - (287))))));
                    var_13 = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 8)) : (4087678077U)));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_23 [i_1] [i_4] [i_5] [i_6] [i_1] [i_7] = (-(arr_14 [i_4]));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((arr_18 [i_1] [i_1 + 1] [i_4] [0U] [i_1]) / (arr_18 [i_1] [i_1 + 2] [i_7] [i_1] [i_1]))) / (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)100)) ? ((-(((/* implicit */int) arr_17 [i_5] [i_1] [i_5] [i_5 + 1])))) : ((-(min((var_0), (((/* implicit */int) var_8))))))));
                                var_17 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_18 = arr_21 [i_9] [i_8] [i_8] [i_5] [9LL] [9LL];
                                var_19 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned char)168)))) - (((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)43249)))))) | (((((((/* implicit */_Bool) arr_18 [i_9] [i_8] [i_1] [(unsigned short)3] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) ((_Bool) arr_27 [i_1] [i_1 + 1] [i_1] [i_1] [11] [i_1 + 1] [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_4)))) : (((/* implicit */int) ((var_5) > (var_5)))))), (((/* implicit */int) max((var_2), (((/* implicit */short) ((unsigned char) var_9))))))));
    var_21 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((var_6), (var_2)))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1737695586072847216LL)))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (((((/* implicit */_Bool) var_0)) ? (8889795581289001599LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), ((-(84868288941324510LL)))))));
}
