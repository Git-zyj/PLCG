/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188021
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)8))));
                        arr_11 [i_0] [i_0] [i_0] [21U] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) (signed char)-9)))));
                        arr_12 [i_0] = ((/* implicit */signed char) (+(2103296013U)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
                    arr_19 [i_0] [i_4] [i_4] = var_0;
                    arr_20 [i_4] [i_4] = arr_15 [i_4];
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6))));
                        arr_23 [i_0] [i_4] [i_5] = ((/* implicit */long long int) min((max((arr_14 [i_4]), (arr_14 [i_4]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)0)))))));
                        var_22 *= ((/* implicit */signed char) (+(1330679082U)));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (max((min((arr_7 [i_0] [(signed char)2]), (((/* implicit */long long int) arr_14 [i_6])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_4]))))))))))));
                    }
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)18))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) >= (min((((/* implicit */long long int) arr_13 [i_0] [(unsigned short)6] [i_0])), (arr_7 [21U] [i_0])))))) : (((/* implicit */int) (signed char)-18))));
        var_24 &= ((/* implicit */signed char) arr_7 [i_0] [i_0]);
    }
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
    var_26 = ((/* implicit */unsigned int) var_5);
    var_27 = ((/* implicit */unsigned int) min((var_27), ((+(33554424U)))));
}
