/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127170
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */long long int) max((((arr_3 [i_1]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) var_14)) : ((~(var_10)))))));
            arr_6 [(signed char)8] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1]))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_0]))))))));
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 23; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (((_Bool)1) ? (arr_15 [i_0] [12]) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) ^ (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [7])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_15 [i_0] [i_0])))) ? (((/* implicit */int) max((arr_4 [4U]), (arr_4 [i_3 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))))))));
                        arr_16 [i_0] [(unsigned char)17] [i_3] [i_2] = ((/* implicit */signed char) arr_2 [i_2]);
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) <= (((((/* implicit */_Bool) (+(arr_3 [i_4 - 1])))) ? (((arr_13 [(unsigned char)23] [(unsigned char)23] [(_Bool)1] [(_Bool)1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2]))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_4])) ? (arr_14 [i_0] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [3])))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [22U] [i_2]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : (var_10)))) ? (((((/* implicit */unsigned long long int) arr_7 [(unsigned char)16])) & (3012211853907068376ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) >= (arr_14 [i_0] [i_0] [i_2] [i_0]))))))))));
        }
        var_22 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (arr_12 [i_0] [i_0])))), ((-(arr_15 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_8 [i_0] [11ULL])))))));
    }
    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) <= (((/* implicit */int) (unsigned char)7))))) + (((/* implicit */int) (unsigned char)142)))) | (((/* implicit */int) (signed char)116))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 15; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) min(((~(-1501469500))), (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_0)) & (arr_13 [i_5] [i_6] [i_7] [i_8])))))));
                        arr_27 [i_5] [i_8] &= var_5;
                        /* LoopSeq 2 */
                        for (int i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) var_13);
                            arr_30 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) -5148140526676500136LL)) : (3012211853907068354ULL)));
                            arr_31 [i_5] [i_6] [i_8] [i_8] [i_9 + 2] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_8] [i_8])) ? (arr_28 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61842))))) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_5 + 4]))))))));
                        }
                        for (int i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
                        {
                            var_25 *= ((unsigned short) min((((((/* implicit */unsigned long long int) var_3)) & (arr_2 [i_6]))), (((/* implicit */unsigned long long int) arr_28 [i_8]))));
                            arr_34 [i_5] [i_6] [i_6] [i_7] [i_8] [i_10 + 2] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14)))))), (((((/* implicit */unsigned long long int) (+(var_3)))) == (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                            var_26 *= ((/* implicit */short) arr_33 [i_7] [i_5] [i_8] [i_5 + 4] [i_5]);
                            arr_35 [i_5 + 2] [i_6] [i_7 - 2] [i_7 - 2] [i_6] [i_10 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)2339)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        var_27 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (3012211853907068354ULL) : (((/* implicit */unsigned long long int) arr_24 [i_5] [i_6] [i_6] [(signed char)9] [i_6] [(signed char)9]))))) ? (((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) == (min((((/* implicit */unsigned long long int) var_4)), (var_10))))))));
                        arr_40 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)28498)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) : (var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_5)))) && (((/* implicit */_Bool) arr_0 [i_5])))))) : ((-(var_0)))));
                        arr_41 [i_6] [i_6] [8LL] [i_6] = ((/* implicit */int) arr_26 [i_5] [i_5] [i_7 + 2] [1]);
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [(short)6] [i_6] [(signed char)7] [i_11]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) arr_33 [i_5] [i_6] [i_11] [i_7] [i_11])) : (min((var_7), (((/* implicit */unsigned long long int) (_Bool)1))))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_29 [i_5 + 1] [i_11] [i_5 + 1])) ? (((/* implicit */int) arr_25 [i_5 + 4] [(_Bool)1] [i_11])) : (((/* implicit */int) var_2))))))))))));
                    }
                    var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5148140526676500130LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_6] [(short)10]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (arr_26 [i_7] [i_6] [i_5] [i_5])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (var_8)))))));
                }
            } 
        } 
        arr_42 [i_5] = ((/* implicit */unsigned int) arr_37 [i_5] [(unsigned short)12] [i_5] [(_Bool)1]);
    }
    var_30 *= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) - (((var_10) >> (((4130751377U) - (4130751323U))))))), (((/* implicit */unsigned long long int) var_2))));
}
