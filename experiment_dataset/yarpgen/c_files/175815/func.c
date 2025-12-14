/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175815
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
    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)52))) ^ (min((((/* implicit */long long int) var_1)), (var_6)))))));
    var_21 = ((/* implicit */long long int) var_18);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((unsigned int) ((2260710840580392494LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) != (((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)11] [i_0] [i_2]))) : (arr_3 [i_0] [i_1]))))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_4);
                    var_22 = ((/* implicit */unsigned int) var_18);
                    arr_11 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? ((((~(1839631424U))) << (((((/* implicit */int) (signed char)-112)) + (125))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-121)))))))))));
                    arr_12 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((383795144U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (unsigned char i_4 = 4; i_4 < 13; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    var_23 |= ((/* implicit */signed char) var_10);
                    arr_21 [i_3] [i_4 - 3] [i_5] = ((/* implicit */long long int) 1931063788U);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)121))))) ? (5690876648092750167LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)115)) != (((/* implicit */int) (signed char)-21))))))))) || (((/* implicit */_Bool) arr_23 [i_7] [6U] [i_4] [i_4] [i_3]))));
                                arr_27 [i_7] [i_3] [i_5] [i_4 + 1] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)120))));
                                arr_28 [i_6 + 1] = ((unsigned int) (unsigned char)50);
                                arr_29 [i_3 + 2] [2LL] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((arr_25 [i_6 + 1] [i_4 - 3] [i_4 - 4] [i_3 + 1] [i_3 + 2]) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)111)) & (((/* implicit */int) (signed char)115))))))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) var_18);
                        var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(var_19)))) ? (((/* implicit */long long int) (~(arr_15 [i_5])))) : (((-1158165784787610567LL) + (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_8] [(unsigned char)7])))))))));
                    }
                    var_27 -= ((/* implicit */signed char) max((((((/* implicit */int) arr_14 [i_5] [i_4])) + (((/* implicit */int) (signed char)25)))), ((-((+(((/* implicit */int) (signed char)-115))))))));
                }
            } 
        } 
    } 
    var_28 ^= ((/* implicit */signed char) var_0);
}
