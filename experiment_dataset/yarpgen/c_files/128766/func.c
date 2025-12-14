/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128766
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)4238))))))) ? (((/* implicit */int) arr_1 [i_1] [i_1 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [(unsigned short)19])), (((unsigned char) (unsigned char)0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_0))));
                                var_15 = ((/* implicit */unsigned char) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_7 [i_1 + 1] [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_2)))))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_2 + 1])), ((unsigned short)61301))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)12561))));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            arr_19 [17U] [i_0] [15U] [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_1)));
                            arr_20 [i_0] [i_0] [i_2 + 2] [i_0] [i_0] [i_6] = ((/* implicit */signed char) arr_11 [i_0] [i_2] [i_0]);
                            arr_21 [i_0] [i_1] [i_0] [i_2] [i_0] [i_5 + 1] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_1] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (short)-14990))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [(unsigned char)1]))) : (var_4)))));
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5] [i_6] = ((/* implicit */signed char) (+(arr_4 [1] [i_0] [i_2])));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) arr_8 [i_7 - 1] [i_1] [i_0]);
                            arr_25 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = ((/* implicit */long long int) 5406728374361537824ULL);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 4203283557U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_5] [i_8]))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                            arr_29 [i_0] [i_1 + 1] [i_0] [i_5] [(unsigned char)20] &= ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */int) (~((~((~(var_5)))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [(unsigned char)14])) ? (((((/* implicit */_Bool) var_1)) ? (arr_26 [i_0] [i_0] [i_9] [i_0] [i_1] [i_1] [i_1 + 1]) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_17 [i_1 + 1] [i_2] [i_2 + 1] [i_9] [i_2 + 1]), ((unsigned char)239))))));
                        arr_33 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 + 2] [i_1 + 1])) ? (var_7) : (((/* implicit */unsigned int) arr_12 [i_0]))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [(unsigned short)12] [i_1])) ? (((/* implicit */int) ((_Bool) var_9))) : ((~(((/* implicit */int) var_8)))))))))));
                    }
                }
            } 
        } 
    } 
}
