/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159344
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2]))))))))));
                                var_22 = ((/* implicit */_Bool) (~((+(4294967295U)))));
                                var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
        arr_12 [i_0] = (!((!((!(arr_9 [i_0]))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-((+(var_17))))))));
                var_27 = (+(((/* implicit */int) (!(var_5)))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                var_29 = ((/* implicit */signed char) (!((!((!(arr_16 [i_5 - 1] [i_5])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 4; i_7 < 10; i_7 += 3) 
    {
        for (signed char i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1))))));
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                            arr_29 [i_10] [i_10] [i_10] [(signed char)0] = ((/* implicit */unsigned char) (+((~(arr_17 [i_10 - 1] [i_10] [i_8 + 1])))));
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_10])))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) (+((~((+(32512)))))));
            }
        } 
    } 
    var_34 = ((/* implicit */int) (~(var_15)));
}
