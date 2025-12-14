/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157618
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
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_13 -= ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (unsigned char)249)) : (arr_1 [i_0]));
        var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)24))))) ? (((((/* implicit */_Bool) (unsigned short)13269)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_3)) : (arr_0 [i_0] [i_0])))) : (var_10))) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0])));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0 - 3]), (((/* implicit */int) (signed char)-71))))) ? (((var_10) % (((/* implicit */unsigned int) -579394850)))) : (((/* implicit */unsigned int) -1758191868))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)40905)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_0)))) - (58)))))) : ((-(var_7)))));
        var_16 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_1 [i_0 + 2])), (var_12))), (((unsigned int) arr_1 [i_0 + 3]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) var_5);
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) % (var_12))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_19 = arr_7 [i_2] [i_2] [i_1];
                    arr_10 [i_1] [(signed char)0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((var_12) > (4294967295U))) ? (((/* implicit */unsigned int) arr_9 [i_2 - 2] [5] [i_2 - 1] [i_2])) : (arr_2 [i_2 - 2])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-71)) ? (-8783726960934382118LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)72)))));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_21 = ((unsigned int) 1758191868);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_4 [i_4 + 1])) : (((/* implicit */int) (signed char)109))));
            }
            for (int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                var_23 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
                var_24 = ((/* implicit */int) var_8);
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) (~(arr_3 [(unsigned char)24] [i_4])))) : (arr_17 [i_4] [i_1])));
            }
            for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) arr_8 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4]);
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) 3492219081U)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (unsigned char)92)))) % (((/* implicit */int) (unsigned short)1)))))));
                var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) arr_14 [i_1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_14 [i_1] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) (unsigned char)24))))));
                var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2])) ? (arr_12 [i_4 + 2] [i_4 - 1] [i_4 + 1]) : (((/* implicit */long long int) arr_15 [i_1] [i_4 + 2] [i_4 + 2] [i_1]))));
                var_30 = ((/* implicit */signed char) ((8783726960934382118LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29503)))));
            }
            /* LoopNest 2 */
            for (signed char i_8 = 4; i_8 < 21; i_8 += 3) 
            {
                for (signed char i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_31 += ((/* implicit */signed char) 9223372036854775807LL);
                        var_32 = ((/* implicit */unsigned int) (~(577619484289151098LL)));
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
            arr_26 [i_1] [6LL] [i_1] &= ((/* implicit */signed char) arr_21 [i_1] [i_1]);
        }
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            arr_31 [i_1] [i_1] [i_1] = arr_22 [i_1];
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                arr_34 [16U] = ((/* implicit */int) ((((/* implicit */_Bool) 845575710)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28467)))));
                arr_35 [i_1] [i_10] = ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_10] [i_1]))) : (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10]))) : (4358255367447827677LL))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (~(arr_12 [6LL] [i_10] [i_1]))))));
            }
        }
    }
    for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        var_34 = max(((-(256077764U))), (((/* implicit */unsigned int) (signed char)127)));
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [2U] [i_12] [i_12])) >= (arr_3 [i_12] [i_12]))) || (((/* implicit */_Bool) var_3)))))));
    }
    var_36 += ((/* implicit */unsigned int) (unsigned char)80);
}
