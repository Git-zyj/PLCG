/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10456
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
    var_18 = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) var_11))))))));
    var_19 = ((/* implicit */unsigned short) (-((-((-(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 - 1] [i_1] [(unsigned short)4] [i_0 - 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) arr_11 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0])))))))));
                                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!((_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) (-((~((-(((/* implicit */int) var_11))))))));
                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))));
                arr_17 [(unsigned char)0] |= ((/* implicit */long long int) (-((+((~(var_4)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [(unsigned char)10] [i_1] [(unsigned char)9] = ((/* implicit */unsigned long long int) (~((~((-(var_13)))))));
                                arr_27 [i_0 - 1] [i_5] [i_5] [(signed char)6] [(unsigned short)10] [i_0] [i_6] &= ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)43237))))))))))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)22299)))))))));
                                var_25 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
