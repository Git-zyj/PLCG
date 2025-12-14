/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10166
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
    var_14 = ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */signed char) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_0 [(unsigned short)6] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_8 [i_0] [i_2] [i_0])))) : (arr_5 [i_3] [i_3]))) >= (((((/* implicit */_Bool) min((1805322291186323144ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]))))) ? (max((2383256187582171773ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))) : (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (arr_5 [1LL] [i_3])))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) arr_6 [i_4] [i_0] [i_0] [i_0]);
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 7831534711227342805ULL)))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2400025440U)) > (min((arr_5 [i_0 - 1] [(unsigned short)1]), (((/* implicit */unsigned long long int) arr_9 [3LL] [i_1]))))))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)49)))));
                            arr_16 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_16 -= ((/* implicit */unsigned short) min((((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_7 [i_4] [i_3] [(signed char)4] [i_4])))) + (2147483647))) << (((4376173322004086190LL) - (4376173322004086190LL))))), (((arr_13 [i_4]) & (((/* implicit */int) arr_1 [i_2] [i_2]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_17 += arr_9 [i_0] [i_5];
                            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [2] [2]))))), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_0 - 3])) ? (arr_5 [i_1 + 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) 759455391)))))))));
        }
        var_20 -= ((/* implicit */int) max((max((max((((/* implicit */unsigned short) arr_1 [(_Bool)1] [i_0])), ((unsigned short)0))), (((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) arr_19 [(_Bool)1] [(_Bool)1]))))))), (((/* implicit */unsigned short) arr_0 [i_0] [(signed char)4]))));
        arr_20 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((arr_12 [i_0 - 3]) ^ (arr_12 [i_0 - 1]))) ^ (max((arr_12 [i_0 - 2]), (arr_12 [i_0 - 2])))));
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((arr_13 [i_0]) <= (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
    }
    for (unsigned short i_6 = 3; i_6 < 8; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    arr_31 [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [1U] [i_6 - 1] [i_6 - 1]))) ^ (arr_5 [2LL] [i_8])));
                    arr_32 [i_6] [i_7] [i_7] [i_8] = ((/* implicit */signed char) arr_13 [i_6]);
                    var_21 = ((/* implicit */_Bool) max((((15265030758341275337ULL) >> (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)37536)) - (37522))))) - (16350))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_6] [(signed char)4])))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_27 [i_6] [i_6]);
                }
            } 
        } 
        arr_33 [i_6] = arr_29 [i_6] [i_6] [i_6];
        arr_34 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))));
        arr_35 [i_6] = ((/* implicit */_Bool) min((3735682203U), (((/* implicit */unsigned int) 1277969156))));
    }
}
