/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173900
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) max((var_7), ((signed char)3)))), (arr_1 [i_0]))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) var_12))))) ? (((arr_3 [i_1]) | (arr_3 [i_0]))) : (arr_3 [i_0])));
        }
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_1 [(signed char)2]))));
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_7 [i_2] [2U] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [16ULL] [12U])) != (((/* implicit */int) arr_0 [22ULL] [14LL])))) ? ((+(((/* implicit */int) arr_0 [(signed char)4] [i_2])))) : (((/* implicit */int) var_14))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_7)))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) 3456081742247798508ULL);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) arr_3 [i_3])) || (((/* implicit */_Bool) var_8)))) ? (((int) var_1)) : (arr_2 [i_2] [i_3] [i_4])))));
                    arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */int) min((arr_1 [i_3]), (arr_1 [i_3])))) : (((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_3]))))));
                    var_25 = ((/* implicit */unsigned long long int) var_15);
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_3]), (((/* implicit */unsigned char) arr_0 [i_3] [i_4])))))) : (var_16)));
                    arr_16 [i_3] = ((/* implicit */unsigned int) (-(((var_12) + (arr_10 [i_2])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (arr_19 [i_5] [i_5]) : (arr_18 [i_5] [i_5])));
        var_28 = (~(((((/* implicit */_Bool) arr_19 [14ULL] [(unsigned char)2])) ? (arr_18 [i_5] [i_5]) : (arr_18 [(unsigned short)4] [i_5]))));
    }
    var_29 = ((/* implicit */unsigned long long int) var_8);
}
