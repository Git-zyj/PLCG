/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157821
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */short) var_11);
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((726696594577748844LL), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0]))) : (arr_0 [i_0 + 1])))) : (((((-726696594577748845LL) != (((/* implicit */long long int) var_13)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_1] [i_2] [i_5]))) ? ((-(((((/* implicit */_Bool) -726696594577748845LL)) ? (4063232U) : (var_9))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1])))))));
                                arr_19 [i_0] [(signed char)13] [i_6] [i_5] [i_6] [i_6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_17 [i_0] [i_0] [i_2] [i_5] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) % (((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min(((unsigned char)30), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-9028079625839114037LL))))))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_7 [i_1])))) : (726696594577748846LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        var_19 ^= ((/* implicit */short) var_14);
        arr_22 [i_7] = ((/* implicit */signed char) (unsigned char)51);
        var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_7]))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((unsigned int) (unsigned char)51)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) || (((/* implicit */_Bool) var_4))))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((~(((((/* implicit */long long int) 1140234370U)) / (-726696594577748834LL)))))));
}
