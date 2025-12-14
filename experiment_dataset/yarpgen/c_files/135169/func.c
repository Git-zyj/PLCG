/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135169
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 13LL))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((-(arr_8 [22ULL] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 + 1]))) - (((arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) + (arr_8 [3] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 1]))))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [16U] [i_0])) ? (30720) : (arr_6 [i_0] [(unsigned char)14])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -58387893277386767LL)) || (arr_0 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967282U)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))))))));
                        arr_9 [i_0] = ((int) (~(min((((/* implicit */unsigned int) -30740)), (arr_7 [i_0])))));
                        var_20 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2047LL) == (((/* implicit */long long int) 33554431)))))) == (223965457U))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((arr_5 [i_0]) / (arr_4 [i_2] [i_2] [i_2])));
                        var_22 = ((/* implicit */unsigned long long int) ((_Bool) 24576U));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [(_Bool)1]))));
                            var_24 -= ((/* implicit */unsigned long long int) (+(arr_10 [(unsigned char)20] [i_2] [i_2] [i_2])));
                        }
                    }
                    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) 576460752269869056LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : ((~(arr_8 [i_0] [i_0] [i_2] [i_0] [i_1]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))))))));
                    var_26 = ((/* implicit */int) (+(max((((/* implicit */long long int) arr_2 [10ULL])), (13LL)))));
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((unsigned int) (-(var_2))))));
    var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            {
                var_29 = ((/* implicit */int) (((~(9223372036854775807LL))) == ((-(((((/* implicit */_Bool) 16U)) ? (arr_16 [9ULL] [i_6]) : (3338429510457769595LL)))))));
                var_30 -= ((/* implicit */_Bool) max((((long long int) (_Bool)1)), (((/* implicit */long long int) -33554435))));
                arr_21 [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_7 + 2] [i_7 + 2] [i_6] [i_7 - 1])) || (((/* implicit */_Bool) arr_12 [i_6] [i_7 - 1] [i_7 - 1] [i_7])))))));
            }
        } 
    } 
}
