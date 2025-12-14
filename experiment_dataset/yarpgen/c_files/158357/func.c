/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158357
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)91))));
    var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((3651712384277765095ULL) << (((1142654966216454463ULL) - (1142654966216454424ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)10841)) : (((/* implicit */int) (unsigned char)252))))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (var_1))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1 - 1] [i_1])), (arr_2 [i_0])))) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 - 1]))))));
                var_21 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (var_6))) != (max((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1 + 1])), (-7873677385654444917LL))))) ? (((((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_1])) << (((var_11) - (2739440363066206249LL))))) : ((~((~(((/* implicit */int) (signed char)(-127 - 1)))))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_4))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) ^ (4208106788540951272ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [i_1 - 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_4] = ((((/* implicit */_Bool) ((((long long int) var_11)) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_1] [i_4 + 2] [i_0] [i_2] [i_1 - 3])))))) ? (min((var_3), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_24 = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) (unsigned char)0)) ? (907123022139259181LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_25 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) max((((/* implicit */short) var_13)), (arr_3 [i_1])))) << (((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)2] [(signed char)2]))))) - (3325846319228542430LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_20 [i_1 - 3] [i_1 - 3] [i_6] [(unsigned char)6])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_20 [i_1] [i_1 + 1] [i_1 + 1] [i_7])))), (((/* implicit */int) (unsigned char)154))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_22 [i_1] [i_6] [i_1] [i_1]), (arr_22 [i_1] [i_1] [i_5] [i_6])))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)101))) ? (((((/* implicit */_Bool) arr_15 [i_0] [(signed char)2] [i_1] [i_1] [i_7])) ? (arr_9 [i_0] [i_0] [(unsigned short)2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))))) : (907123022139259181LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) arr_24 [i_1] [i_7] [i_1] [i_1] [i_1 - 2] [i_1])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)62015))));
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((arr_15 [i_8] [i_8] [i_8] [i_0] [i_0]) - (2249244130932198542LL)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_8] [i_1] [i_1 - 2])))) : ((-(((/* implicit */int) (unsigned char)11))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (((-(var_2))) & (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        arr_32 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)112)) < (((/* implicit */int) arr_23 [i_0] [i_1] [i_8]))));
                        arr_33 [i_9] [i_8] [i_1] [i_1] [i_8] [i_0] &= ((/* implicit */signed char) 907123022139259181LL);
                        arr_34 [i_0] [9LL] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [(unsigned char)2] [7ULL] [0LL])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) >= (-7295214305647226405LL))))));
                    }
                }
                for (unsigned short i_10 = 4; i_10 < 12; i_10 += 2) 
                {
                    var_31 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */long long int) (unsigned char)132)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) / (var_5))))));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (short)10841))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (short i_12 = 1; i_12 < 12; i_12 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (unsigned char)78))));
                                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_10 - 4] [i_11]))))) : (((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_10] [i_11] [i_12 + 2])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
