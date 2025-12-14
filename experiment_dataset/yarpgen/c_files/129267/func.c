/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129267
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(var_7))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)12763))));
                                arr_14 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~((-((-(((/* implicit */int) (short)32767))))))));
                                arr_15 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))))))));
                                arr_16 [i_0] [i_1] [i_2] [10LL] [i_3] [2LL] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)12)))))))));
                            }
                            for (short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_5] [i_2] [(unsigned char)3])))))))));
                                var_15 = ((/* implicit */short) (+((~((-(((/* implicit */int) (short)-13998))))))));
                            }
                            for (short i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                            {
                                arr_23 [i_6] [i_6] [i_0] [7LL] [i_6] = ((/* implicit */long long int) (-((+((+(((/* implicit */int) (unsigned short)39669))))))));
                                arr_24 [i_0] [i_2] [i_1] [i_2] [i_2] [i_3] [i_0] = (+((+((-9223372036854775807LL - 1LL)))));
                                var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))));
                            }
                            for (short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)221))))));
                                var_17 = ((/* implicit */short) (+((~((-(arr_17 [(short)4] [i_1] [i_1] [i_1] [(short)7] [i_1] [i_1])))))));
                                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)0))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0]))))))))));
                            }
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224))))))))));
}
