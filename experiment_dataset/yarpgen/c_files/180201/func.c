/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180201
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)3]))) / (2587801457668823873LL))), (((/* implicit */long long int) var_13)))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            var_17 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1130))))))) ? (min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (18404291312380409787ULL))), (((arr_1 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [14U]))))) : (42452761329141828ULL));
            var_18 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_0 [i_0] [i_0])))))) & (((((/* implicit */_Bool) 122946960U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25244))) : (5027183383007471300ULL))))) >= ((+(42452761329141811ULL)))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1 - 2] [i_2 + 1] [i_2 + 1])) | ((+(((/* implicit */int) arr_8 [i_1 - 1] [i_2 + 2] [i_2 + 2]))))));
                        arr_12 [i_0] [24ULL] [i_2] [i_0] [(short)3] = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (signed char)-108))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 4035766846357276148LL)) ? (42452761329141835ULL) : (42452761329141828ULL)));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_19 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_16 [i_0] [i_0]))));
                    arr_21 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [(short)14] [(short)14] [i_6])) <= (((/* implicit */int) ((_Bool) var_12)))))) ^ (((((((/* implicit */int) arr_15 [i_4])) <= (((/* implicit */int) arr_14 [i_5])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_5 [9] [(signed char)22] [9] [i_6]) : (((/* implicit */int) var_13)))) : (((((/* implicit */int) (unsigned char)61)) * (((/* implicit */int) (unsigned char)203))))))));
                    var_21 |= ((/* implicit */int) ((signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)45569)) ? (2455630553079191156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9892)))))));
                    arr_22 [i_0] [i_0] [i_4] [i_5] [i_6] [(_Bool)1] = ((/* implicit */int) arr_1 [i_0]);
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_4] [i_0] [i_8] [i_4] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3446176975U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (42452761329141828ULL))))));
                            var_22 ^= ((/* implicit */short) var_8);
                            var_23 = ((arr_20 [i_8] [i_4] [i_4] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 2720036205U)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_39 [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)61))));
                            var_24 ^= ((/* implicit */unsigned short) (((!(arr_14 [i_12]))) ? (arr_33 [i_0] [i_0] [i_11] [i_12]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_5 [i_10] [i_11] [i_10] [i_4]) > (((/* implicit */int) var_13))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_13 = 1; i_13 < 23; i_13 += 1) 
            {
                for (unsigned short i_14 = 2; i_14 < 22; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((signed char) ((unsigned int) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108)))))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [9LL] [(_Bool)1] [6] [i_13 - 1] [(_Bool)1] [i_15])) ? (((/* implicit */int) arr_28 [i_15] [i_4] [i_13 + 1] [7ULL] [i_4] [i_0])) : (((/* implicit */int) arr_28 [i_15] [i_14 + 1] [i_0] [i_0] [i_4] [i_0])))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) var_15);
            arr_50 [i_0] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1213)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4853))) & (12690283929327551087ULL))) : (((/* implicit */unsigned long long int) 2198955754U))));
            var_28 = ((/* implicit */short) arr_23 [i_0] [i_0] [i_16]);
        }
        var_29 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])))));
        arr_51 [i_0] [i_0] = ((/* implicit */_Bool) arr_18 [0ULL] [i_0] [i_0] [20LL]);
    }
    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? ((-(var_7))) : (max((var_16), (((/* implicit */unsigned long long int) var_15)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_12)))) : ((+(848790321U))))))));
    var_31 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-18)) & (((/* implicit */int) (short)0))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1465222777211400896ULL) <= (var_16))))) : (3652165108258302846ULL)))));
}
