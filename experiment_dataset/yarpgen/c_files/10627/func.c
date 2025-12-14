/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10627
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
    var_16 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 17767325616873715887ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43600))) : (3390862701469461131ULL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((((/* implicit */int) arr_1 [4LL] [i_0])) != (((/* implicit */int) (signed char)18)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_3] [i_3]))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned short)51668))) >> ((((+(((/* implicit */int) var_11)))) - (22665)))))) ? (max((((/* implicit */unsigned long long int) var_15)), (arr_8 [i_0] [(unsigned short)3] [(unsigned short)3] [16ULL] [16ULL] [(signed char)17]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_9 [13LL] [13LL] [i_2 - 1] [i_3]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
            var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (15687307837659389905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))) : (((((/* implicit */_Bool) (unsigned short)36737)) ? (2759436236050161710ULL) : (((/* implicit */unsigned long long int) -8987925424311899806LL))))))) ? (var_9) : (min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(15687307837659389928ULL)))))))));
        }
    }
    var_22 = ((/* implicit */unsigned char) 13239672330073676725ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_15 [i_4] = ((/* implicit */unsigned short) var_15);
                var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                var_24 = ((/* implicit */unsigned short) 2147483647);
            }
        } 
    } 
}
