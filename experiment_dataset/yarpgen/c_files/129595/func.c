/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129595
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
    var_11 = ((/* implicit */unsigned int) (_Bool)1);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17007051824184112336ULL)) ? (-764641770) : (268435448)))) ? ((((-(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_1 - 1] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((268435448), (((/* implicit */int) (short)-28135))))))) ? (max((var_9), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [i_0])))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) var_10);
                        var_14 = ((/* implicit */long long int) ((arr_9 [i_4 - 1] [i_1 + 2] [i_0 + 1]) ^ (((/* implicit */unsigned int) arr_0 [i_2] [i_0 + 2]))));
                        arr_15 [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) -268435449)) && (((/* implicit */_Bool) 0))))) / (((/* implicit */int) (short)(-32767 - 1)))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_2] [i_1 + 2] [i_0])) && (((/* implicit */_Bool) (+(var_3))))));
                    }
                    arr_16 [i_0] = ((/* implicit */signed char) arr_12 [i_3] [i_2] [i_1] [i_0]);
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    for (int i_6 = 4; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_11 [i_6] [i_6 + 1] [i_2] [i_2] [i_1 + 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((-5087374760167198163LL) / (arr_17 [i_6 - 4] [i_2] [i_2] [i_0 + 1]))))))))));
                            var_17 = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) 4062754649U)) ? (var_9) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_11 [i_6 + 2] [i_5] [i_0] [i_0] [i_0 + 1] [i_0 + 2]))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1 + 3] [i_0] = ((/* implicit */long long int) var_5);
            }
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                arr_25 [i_0] [i_1 - 1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_7]))));
                var_18 *= ((/* implicit */unsigned short) arr_14 [i_7] [i_7 - 2] [18U] [i_7 - 2] [i_7 - 1]);
            }
            var_19 = ((/* implicit */unsigned char) var_9);
        }
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((+(1892795013)))))) < (((17007051824184112336ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)20941))))), (((long long int) var_5))))));
                        arr_37 [i_9] [i_10] [i_9 + 2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 + 2])) ? (arr_35 [i_9 - 1] [i_9] [i_9]) : (((/* implicit */int) arr_8 [i_9 + 2] [i_9 + 1] [i_9] [i_8]))))) ? (268435448) : ((-(((/* implicit */int) var_8))))));
                        arr_38 [i_9] [i_9] = ((/* implicit */signed char) var_3);
                        var_22 = ((-1100586099) ^ (268435448));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_12 = 2; i_12 < 12; i_12 += 3) 
        {
            arr_41 [i_12] [i_12] = ((/* implicit */int) ((unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_26 [i_12 - 2])))))));
            var_23 -= ((/* implicit */unsigned long long int) var_1);
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            arr_44 [i_13] [i_8] = ((/* implicit */unsigned int) ((arr_39 [i_13] [i_8] [i_8]) < (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 0)) : (13062167130625363251ULL)))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_13])) ? (((/* implicit */int) arr_7 [i_8] [i_13] [i_8])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_42 [i_13] [i_8])) : (((/* implicit */int) arr_19 [i_13] [i_8] [i_8] [i_8] [i_8])))))));
            var_25 = ((/* implicit */signed char) (+(3686360020U)));
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_13] [i_8])) < (((/* implicit */int) var_10))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            arr_47 [i_8] = ((/* implicit */long long int) (-(arr_13 [i_14] [i_14] [i_14] [i_14] [i_8] [i_8] [i_8])));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) 7129597871452786063LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (17007051824184112344ULL))))));
            var_28 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)43)) > (268435448)));
        }
        /* LoopNest 3 */
        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            for (short i_16 = 1; i_16 < 11; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_56 [i_17] [i_15] [i_15] [i_15] [i_8] = ((/* implicit */long long int) (-(((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_16 + 1] [i_8] [i_8])))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 14190363289746559576ULL)) ? ((-(6315868736842123928ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((_Bool) (signed char)127))));
    }
    var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((var_9), (var_9))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)0))))))))));
    var_32 &= min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)20)), (17007051824184112337ULL)))) ? (17007051824184112344ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))));
}
