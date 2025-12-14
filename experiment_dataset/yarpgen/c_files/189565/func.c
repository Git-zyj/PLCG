/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189565
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(-1728887523))) + (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0] [i_0]))) / (((((/* implicit */_Bool) var_1)) ? (-1) : (((/* implicit */int) (_Bool)0)))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 6; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */long long int) arr_8 [6] [i_1] [i_1] [i_2]);
                    var_19 = ((/* implicit */long long int) ((((arr_5 [i_0 + 2] [i_1] [i_2 + 3]) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_2 - 1])))) >> (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_2 + 1])) | (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_2 + 2]))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] &= ((/* implicit */unsigned long long int) ((1970004256U) | (((/* implicit */unsigned int) -799384009))));
        /* LoopSeq 1 */
        for (signed char i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_20 &= ((/* implicit */signed char) (~((((((_Bool)0) ? (arr_13 [8ULL] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_5]))))) >> (((((((/* implicit */int) arr_17 [(_Bool)1] [i_4])) / (((/* implicit */int) arr_10 [i_5] [i_5])))) - (64312)))))));
                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_3] [(unsigned short)0]))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13026901210655418657ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)192))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 799384009)) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5701035231075767455LL))))) : (1269437313))) : ((+(((/* implicit */int) (unsigned char)86))))));
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
            {
                arr_20 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) 7689632326108055577LL)));
                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)146))));
            }
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_4] [i_4 + 1] [i_4 + 1] [i_4])) : (((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */int) (_Bool)1)) : ((+(arr_14 [i_4 + 1] [9U])))));
                var_25 = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                arr_23 [i_7] [i_4] [i_4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_3] [i_3] [i_4 - 2] [i_4]))))) ? (((unsigned int) (signed char)107)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_4] [(signed char)7])))))))) ? (min((arr_13 [i_4 + 2] [i_4 - 3] [i_7]), (15027248614735211425ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))));
                arr_24 [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(arr_13 [i_3] [i_4] [7ULL])))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (-8123700228748143551LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-9))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                var_26 = (unsigned char)109;
            }
            arr_25 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_3] [i_4]) | (((((/* implicit */int) (signed char)107)) | (((/* implicit */int) (signed char)-117))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((_Bool) (short)29116)), ((_Bool)0))))) : ((~(arr_13 [i_4 - 3] [i_4 + 1] [i_4 - 3])))));
            arr_26 [8U] [i_4 - 2] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)8)), (8123700228748143551LL)))) | (((((/* implicit */_Bool) (unsigned char)169)) ? (arr_13 [i_3] [i_4] [i_4 + 2]) : (((/* implicit */unsigned long long int) var_11))))));
            /* LoopSeq 2 */
            for (short i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            arr_38 [(unsigned short)10] [i_4] [i_8 - 1] [i_4] [i_3] = (i_4 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-8123700228748143551LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_28 [i_4] [i_9] [i_10])) - (124)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_29 [i_8] [2LL])), (-799384009))))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_4] [i_4] [i_4])) * (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_31 [1] [1] [9ULL] [i_9] [9ULL])) ? (((/* implicit */int) arr_28 [i_4] [(_Bool)1] [i_4])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_19 [i_3] [i_4 - 1] [i_8]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-8123700228748143551LL) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_28 [i_4] [i_9] [i_10])) - (124))) - (71)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_29 [i_8] [2LL])), (-799384009))))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_4] [i_4] [i_4])) * (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_31 [1] [1] [9ULL] [i_9] [9ULL])) ? (((/* implicit */int) arr_28 [i_4] [(_Bool)1] [i_4])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_19 [i_3] [i_4 - 1] [i_8])))))));
                            arr_39 [i_3] [i_4] [i_4] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) + (((((/* implicit */_Bool) arr_35 [i_3] [i_8 - 1] [i_8] [i_4 + 2])) ? (arr_35 [i_9] [i_8 + 1] [i_9] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))))));
                        }
                    } 
                } 
                arr_40 [i_8] [i_4] [i_4] [i_3] = ((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_17 [i_3] [i_4 - 2])) : (((/* implicit */int) arr_28 [i_4] [i_4 - 2] [i_8 - 1])))) | ((+(((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 2] [i_8 - 1] [i_4])))));
                arr_41 [i_3] [i_3] [i_4] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) var_0)) % (((((/* implicit */_Bool) 3215469397U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_32 [i_3] [i_4] [i_4 + 2] [(unsigned short)4] [(unsigned short)4])))))));
                var_27 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_33 [i_3] [i_3] [i_8 + 1])), (((941078059U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */unsigned int) (((-(0))) * (((/* implicit */int) (_Bool)0)))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) ((3744458486305698395LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 11; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_29 *= ((/* implicit */unsigned short) arr_19 [i_3] [i_4 - 1] [(unsigned short)7]);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8123700228748143551LL) | (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_4] [i_4 + 2] [i_12 - 1] [i_4]), ((!(((/* implicit */_Bool) (unsigned char)235)))))))) : (min((var_10), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)126)))))))));
                        }
                    } 
                } 
            }
        }
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 280708646U)) ? (((((((/* implicit */_Bool) (unsigned char)111)) ? (arr_43 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146)))));
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)9)) ? (var_8) : (var_8)))))) ? (((var_2) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) (((-(var_1))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))))))));
    var_33 += ((/* implicit */short) var_5);
}
