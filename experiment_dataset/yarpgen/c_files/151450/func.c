/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151450
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((max((var_10), (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) var_5)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] &= ((/* implicit */unsigned int) var_1);
                            var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_0 - 3]) < (arr_1 [i_1])))) >> (((max((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_3]))))))) - (14331960924020474171ULL)))));
                            var_14 = ((/* implicit */unsigned short) max((min((var_9), (arr_5 [i_1] [i_2] [i_3]))), (var_9)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((var_7), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */unsigned long long int) ((var_7) - (var_11)))) : ((-(max((var_4), (((/* implicit */unsigned long long int) var_3)))))))))));
                            arr_16 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((var_5), (var_5)));
                            arr_17 [i_0] = ((/* implicit */_Bool) max((max((arr_14 [i_0 - 2] [i_0 - 2] [i_1]), (arr_14 [i_0] [i_0 - 2] [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [8ULL] [i_0 - 4] [i_0])))))));
                        }
                    } 
                } 
                var_16 = ((min((arr_8 [i_0] [i_0 - 4] [i_0]), (((/* implicit */unsigned long long int) ((signed char) var_3))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_9 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_4);
                    arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_19 [0ULL]))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_20 [i_6])))) ^ ((-(var_7)))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / ((-(var_11)))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((arr_22 [i_6] [i_9]), (((/* implicit */unsigned short) var_6))))) >> (((((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7])) + (74)))))) : (min((((9223372036854775788LL) >> (((/* implicit */int) (_Bool)0)))), ((+(var_11))))));
                        var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) arr_22 [i_6] [(unsigned short)5])), (var_11))))) + (((long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_18 [i_6])))))));
                        var_22 = min((((/* implicit */long long int) var_3)), (var_9));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_33 [i_7] [i_10] [i_8] [i_7] [i_6] = ((/* implicit */signed char) ((((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                        var_23 = ((/* implicit */signed char) (-(var_2)));
                        var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_29 [i_6] [i_7] [i_7] [i_10])) ? (arr_25 [i_6] [i_7] [i_8]) : (((/* implicit */unsigned long long int) arr_29 [i_6] [i_6] [i_6] [i_6]))))));
                        var_25 = ((/* implicit */unsigned long long int) var_0);
                    }
                }
            } 
        } 
    } 
    var_26 = (-(var_9));
}
