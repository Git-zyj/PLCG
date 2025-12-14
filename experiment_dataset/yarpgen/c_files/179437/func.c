/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179437
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
    var_15 = ((((/* implicit */_Bool) var_2)) ? (((((int) 162831194)) - (((/* implicit */int) var_7)))) : ((-(var_8))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) arr_1 [i_0]))))))))) : ((+((~(9223372036854775793LL)))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_7))))))) ? (((((unsigned long long int) arr_1 [(_Bool)1])) << (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (short)511)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (arr_1 [2])))) ? (max((((/* implicit */unsigned int) var_9)), (1731731663U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
        arr_3 [8] &= ((/* implicit */_Bool) (-(var_5)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] |= ((/* implicit */signed char) (+(max((min((arr_4 [16LL] [(signed char)11]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_5 [i_0 + 2]))))));
            arr_7 [i_0 - 1] = ((/* implicit */unsigned int) ((((9223372036854775796LL) & (7534478734355632963LL))) % (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [(short)2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 - 2] [i_0]))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3545)) << (((((/* implicit */int) (signed char)127)) - (110))))))));
            var_18 = ((/* implicit */unsigned int) ((min((arr_4 [i_0] [i_0 + 2]), (arr_4 [i_0 - 2] [i_0 - 1]))) - (max((arr_4 [i_0] [i_0 + 1]), (((/* implicit */long long int) arr_1 [i_0 + 1]))))));
            var_19 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) arr_1 [i_0 - 1]))) ? (((((/* implicit */_Bool) 763794264U)) ? (arr_4 [i_0 - 1] [i_2]) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(signed char)2]))) : (4294967275U))))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(arr_5 [i_0 - 2]))))));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_13 [i_0] [(signed char)16] = ((/* implicit */short) ((signed char) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                arr_17 [i_4] [i_3] [12LL] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_15 [i_0 - 2] [i_4] [i_4] [i_0 + 1]))) ? (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_4] [i_4] [i_0 + 1])) ? (var_8) : (((/* implicit */int) arr_15 [i_0 + 2] [i_4] [i_4] [i_0 + 1])))) : (((((/* implicit */int) arr_15 [i_0 + 1] [i_4] [i_4] [i_0 - 2])) * (((/* implicit */int) arr_15 [i_0 - 2] [i_4] [i_4] [i_0 - 1]))))));
                var_21 = ((/* implicit */unsigned char) (-(((unsigned int) var_7))));
                var_22 = ((/* implicit */signed char) min((((((/* implicit */int) arr_15 [i_3] [i_4] [i_4] [i_0 - 1])) - (((/* implicit */int) arr_15 [(signed char)1] [i_4] [i_4] [i_0 + 2])))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                var_23 -= ((/* implicit */long long int) ((_Bool) var_5));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (signed char)-108))))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23665)) ? (9151314442816847872LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7628748475461429271ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)0))))) | (((((/* implicit */_Bool) (unsigned short)65535)) ? (3066924618U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        arr_29 [i_8] [i_5] [i_5] [i_5] [i_0 + 1] = ((/* implicit */short) (-(274877382656LL)));
                        var_27 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_7] [i_8]);
                        var_28 = ((((/* implicit */_Bool) arr_22 [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_19 [i_5] [(unsigned short)2] [i_7] [i_8])));
                        var_29 = ((/* implicit */short) (_Bool)1);
                    }
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10817995598248122347ULL)) ? (945843897U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 2])))))));
                }
                var_32 = ((/* implicit */unsigned short) var_6);
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        var_33 = ((/* implicit */int) ((signed char) arr_20 [2LL]));
        arr_33 [i_9] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) (signed char)-75)));
        arr_34 [i_9] [(signed char)3] = ((/* implicit */unsigned char) ((unsigned long long int) arr_27 [i_9] [4LL] [i_9] [i_9 + 2] [i_9 + 1] [i_9]));
    }
    for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_34 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_10] [i_10])) ? (((/* implicit */int) arr_10 [i_10] [i_10])) : (((/* implicit */int) arr_10 [i_10] [i_10]))))), (max((((((/* implicit */long long int) var_8)) ^ (arr_8 [i_10] [i_10] [i_10]))), (((/* implicit */long long int) ((signed char) var_1)))))));
        arr_39 [(unsigned short)2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)64501))));
        var_35 *= ((_Bool) ((((((/* implicit */_Bool) arr_4 [(unsigned short)9] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_10] [i_10])))) * ((~(((/* implicit */int) arr_36 [i_10]))))));
    }
    var_36 = (-(((/* implicit */int) ((((/* implicit */int) max((var_1), (var_1)))) != (((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))))));
}
