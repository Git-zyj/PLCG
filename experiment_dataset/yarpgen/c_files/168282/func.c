/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168282
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (unsigned short)27791))));
                                var_11 = var_3;
                                var_12 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) 11235317372032631893ULL)), (((/* implicit */int) ((_Bool) 8626178400309280564ULL)))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((15LL), (((/* implicit */long long int) arr_2 [i_1 + 1] [i_1] [i_1])))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)1023)) ^ (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((short) var_8))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_7))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned char) min((8626178400309280550ULL), (((/* implicit */unsigned long long int) min(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)1)))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8626178400309280565ULL)) ? (((/* implicit */int) ((signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))), ((+(((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_2] [i_1] [i_2] [i_5] [i_7 - 1]))))))));
                            var_17 |= ((/* implicit */long long int) (_Bool)0);
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 475735148)) : (var_6))))))));
                            var_19 = ((/* implicit */long long int) 1467010222U);
                            arr_26 [i_0] [i_2] [i_2] = ((/* implicit */short) ((int) ((unsigned char) (unsigned char)0)));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (min((-1265784555), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)11))))) ? (7153368504308928328LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_8] [i_8] [i_2] = ((/* implicit */_Bool) var_6);
                            var_21 |= ((/* implicit */short) (+(((long long int) -475735148))));
                            arr_33 [i_0] [i_1] [i_2] [i_8] [i_9] [i_2] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)50481);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_37 [i_0] [i_0] [i_2] = ((/* implicit */int) var_6);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned short)12250)))))) < (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)53056)))) ? ((~(-1315138706))) : (((/* implicit */int) ((signed char) arr_1 [i_8]))))))))));
                        }
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (short)20512))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_1 + 1] [i_2] [i_0] [i_8] [i_11] |= ((/* implicit */unsigned char) ((unsigned int) 18446744073709551615ULL));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 0LL))));
                            arr_42 [i_0] [i_1 + 1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((int) 1206458277)) + (((/* implicit */int) (unsigned char)179))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [i_2] [(signed char)2] [i_0] [i_0] = min((min((((/* implicit */int) (_Bool)1)), (max((-1315138706), (-1206458277))))), (((/* implicit */int) arr_11 [i_2] [i_1 + 1])));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((4172485690715516011ULL) % (((/* implicit */unsigned long long int) 2147483647)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-2590)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524287)) ? (2909357420U) : (2827957071U)))) : (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_27 = ((/* implicit */long long int) ((unsigned int) max((min((var_5), (((/* implicit */int) (unsigned short)12480)))), ((+(((/* implicit */int) (unsigned char)55)))))));
}
