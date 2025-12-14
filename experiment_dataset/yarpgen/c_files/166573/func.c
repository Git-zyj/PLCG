/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166573
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (~((-(22023743676258922LL)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) 2876635490U)), (var_1)))))) ? (((/* implicit */unsigned long long int) ((int) min(((_Bool)1), (var_6))))) : (min((min((var_5), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_2 [i_3])), ((unsigned char)127))))))));
                        arr_16 [i_1] [i_2] [i_2] [i_2 + 1] [5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4])) ? (var_13) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
                        var_19 = (-(min((((/* implicit */unsigned int) 905091150)), (arr_6 [i_2 + 1]))));
                        var_20 = max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned long long int) 22023743676258922LL)))))), (min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) arr_8 [i_1])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_21 -= ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) var_15)), (905091141)))), (max((((/* implicit */long long int) arr_18 [i_1] [i_5] [i_5])), (var_16)))));
            var_22 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_18 [i_5] [i_5] [i_1])), (var_1)))));
            arr_19 [i_1] [1U] [i_5] = var_13;
            var_23 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -1407705186)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned short)0] [i_5] [i_5] [3U] [i_5]))) : (var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_6)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 4; i_7 < 11; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_0 [i_1]);
                    arr_26 [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_5))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))));
                }
                var_25 &= ((/* implicit */unsigned char) ((_Bool) var_8));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)86)) ? (1389766688U) : (((/* implicit */unsigned int) 905091179))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (4294967295U) : (var_7)));
            }
        }
        arr_27 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_0 [i_1])) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (7445670273714922289LL)))) ? (((((/* implicit */long long int) 905091150)) + (-22023743676258926LL))) : (262143LL)))));
        arr_28 [i_1] [10ULL] &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
    }
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 12; i_9 += 4) 
        {
            var_28 -= ((/* implicit */unsigned int) var_5);
            arr_33 [i_9] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 271729214U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16)));
        }
        var_29 -= ((/* implicit */unsigned int) var_12);
        arr_34 [i_8] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((signed char) arr_31 [i_8]))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_29 [i_8]))))));
        var_30 *= arr_25 [i_8] [4ULL] [i_8] [i_8] [1U];
        var_31 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */int) ((short) var_17))) : ((+(((/* implicit */int) (_Bool)1)))))));
    }
    var_32 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (9037303861059195343ULL)))) ? (min((((/* implicit */unsigned int) var_3)), (var_9))) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3364))) : (var_13)))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) var_4))))))));
}
