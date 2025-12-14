/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135784
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((_Bool) ((unsigned long long int) ((((/* implicit */int) var_11)) > (var_6))))))));
                                var_18 ^= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_13)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((var_12), (((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) : (max((((/* implicit */unsigned long long int) var_14)), (var_4))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_8)), (var_7)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))))) < (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_7)) + (var_6))) != (((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))))));
                    arr_12 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (signed char)-61))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) * (((/* implicit */int) ((15689846706472204799ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))))));
                                arr_18 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_15))))) ^ (var_12)))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) 2756897367237346815ULL)))) : (((max((((/* implicit */unsigned long long int) var_11)), (var_12))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_10))));
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 23; i_7 += 4) 
                {
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_24 [(short)12] [(short)12] [i_8] [(short)12] [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_5))))) ? (max((((unsigned long long int) var_13)), (((((/* implicit */_Bool) 11494305311004737921ULL)) ? (14595489957470328888ULL) : (((/* implicit */unsigned long long int) -23LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            arr_25 [i_0] [(signed char)10] [i_0 + 2] [i_8] [i_7] [(signed char)12] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32762)) ? (2756897367237346812ULL) : (5141376157900885251ULL)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_0)) | (((/* implicit */int) var_7))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (var_10))))) & (max((15689846706472204801ULL), (((/* implicit */unsigned long long int) var_3)))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) ((((/* implicit */long long int) var_13)) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_6)) : (var_10))))))));
                            arr_26 [i_0] [8ULL] [i_0 - 2] [i_8] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) % (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (17737340779983509099ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) < (var_4))))))) : (min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_5)))))))));
                            /* LoopSeq 2 */
                            for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((709403293726042516ULL), (((/* implicit */unsigned long long int) 3591020080U)))))));
                                arr_29 [i_0] [i_8] [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((2756897367237346817ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_9)), (var_5))))))))));
                                arr_30 [i_8] [i_1] = ((/* implicit */short) var_8);
                            }
                            for (signed char i_10 = 3; i_10 < 23; i_10 += 3) 
                            {
                                arr_35 [i_8] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                                arr_36 [i_8] [i_10] [i_1] [(unsigned char)19] [20LL] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_5)) << (((((((17359587152038478760ULL) + (1080863910568919040ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (18440451062607375093ULL)))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551605ULL)) || (((/* implicit */_Bool) (short)18287))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_6)) : (var_16)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_4))))) >> (((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (7053591739579557965ULL)))))) : (((long long int) (short)-18288))));
                                arr_37 [i_7] [i_7] [i_7 + 2] [i_0] [i_0] [18ULL] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) var_15))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) * (min((((unsigned long long int) var_4)), (((unsigned long long int) var_0))))));
                                arr_38 [i_1] [i_8] = ((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 += ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 4746263219994335475ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36536))) : (709403293726042510ULL))));
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                {
                    arr_49 [i_11] [i_12] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((short) ((short) (_Bool)1)));
                    var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_6), (var_1)))) | (max((var_10), (((/* implicit */long long int) var_9))))))) & (((((/* implicit */_Bool) (short)-28899)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-672))) : (15689846706472204800ULL)))));
                    var_27 &= ((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    arr_50 [i_11] [i_12] [i_11] = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
}
