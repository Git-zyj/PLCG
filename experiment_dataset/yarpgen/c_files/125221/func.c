/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125221
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
    var_17 |= var_7;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned int) (unsigned char)255);
                        var_19 *= ((/* implicit */unsigned int) ((unsigned char) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4271778421U)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (signed char)-28))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3]))))) ? (((8388607) ^ (((/* implicit */int) (short)-32748)))) : ((-(((/* implicit */int) (short)-32767))))));
                    }
                    var_21 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((arr_5 [(short)2] [i_1] [i_1 - 1]) ? (var_1) : (((/* implicit */int) (short)-31062))))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54))))) % (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)232))))));
                }
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_13 [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)-32748), (((/* implicit */short) (unsigned char)255))))) ^ (((/* implicit */int) arr_8 [i_0] [i_0])))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned char) 2195895365460360678ULL)))));
                    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_4]))))) : (max((((17529643753992307286ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4]))))), (((/* implicit */unsigned long long int) var_8))))));
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (((-(arr_6 [i_0] [i_0] [i_0] [i_4]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-21413))))))));
                    arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)32767)) <= (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_1 + 2] [i_0]))))))) ? (max((((unsigned int) 2582602953088407681ULL)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_4] [i_1] [i_0])) % (((/* implicit */int) (short)-2141))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [(unsigned char)12] [i_1] [13ULL])) : (((/* implicit */int) (unsigned char)117)))) * (((/* implicit */int) min((var_8), (var_16)))))))));
                }
                arr_15 [i_1] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) arr_8 [9U] [9U]);
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_4 [1U] [1U]))))))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) ((unsigned char) ((917100319717244333ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210)))))))));
            }
        } 
    } 
}
