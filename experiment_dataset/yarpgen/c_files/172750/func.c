/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172750
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
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) ((8U) == (4294967293U)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 131071U)), (arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)0] [i_1 + 1]))) ^ (13U))), (((/* implicit */unsigned int) ((arr_2 [i_1] [i_1 + 1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [(signed char)18] [i_1 - 2])))))));
            var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
        }
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) (~(min((arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) arr_2 [i_2 + 1] [i_2]))))));
            var_18 = ((/* implicit */_Bool) ((unsigned short) min((((signed char) arr_3 [i_0])), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)13]))) <= (arr_0 [i_0])))))));
            arr_6 [15U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3162473017U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)121)))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)5]))) | (arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) arr_5 [i_0])))));
            arr_7 [i_2] [i_0] = ((unsigned long long int) ((int) ((4294967288U) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_19 += ((((/* implicit */_Bool) arr_8 [i_4] [i_3 - 1] [i_2] [6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [i_3 + 4]))) : (((min((((/* implicit */long long int) 4294967275U)), (arr_10 [(signed char)6] [i_3]))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [(unsigned short)6] [(unsigned short)6] [i_3] [(unsigned short)6]))))))));
                            var_20 = ((((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) 4294967276U)), (-14LL)))))) | ((((!(((/* implicit */_Bool) arr_5 [i_0])))) ? ((~(arr_12 [i_2 - 1]))) : (((/* implicit */unsigned long long int) min((4294967284U), (((/* implicit */unsigned int) var_9))))))));
                        }
                    } 
                } 
            } 
        }
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_4))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((((/* implicit */int) (signed char)58)) ^ (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((signed char) var_2)))))));
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_10))));
}
