/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155405
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
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((long long int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14751)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_9)))) ? (max((((/* implicit */int) (unsigned short)45921)), (((var_4) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_3 [(short)3] [i_0 - 1])))))));
                    arr_6 [i_2] [(unsigned short)0] [(short)0] &= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14304)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 8871643130256457190LL)) ? (8256245253732517632ULL) : (((/* implicit */unsigned long long int) 0LL)))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_4 [(unsigned short)6] [i_1 + 1])))))))));
                }
            } 
        } 
        var_13 *= ((/* implicit */short) ((var_4) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_1)))) : ((+(arr_2 [i_0 + 2] [i_0 + 1])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            {
                arr_11 [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 8256245253732517634ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))));
                var_14 = ((/* implicit */long long int) arr_10 [i_3]);
                arr_12 [i_3] [14] [(unsigned char)0] &= ((/* implicit */signed char) min((min((((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_4 + 3])), ((unsigned short)37188)))), (((((/* implicit */_Bool) (unsigned short)47888)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < ((~(var_0))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (~(var_0)));
                            arr_17 [i_5] [i_5] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_13 [i_3 - 3] [i_5] [i_5] [i_6]) : (((/* implicit */int) (short)-7168))))) ? (((((/* implicit */_Bool) 0)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 4263897368U)) ? (arr_16 [i_3] [i_3] [i_3] [i_3 + 2] [i_3]) : (7698312061687851145ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)245)))))));
                            var_16 ^= (_Bool)1;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) var_0);
                    arr_20 [i_4] = ((/* implicit */unsigned char) 7791010487872676741ULL);
                    var_18 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-32767)))) > (((/* implicit */int) ((unsigned char) (unsigned short)28348)))));
                    arr_21 [6LL] [i_4 - 1] [6LL] &= ((/* implicit */short) ((((/* implicit */_Bool) 10190498819977033973ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)10))));
                    var_19 = ((/* implicit */long long int) ((((arr_7 [i_3 + 2] [i_3 + 1]) + (arr_7 [i_3 - 3] [i_3 - 1]))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) + (-5445868032777013797LL))))));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        for (long long int i_10 = 3; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) arr_10 [9U])) ? (arr_24 [i_3 - 3]) : (((((/* implicit */int) (unsigned char)11)) << (((arr_24 [i_3 + 1]) - (123219615))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
                                arr_30 [i_3 + 2] [i_3 + 2] [i_8] [10] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)4))));
                                arr_31 [i_3] [i_4 + 1] [i_9 - 1] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_4] [i_3 - 2] [i_4]))));
                            }
                        } 
                    } 
                    var_22 &= ((int) (signed char)-94);
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (int i_12 = 1; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-32767)))) ? (-617564261) : (var_8))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((arr_13 [i_11] [(unsigned char)4] [(unsigned char)4] [i_3]) | (((/* implicit */int) (_Bool)1)))))));
                                arr_39 [i_3] [i_3] [(signed char)1] [i_3 + 1] [i_4] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((_Bool) -1498523214)))));
                                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) arr_29 [i_3] [i_3 - 2] [i_12 - 1] [i_12] [i_12] [(signed char)4] [i_12 + 1])) : (((/* implicit */int) arr_29 [i_3] [i_3 - 1] [i_12 + 2] [i_12 + 1] [i_12 - 1] [(unsigned char)8] [i_3 - 1]))));
                            }
                        } 
                    } 
                    arr_40 [i_4] [i_4 + 2] [i_8] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_27 [i_8] [i_4] [i_4] [i_4 + 3] [i_4] [i_3])) && (((/* implicit */_Bool) (signed char)1))))));
                }
            }
        } 
    } 
}
