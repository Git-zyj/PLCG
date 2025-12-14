/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109770
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
    var_13 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_4))))), (max((var_7), (((/* implicit */int) var_0)))))), (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) var_7)), (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32120))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1533100592)))) ? (((/* implicit */int) (unsigned char)59)) : (var_7)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 ^= ((((/* implicit */_Bool) ((signed char) arr_5 [i_1]))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_0 [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_5))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (!(((/* implicit */_Bool) -1555436761)))))));
        var_16 *= ((/* implicit */unsigned int) var_3);
    }
    for (unsigned short i_2 = 4; i_2 < 11; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_2] [i_2]));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) var_4);
                        var_18 = ((/* implicit */signed char) min((((arr_13 [i_5] [i_5] [i_4 + 2] [i_2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_5] [i_4 + 2] [i_4])))), (((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4 + 2] [i_3])) ? (((/* implicit */int) arr_11 [i_5 + 3] [i_4 + 2] [i_3])) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
            arr_16 [i_3] = ((/* implicit */unsigned char) min((arr_15 [i_2 - 1] [i_3] [i_2] [i_3] [i_2]), (((/* implicit */unsigned short) var_4))));
        }
        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            arr_20 [i_6] [i_6] = ((((/* implicit */_Bool) -363298338)) ? (((/* implicit */int) ((unsigned char) (unsigned short)17211))) : (((((/* implicit */_Bool) 754994028U)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (_Bool)0)))));
            var_19 = ((/* implicit */unsigned int) var_3);
            arr_21 [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_2])) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_7 [i_6 - 1] [i_2])))) : (min((((/* implicit */int) var_5)), (var_7)))))), (((long long int) arr_10 [i_2] [i_2] [i_2 - 2]))));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7] [i_2])) ? (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_2 - 4] [i_2] [i_2]))))) : (max((((((/* implicit */_Bool) var_3)) ? (10434305684147668984ULL) : (((/* implicit */unsigned long long int) arr_19 [i_7] [i_2] [i_2])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_9))))))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((min(((_Bool)1), ((_Bool)1))) ? (((int) arr_12 [i_7] [i_2] [i_2 - 3])) : (var_7))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned long long int) (-(arr_19 [i_2 + 2] [i_2] [i_2])));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2 - 3] [i_2 - 4]))) : ((-(3539973269U)))));
            var_24 ^= arr_28 [i_2];
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_2]))) + (((((/* implicit */_Bool) arr_0 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2]))) : (var_9)))));
            arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (arr_19 [i_2 - 1] [i_2] [i_2 + 2]) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)))))));
        }
        arr_30 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) (unsigned short)49937)))) ? (((((/* implicit */_Bool) 2302421446U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_2 - 3] [i_2] [i_2])) ? (((/* implicit */int) arr_18 [i_2 + 2] [i_2] [i_2])) : (((/* implicit */int) var_5)))))));
    }
    var_26 = ((/* implicit */long long int) var_5);
    var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 152579442)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((_Bool)1), (var_1))))))));
}
