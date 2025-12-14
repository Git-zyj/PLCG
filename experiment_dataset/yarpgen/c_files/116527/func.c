/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116527
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [17LL]))) | (9223371899415822336ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((signed char) (-((+(-6850644077982148283LL))))));
            var_18 = ((/* implicit */signed char) (+(max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_13))))))));
            var_19 = ((/* implicit */signed char) ((long long int) ((unsigned int) (unsigned char)84)));
        }
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + ((~(arr_2 [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */short) (~(((((/* implicit */int) var_5)) | (((/* implicit */int) var_5))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    arr_14 [i_2] = ((/* implicit */short) (((((-(((/* implicit */int) var_10)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned char)171)) + (((/* implicit */int) (short)32754)))) - (32897)))));
                    var_22 = ((/* implicit */unsigned int) ((unsigned char) var_9));
                }
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    var_23 = ((/* implicit */signed char) arr_10 [i_2] [i_2] [(signed char)2]);
                    var_24 -= ((/* implicit */unsigned char) max((1796713351U), (((/* implicit */unsigned int) (unsigned char)105))));
                }
                for (signed char i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) (((+(max((((/* implicit */unsigned int) var_10)), (var_11))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))));
                    var_26 += ((/* implicit */signed char) ((unsigned char) (short)15779));
                    var_27 ^= ((/* implicit */unsigned char) (+((~(arr_18 [i_6 + 1] [i_6 + 1] [i_6] [i_2 - 1])))));
                }
                var_28 *= ((/* implicit */short) (~(9223371899415822336ULL)));
                var_29 = ((/* implicit */_Bool) (-(max((((((/* implicit */unsigned long long int) arr_4 [i_2] [i_3] [i_3])) & (arr_11 [i_2] [i_3] [i_3]))), (((/* implicit */unsigned long long int) var_11))))));
            }
        } 
    } 
}
