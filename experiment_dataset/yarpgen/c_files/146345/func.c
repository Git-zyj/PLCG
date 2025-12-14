/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146345
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
    var_19 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_9))))));
                var_21 = ((/* implicit */long long int) 4294967295U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_15 [i_2] = ((/* implicit */long long int) (unsigned short)43921);
                                arr_16 [i_4] [i_2] [i_6 - 1] [i_5 + 1] = ((/* implicit */long long int) var_14);
                                var_22 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_5]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((_Bool) (unsigned short)63)))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_2 - 1]) >> (((var_18) - (436289010906858246ULL)))))) : (arr_6 [i_3] [i_7])));
                    arr_20 [i_2] [(short)10] [i_2] |= max((((((/* implicit */_Bool) ((unsigned int) arr_17 [(unsigned short)0] [2U] [i_7]))) ? (((2659796930U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)6622))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19501))))), (((/* implicit */unsigned int) (unsigned short)43921)));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_24 ^= (-(((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_16))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) arr_4 [i_2 + 1]);
                                arr_29 [i_2] [i_3] [i_8] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) arr_26 [i_3] [(_Bool)1] [i_8] [(_Bool)1] [i_10] [i_2]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_2] [(_Bool)1] [i_11])) << (((((/* implicit */int) var_10)) - (46470)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) var_3)))));
                    var_27 = ((/* implicit */long long int) var_2);
                }
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_35 [i_2] [i_3] = ((/* implicit */short) ((unsigned short) var_18));
                    arr_36 [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (unsigned short)11857))))) ? (min((arr_19 [i_3] [i_3]), (((/* implicit */unsigned long long int) 187191818U)))) : (((/* implicit */unsigned long long int) min((arr_0 [i_2 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_12] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_12]))))))))));
                }
                var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(short)14])) & (((/* implicit */int) (unsigned short)65275))))) ? (((/* implicit */int) ((unsigned short) arr_30 [i_2 + 2] [(unsigned short)6] [(unsigned short)4]))) : (((/* implicit */int) (short)-19836))));
            }
        } 
    } 
}
