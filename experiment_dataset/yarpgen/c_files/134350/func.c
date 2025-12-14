/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134350
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (13672732921690782480ULL)))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_8)))))));
    var_12 = ((/* implicit */unsigned char) ((var_5) / (((((/* implicit */_Bool) min((4774011152018769142ULL), (((/* implicit */unsigned long long int) -6119529253046579302LL))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [(signed char)13])) ? (arr_6 [i_3 + 1] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_0))))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_14 = ((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_5 [(signed char)13] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))) == ((+(((/* implicit */int) (signed char)91)))));
                                var_15 += ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 224)) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [(short)3] [i_2] [i_3])) ? (arr_6 [3] [i_1] [i_2] [i_3 - 1]) : (60)))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3] [i_3])), (1831636465902412416ULL))) >= (min((281474976448512ULL), (((/* implicit */unsigned long long int) arr_6 [(signed char)7] [i_1] [i_2] [i_3])))))))));
                                var_16 *= ((/* implicit */int) ((((192743588) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (var_3))) - (15832))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [6LL])) ? (((/* implicit */int) (short)-13408)) : (var_5)))) ? ((+(var_5))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (2122462999))))))));
                                arr_11 [i_0] [i_0] [1U] [i_2] [11ULL] [(unsigned char)0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((4774011152018769114ULL), (((/* implicit */unsigned long long int) (signed char)-55))))) || (((/* implicit */_Bool) (unsigned char)120)))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_3 [8LL] [i_4]))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                arr_14 [i_0] [i_1] [1LL] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) 3419077542U)) ? (18446744073709518848ULL) : (18446744073709551613ULL));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 211)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)91)))) - (((/* implicit */int) (_Bool)1))))) ? ((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 2] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) (short)-7283)))))));
                                arr_15 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3631380720868498096LL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_3] [i_5]))))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) var_10))))))) ? (max((((/* implicit */unsigned long long int) -5011748946185795234LL)), (15086991705872538765ULL))) : (((/* implicit */unsigned long long int) var_10))));
                            }
                        }
                    } 
                } 
                arr_16 [i_0] = arr_9 [i_0];
                var_19 *= ((/* implicit */unsigned int) ((-738455236) | (((/* implicit */int) (unsigned char)191))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32755)) % (((/* implicit */int) (signed char)-101))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned long long int) (unsigned char)66);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 19; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_22 = arr_24 [i_6] [i_7] [i_6] [i_8] [i_9] [i_9];
                        arr_27 [i_7] [i_7] [i_8] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7])) ? (15086991705872538736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_8)) : (var_10)));
                        arr_28 [i_6] [i_6] [i_9] [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]) < (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 + 1])));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (signed char)-92))));
    }
}
