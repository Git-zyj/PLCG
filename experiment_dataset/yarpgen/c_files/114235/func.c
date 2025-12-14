/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114235
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((unsigned int) var_2));
        var_18 = ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) (short)19401)) && (((/* implicit */_Bool) var_8))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [(short)2]))));
                    var_21 -= ((/* implicit */long long int) 1499021123U);
                    var_22 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6269135228996131175LL)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (signed char)102))))) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [3U])))))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_23 = ((/* implicit */short) ((int) arr_9 [i_3]));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_8 [(signed char)2] [i_3]))));
        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((-5694560922296943462LL), (((/* implicit */long long int) var_7))))))) ? (var_13) : (((/* implicit */int) arr_9 [i_3]))));
        /* LoopNest 3 */
        for (short i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 3; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) var_13);
                        var_27 += min((min((arr_10 [i_6 + 3] [(unsigned char)0] [i_4 - 2]), (arr_10 [i_6 + 1] [(unsigned short)0] [i_4 - 2]))), (arr_10 [i_6 + 1] [(unsigned short)2] [i_4 - 3]));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 13; i_7 += 1) 
                        {
                            arr_21 [i_3] [i_3] [(short)4] [i_3] [i_3] = (~((((_Bool)1) ? (min((((/* implicit */long long int) (signed char)114)), (824633720832LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64305)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) arr_7 [i_7 - 1]))))))));
                            arr_22 [i_7 - 2] [i_3] [i_5] [i_3] [7U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (arr_13 [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) arr_16 [i_7] [i_4] [i_5] [i_7] [i_7])) ? (arr_19 [i_3] [i_3] [i_4 - 1] [i_5] [i_6 - 3] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-18)) != (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])))))) <= (((((/* implicit */_Bool) (unsigned short)46114)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102))))))))));
                            arr_23 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */short) ((unsigned int) arr_11 [i_5] [(unsigned short)0] [i_3]));
                        }
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */int) min((15237103363868755254ULL), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((int) ((unsigned short) (unsigned char)83)))) > ((~(var_16)))));
        var_29 &= ((/* implicit */int) arr_20 [i_8] [(short)13] [i_8] [i_8] [i_8]);
    }
    var_30 = min((((/* implicit */long long int) ((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) >= (var_16)))))))), (var_5));
}
