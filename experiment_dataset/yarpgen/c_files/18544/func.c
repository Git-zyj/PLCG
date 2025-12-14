/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18544
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_0 [i_1] [i_2])), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_2])), (var_11))))) / (((((((/* implicit */_Bool) 2963785546U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (3138626861U))) << (((arr_3 [i_1]) - (4107720929U)))))))) : (((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_0 [i_1] [i_2])), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_2])), (var_11))))) / (((((((/* implicit */_Bool) 2963785546U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (3138626861U))) << (((((arr_3 [i_1]) - (4107720929U))) - (3680209646U))))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-((-(arr_2 [i_0] [i_1])))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]))));
                    arr_8 [i_1] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (-192267418) : (((/* implicit */int) (signed char)127))))));
                    var_20 = ((/* implicit */unsigned short) (~((~(-192267418)))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (unsigned short)0))), (((unsigned char) -1447163586))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 349085980U)) ? (0U) : (4294967290U)))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        var_22 = max((((/* implicit */unsigned int) arr_12 [9U])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) : (4294967281U))));
        var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3])))), (((((/* implicit */_Bool) min((var_9), (3048119767U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (unsigned char)64))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3])) || (((/* implicit */_Bool) 1447163586)))))))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        var_24 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((int) arr_12 [i_4]))) ? (var_15) : (arr_13 [i_4])))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_4]))))) : (2814030974U)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) arr_12 [20U])) ? (((int) arr_14 [18U])) : (((/* implicit */int) ((var_7) < (((/* implicit */int) (unsigned short)16376)))))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (var_12) : (((/* implicit */int) (unsigned short)49178))))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (3030935927U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4])))))));
            arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((arr_14 [i_4]) ? (arr_18 [i_5]) : (((/* implicit */unsigned int) 1577049511)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_9 [22U])))) && (((((/* implicit */_Bool) 1524057989)) || (((/* implicit */_Bool) var_15))))))))));
        }
        var_27 = ((/* implicit */int) ((unsigned int) var_16));
    }
    var_28 += ((/* implicit */long long int) var_3);
}
