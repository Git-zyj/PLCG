/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163817
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
    var_17 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) (unsigned char)10)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (unsigned char)232)) * (((/* implicit */int) var_12)))))), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_0])) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) (signed char)-97))))) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_8))))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5351577248858577350ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 2])) : (((/* implicit */int) (unsigned short)22763)))) >= (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) (unsigned char)239);
                    var_21 = ((/* implicit */unsigned char) arr_3 [i_0]);
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_2]))));
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [(unsigned char)6] [i_2])), ((-(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_5 [(unsigned char)3] [i_1])))))))));
                }
                for (signed char i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (unsigned short)42751)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)22782))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)22784)))) : (((/* implicit */int) (signed char)-104))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_5 [i_4 - 1] [(signed char)9]);
                        var_24 = max((((signed char) (-(var_11)))), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22783)) == (((((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0])) >> (((((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1])) + (66)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42752))) + (2181843386368ULL)));
                            arr_20 [i_0] [i_1] [i_3] [i_1] [i_3] [i_5] = ((/* implicit */signed char) (unsigned char)60);
                            var_26 = arr_15 [i_0] [i_1] [i_1];
                        }
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 + 2])) ? (((((/* implicit */_Bool) arr_2 [i_4 - 2])) ? (((/* implicit */int) arr_2 [i_4 - 2])) : (((/* implicit */int) arr_2 [i_4 - 1])))) : (((((/* implicit */int) (signed char)108)) >> (((((/* implicit */int) (unsigned char)128)) - (101))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_23 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)22766)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) ((max((18446741891866165248ULL), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_1] [i_3 + 1] [i_4] [i_0])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_3])) : (((/* implicit */int) (unsigned short)63712))))))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (unsigned char)138))));
                            var_29 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-99))))) * (((/* implicit */int) var_6)))));
                        }
                    }
                }
            }
        } 
    } 
    var_30 -= var_14;
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65514)) ? ((+((-(((/* implicit */int) arr_24 [i_7])))))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)22790))))), ((signed char)63))))));
                var_32 = ((/* implicit */unsigned char) (unsigned short)12518);
                var_33 = ((/* implicit */signed char) (~(min((arr_25 [i_8]), (arr_25 [i_8])))));
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned char i_10 = 3; i_10 < 10; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_34 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (signed char)-112)))));
                                var_35 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_31 [i_10] [7ULL] [i_10 + 1] [7ULL])))));
                                arr_39 [i_10] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) ((unsigned char) (unsigned short)12518))), (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)110)))))));
                                arr_40 [(unsigned short)3] [i_8] [i_9] [i_10] = (unsigned char)76;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_36 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_14))))) - (((((/* implicit */_Bool) (unsigned short)43213)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))) | (((/* implicit */int) var_16))));
}
