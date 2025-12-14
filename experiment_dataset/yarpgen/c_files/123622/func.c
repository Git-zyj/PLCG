/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123622
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-124)) ^ (var_14)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0] [(unsigned short)6]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_19 = (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(arr_11 [(unsigned char)4]))))));
                                var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_2]);
                                arr_14 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1 - 1] [i_2] [i_3] [i_4] [i_0]))))))))));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */int) ((unsigned char) arr_5 [i_1]))) : (((int) arr_8 [i_0] [i_3] [i_4])))))));
                                var_22 += ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1])) && (((/* implicit */_Bool) var_0)))) ? ((-(var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_4] [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) min((var_23), ((+(((((/* implicit */_Bool) (+(arr_5 [(unsigned char)18])))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0]), (arr_0 [i_1] [i_1])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1] [(signed char)10] [i_2 + 2]))));
                                var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [(signed char)9] [i_5]))));
                                var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_13) ^ (((/* implicit */int) (unsigned short)62293)))), ((~(var_14)))))) ? ((+(((/* implicit */int) arr_8 [i_1] [i_0 - 1] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_0] [i_5] [2LL] [i_1 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)18])) && (((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_6])))))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_5 [i_0 - 2])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)162))) : (((/* implicit */int) (signed char)-90))));
                                var_28 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */int) ((signed char) var_2)))));
}
