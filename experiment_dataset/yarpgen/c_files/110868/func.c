/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110868
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] [10U] |= ((/* implicit */signed char) (-(var_12)));
        var_14 = ((/* implicit */int) arr_2 [i_0]);
        var_15 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)2568))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */_Bool) arr_10 [i_2 + 3] [(signed char)5] [i_2 + 1] [i_0]);
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (526207124300821754LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32437)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40273)))))) : (((long long int) 98363261U))));
                }
            } 
        } 
    }
    var_17 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))))));
    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            {
                arr_18 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4 - 2] [i_3])) ? (((/* implicit */int) arr_16 [i_4 + 3] [i_4 - 2] [i_4 + 1])) : (((/* implicit */int) arr_16 [i_4 + 2] [i_4 - 3] [i_4 - 1]))))), (3770534717U)));
                var_19 ^= ((/* implicit */unsigned short) var_9);
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) min(((unsigned short)31293), (((/* implicit */unsigned short) arr_17 [14U] [i_3]))));
                    arr_21 [3LL] [(unsigned short)14] [i_3] [i_3] = (-(min((arr_20 [2LL] [i_4 - 3] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [1ULL] [i_4] [i_3])) ? (((/* implicit */int) arr_16 [i_3] [(signed char)16] [i_3])) : (((/* implicit */int) (unsigned short)44788))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1203149315013806995ULL)))) ? (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (signed char)31)))) : (((int) arr_20 [i_3] [i_4 + 2] [i_4 + 2]))))) ? (((/* implicit */unsigned long long int) arr_20 [0U] [i_3] [i_3])) : (((((/* implicit */_Bool) ((long long int) 10816252716089987721ULL))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) 4196604029U))))));
                    var_22 = ((/* implicit */unsigned short) (_Bool)1);
                }
                for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    arr_25 [i_3] = ((/* implicit */_Bool) -526207124300821755LL);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_32 [i_8] [i_3] [i_6] [i_3] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_20 [i_6] [i_6] [i_6 - 1])) > (8368113197729779775ULL))), (((((/* implicit */int) (unsigned short)20759)) != (((/* implicit */int) arr_30 [i_3]))))));
                                var_23 = ((/* implicit */signed char) 9223372036854775807LL);
                                var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)232)), ((-9223372036854775807LL - 1LL))))) ? (((int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_7]))) : (-386749696920990252LL)))) : (((((/* implicit */int) arr_26 [i_4 - 3] [(signed char)6] [i_4 - 3] [i_6 + 1])) / (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    arr_33 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)92)))), (((/* implicit */int) (signed char)0))))) ? (max((((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (7ULL))), (arr_19 [i_3] [i_4 + 2] [15ULL] [i_6]))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)0), (arr_17 [6ULL] [i_3]))))))))));
                }
                for (unsigned int i_9 = 2; i_9 < 15; i_9 += 4) 
                {
                    arr_37 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) (_Bool)1))))) ? (var_10) : (((/* implicit */unsigned int) 134217728)))))));
                    arr_38 [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11153))) : (0ULL)))) ? (((/* implicit */int) arr_26 [i_4] [i_4 - 2] [i_4 - 2] [(short)12])) : ((-(((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                arr_44 [i_3] [i_3] [i_9] [i_10] [i_9] = ((((/* implicit */int) var_2)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
                                var_25 = ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                    arr_45 [i_3] [8LL] [8LL] = ((/* implicit */_Bool) (((((-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))))) + (2147483647))) << (((((((/* implicit */_Bool) ((signed char) (short)11125))) ? (min((5171872838118781612LL), (((/* implicit */long long int) (_Bool)1)))) : (((((/* implicit */_Bool) 1008806316530991104ULL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1077))))))) - (1LL)))));
                }
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_46 [i_12] [i_12] [i_3]))));
                    arr_49 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3])) > (((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((((/* implicit */int) min((((/* implicit */short) var_7)), ((short)32767)))) / (((/* implicit */int) ((_Bool) 3751872916U)))))));
                }
                var_27 = ((/* implicit */short) 1524713604U);
                arr_50 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!((_Bool)1))), (((((/* implicit */int) (unsigned short)65514)) < (-1005037889))))))) : (((unsigned long long int) 15119682291916267602ULL))));
            }
        } 
    } 
}
