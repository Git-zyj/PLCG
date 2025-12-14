/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159876
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
    var_19 = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)183)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) & (1504253564U)));
                                arr_13 [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */int) (unsigned char)58)), ((+(((/* implicit */int) (short)-21514))))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((var_7) >= (var_18))))) | ((+(var_10))))) == ((-(((var_4) | (var_10)))))));
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) (+((~((-(((/* implicit */int) (short)21512))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_23 = (+(2559180478U));
                                var_24 = ((/* implicit */short) var_17);
                                var_25 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    arr_23 [i_0] = ((/* implicit */unsigned long long int) max(((+(var_7))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)171)))))));
                    arr_24 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) <= (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                    arr_25 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((var_9), (var_2)))))) && (((/* implicit */_Bool) ((var_6) >> (((var_13) - (1031855481558419091ULL))))))));
                    var_26 = ((/* implicit */signed char) (+(max(((+(var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))));
                }
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned char i_10 = 1; i_10 < 21; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_5))))));
                            arr_31 [i_0] [i_9] = ((/* implicit */unsigned int) min(((-(var_13))), (((/* implicit */unsigned long long int) ((var_8) << (((((/* implicit */int) var_11)) - (51))))))));
                            arr_32 [i_0] [i_0 - 1] [i_1] [i_9] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-99))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_16)), (var_17))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) var_12);
    var_30 = ((/* implicit */unsigned int) min(((-(var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-21439)) <= (((/* implicit */int) (signed char)48))))) > ((-(((/* implicit */int) var_1)))))))));
}
