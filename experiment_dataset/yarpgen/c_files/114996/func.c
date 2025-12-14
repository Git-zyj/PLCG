/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114996
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
    var_16 = max((((((/* implicit */int) min((var_13), (var_13)))) < (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_4))))))), (max((var_1), (var_6))));
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_9))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_3))))) & (var_15)))));
    var_18 &= ((/* implicit */_Bool) var_7);
    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-121)))) <= (((/* implicit */int) max(((unsigned char)1), ((unsigned char)0)))))) ? (max(((-(3U))), (((/* implicit */unsigned int) var_7)))) : ((+(4194240U)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (((!(var_10))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : ((-(8483416466802075220LL)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [6])) : (((/* implicit */int) (signed char)-1))));
            arr_8 [i_1] = ((/* implicit */_Bool) (~(3989725704U)));
            arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((int) var_8)) / (((((/* implicit */_Bool) 2044U)) ? (var_8) : (((/* implicit */int) var_6))))));
        }
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
            arr_14 [0U] [i_2] [0U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2]))) + (var_15)));
            arr_15 [i_0] [i_2] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) <= (18446744073709551615ULL))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_0]))));
        }
        for (int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_10 [6U])) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_3 [i_3 - 3])) : (((/* implicit */int) arr_5 [i_3 - 3]))));
            var_22 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_5 [i_0])))));
            arr_18 [i_3] [i_3 + 1] [i_3] = ((/* implicit */short) ((arr_0 [i_3 - 3]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_23 += ((/* implicit */unsigned long long int) (unsigned char)174);
            arr_19 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_12 [i_3 + 2] [i_3 - 2]) : (((/* implicit */long long int) arr_1 [i_3 - 3] [i_3]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_23 [i_0] [i_4] = ((/* implicit */unsigned int) var_1);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 12; i_7 += 4) 
                    {
                        {
                            arr_32 [i_5] [i_6] [i_5 + 1] [i_0] [i_5] = arr_6 [i_0] [i_5];
                            arr_33 [i_5] [i_4] [i_5 + 1] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7 + 1])));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) <= (((/* implicit */int) (short)-2454))));
                        }
                    } 
                } 
            } 
            arr_34 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) arr_21 [i_0] [i_4] [i_4])) : (0U)))) ? (arr_24 [i_0] [i_4] [i_4] [i_0]) : (((/* implicit */unsigned int) arr_25 [i_4] [i_4] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_42 [i_4] [i_4] [i_8] [i_9] = ((6961388866812052422ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0]))));
                        arr_43 [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) (short)32209)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 3682550383U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (4294967295U)))));
                    }
                } 
            } 
        }
        arr_44 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) ^ (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        arr_48 [i_10] = ((/* implicit */unsigned char) (_Bool)1);
        var_25 -= ((/* implicit */int) ((((/* implicit */int) arr_46 [i_10])) > (((/* implicit */int) arr_46 [i_10]))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            arr_53 [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) var_14);
            var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
            arr_54 [i_10] |= var_12;
        }
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_50 [17LL]))));
        arr_55 [i_10] = ((/* implicit */short) 612416912U);
    }
}
