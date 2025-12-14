/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123838
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */signed char) (-((-(min((((/* implicit */unsigned int) var_0)), (var_11)))))));
                    arr_9 [i_1] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_9))))) ? (((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_3] [i_3] [i_5] [i_6] [i_5 - 1] [i_5] = ((/* implicit */unsigned int) min((var_2), (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : (var_8)))));
                        var_16 |= (!(((/* implicit */_Bool) (+(((var_5) ? (var_2) : (((/* implicit */unsigned long long int) var_11))))))));
                        var_17 = ((/* implicit */unsigned int) var_9);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_6)))))))));
                        var_19 *= ((/* implicit */signed char) (-(((var_5) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (~(var_1)))) : ((-(var_7))))))));
                            arr_25 [i_8] [i_4 - 1] [i_5] [i_7] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1869672767U)) ? (-163611519920661153LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63714)))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))))))));
                            arr_29 [i_3 + 2] [(signed char)8] [i_5] [i_5] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                            var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
                        }
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-((+(((/* implicit */int) var_6)))))))));
                            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), ((~((+(var_8)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((~((-2147483647 - 1)))), ((~(((/* implicit */int) var_5)))))))));
                                arr_40 [i_3] [i_4] [i_12] [i_12] [i_13] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                                var_28 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))))));
                                var_29 |= ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_10)) ? (var_8) : (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned int) max((var_30), (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_6))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_4))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
    var_31 *= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_3)))))) ? (((((/* implicit */_Bool) ((var_6) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8))))) : (max((min((var_2), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_5))))));
}
