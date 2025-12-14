/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143283
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
    var_16 = ((/* implicit */unsigned short) ((var_8) / (((/* implicit */long long int) ((var_11) ? (max((529909750U), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)98)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((arr_0 [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_17 = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            arr_7 [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -500511551)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (unsigned short)43551))))))) + (((/* implicit */int) (short)-3133))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8064)))))));
                            var_19 = ((/* implicit */short) ((unsigned short) max((arr_11 [i_3] [i_1] [i_3 - 1] [i_3 - 1]), (((/* implicit */unsigned int) ((((/* implicit */long long int) 500511551)) < ((-9223372036854775807LL - 1LL))))))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
        }
        for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_12 [i_5 - 1] [i_0] [i_5 - 1] [i_0] [i_0] [i_0])))))) < (arr_17 [i_0] [i_5] [i_0])))) & (74467410)));
            arr_19 [i_0] = ((/* implicit */signed char) max((((arr_17 [i_0] [i_5] [i_0]) >> ((((-(3765057546U))) - (529909687U))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)43559)))))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_23 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) var_8);
                var_21 = ((/* implicit */_Bool) ((arr_0 [i_5 - 1]) ? (((/* implicit */int) max((arr_0 [i_5 - 1]), (arr_0 [i_5 + 1])))) : (((/* implicit */int) arr_0 [i_5 - 1]))));
            }
            for (unsigned short i_7 = 4; i_7 < 14; i_7 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_15))));
                            var_23 &= ((/* implicit */unsigned int) min((min((((/* implicit */short) ((signed char) var_3))), (min((arr_3 [i_7] [i_9]), (((/* implicit */short) arr_27 [i_0] [i_5 - 1] [i_7] [i_8] [i_9] [i_8])))))), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_7 - 2])) && (((/* implicit */_Bool) (unsigned char)119)))) && ((!(var_12))))))));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned char) arr_14 [i_0] [i_5 - 1] [i_5 + 1] [i_7]);
                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 4; i_10 < 14; i_10 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned short) var_13)))));
                var_27 = ((/* implicit */unsigned short) arr_5 [i_0]);
            }
        }
        arr_37 [i_0] = ((/* implicit */unsigned int) (-(max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_5))))));
    }
}
