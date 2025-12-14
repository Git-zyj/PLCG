/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121818
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
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (+((+((+(((/* implicit */int) (signed char)113))))))));
                                arr_13 [5LL] [i_3] [i_0 + 3] [i_2] [(unsigned char)2] [i_0 + 3] [i_0 + 3] = ((/* implicit */short) (-((-((~(arr_4 [i_0 - 3] [i_4])))))));
                                arr_14 [i_2] [i_1] [i_2] [9] [i_4] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (signed char)25))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_5 = 2; i_5 < 6; i_5 += 1) 
                {
                    arr_17 [i_0 - 3] [(unsigned char)2] [(signed char)0] |= ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)113))))));
                    var_16 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_2 [(signed char)5]))))));
                    arr_18 [i_5] [(signed char)4] [i_5 - 1] = ((/* implicit */_Bool) (-((-(var_14)))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) (-((-((+(-2133427385071282066LL)))))));
                    arr_21 [i_0 + 3] [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)-113)))))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) (-((+((~(-2005563263)))))));
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1305477414354661521LL))));
                    arr_25 [i_7] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-29956))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_20 = (!(((/* implicit */_Bool) (short)29956)));
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                    }
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+((-((+(((/* implicit */int) (_Bool)0))))))));
    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
    var_24 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)121)))))))));
}
