/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161943
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2301579532U))) ? (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) ((unsigned char) (unsigned char)153)))))), (var_14)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) ((max((min((var_15), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (3221225472U) : (((/* implicit */unsigned int) arr_2 [(signed char)14]))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)89)))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((arr_5 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 3]), (((/* implicit */unsigned long long int) (unsigned char)238)))))));
                    var_23 = var_15;
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_24 = ((/* implicit */int) 4186329731U);
                        var_25 = ((/* implicit */unsigned short) ((((5U) ^ (4026131844U))) == (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)4088)))) | (((/* implicit */int) (unsigned char)249)))))));
                        var_26 = ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_27 = ((/* implicit */int) ((unsigned long long int) 5423071199937269614ULL));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned int) (+((+(arr_2 [i_0])))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (5U) : (((/* implicit */unsigned int) arr_2 [i_4]))))))))));
                            var_29 ^= ((/* implicit */unsigned int) var_8);
                            var_30 = ((/* implicit */unsigned char) arr_6 [i_0]);
                            var_31 = var_19;
                        }
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (+((~(268835454U))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) 2368141289U)) * (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */long long int) var_16)) : (3975874925727748357LL)))))));
                                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (var_11) : (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_2] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) : (max((((/* implicit */unsigned int) var_0)), (var_19)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6ULL))))) : (((/* implicit */int) ((signed char) (unsigned short)0)))));
                                var_35 ^= ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_13 [i_0] [i_1 - 2] [(unsigned char)10] [18] [i_7])));
                                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) -2347219125973689653LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
