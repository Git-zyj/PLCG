/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181023
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(-3701974472826656842LL))))));
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)178), (((/* implicit */unsigned char) var_4)))))))) % (((/* implicit */int) (unsigned char)184))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_17 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) 799011153))))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (445320024U)))) ? ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (short)7934))))) : (((/* implicit */long long int) ((arr_11 [i_3] [i_3] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (var_8)))));
                arr_17 [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) - (var_9)))) >= (var_11)));
            }
            var_20 ^= ((/* implicit */unsigned short) var_5);
            arr_18 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_4]))));
            arr_19 [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_14)))))));
            var_21 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1706163923U)) ? (((/* implicit */int) (unsigned char)170)) : (1637983502))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (9)))));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_3] [i_6] = arr_11 [i_8] [i_8] [i_7];
                            arr_31 [i_7] |= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (signed char)10)) & (((/* implicit */int) (_Bool)1)))))));
            arr_32 [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_6] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) : (1569662848U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
        }
        for (int i_10 = 3; i_10 < 24; i_10 += 2) 
        {
            var_23 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) & (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)11514))))));
            var_24 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(var_4))))));
        }
        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_9)));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11507)) ? (((/* implicit */int) (unsigned short)32501)) : (1294020391)));
        }
        arr_39 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)184))));
    }
}
