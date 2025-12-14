/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159595
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((max((((unsigned int) var_2)), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)39)), (var_3)))))), (((/* implicit */unsigned int) var_6)))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-90))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_6))))) + (max((((/* implicit */unsigned int) (signed char)-53)), (3250984291U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255))))))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (max(((-(((/* implicit */int) (unsigned char)33)))), (1935139432)))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            var_13 *= ((/* implicit */signed char) var_1);
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */int) var_7)), ((((!(((/* implicit */_Bool) (unsigned char)10)))) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) var_6)))) : ((~(-1286482035))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) min(((unsigned short)36219), (((/* implicit */unsigned short) (unsigned char)40))))), (-4))) >= (((/* implicit */int) ((short) max((arr_7 [(unsigned char)0] [i_2] [i_1] [i_0]), (((/* implicit */int) (short)25938))))))));
                        var_16 ^= ((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_7 [(signed char)9] [i_1] [i_2] [i_3]), (((/* implicit */int) (short)-4234))))), (min((524287U), (((/* implicit */unsigned int) (signed char)-49))))))) == (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_17 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (1453043010U)));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
            var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)0))) ? ((~(((/* implicit */int) (unsigned char)29)))) : (((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
            {
                arr_14 [i_5] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_0))) ^ ((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967273U))))));
                arr_15 [i_0] [i_5] [i_5] &= ((/* implicit */long long int) ((((var_8) ? (arr_3 [(_Bool)1] [i_4] [i_5]) : (((/* implicit */unsigned long long int) arr_12 [i_4] [(short)3] [3LL])))) - (((/* implicit */unsigned long long int) 1935139432))));
            }
            for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
            {
                arr_18 [i_6] [i_4] [i_6] |= (_Bool)1;
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned char)92))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6] [i_6])) >> (((arr_0 [(short)5] [i_4]) + (4752106515016121762LL)))))) ? (((var_6) ? (2605428505U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(short)6] [(short)4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1]))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)2] [i_6] [i_7])) || (((/* implicit */_Bool) -1935139451)))))));
                        }
                    } 
                } 
            }
        }
    }
    var_23 *= ((/* implicit */short) (~(max((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_6))))), ((-(((/* implicit */int) var_4))))))));
}
