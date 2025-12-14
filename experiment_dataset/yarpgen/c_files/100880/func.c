/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100880
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
    var_18 = ((/* implicit */unsigned char) ((var_0) % (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned long long int) ((var_14) ? (-6) : (1506385021)))), (arr_0 [i_0 + 2]))));
                        arr_9 [i_0] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) -4928151467252092216LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_0);
                            var_21 ^= ((/* implicit */_Bool) var_11);
                            arr_20 [i_0] [i_0] [i_4] [i_0 + 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (var_15) : ((+(((/* implicit */int) arr_6 [i_0] [i_4] [i_5] [i_7 - 1]))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((_Bool) (-(arr_7 [i_0 + 1] [i_0 + 2] [i_6] [(_Bool)1] [i_7 - 1])))))));
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_12 [(signed char)6] [i_0 + 1])) ? (20U) : (20U))), (((/* implicit */unsigned int) (!((_Bool)1))))));
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) var_4))))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -70989409))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967276U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_24 *= (-(((((/* implicit */_Bool) ((short) arr_16 [i_8] [i_8] [i_0] [4LL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 + 3]))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [17LL] [(_Bool)1])) ? (var_12) : (2753750660U))))));
            /* LoopSeq 4 */
            for (unsigned short i_9 = 2; i_9 < 24; i_9 += 1) 
            {
                var_25 -= ((/* implicit */unsigned char) 20U);
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    var_26 += ((/* implicit */signed char) (-((-(((/* implicit */int) var_9))))));
                    var_27 = ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)53)))), ((-(((/* implicit */int) ((short) arr_26 [i_0 + 1] [i_9])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_31 [i_0] [i_10] [i_9] [i_10] [7LL] = ((/* implicit */short) var_1);
                        var_28 = ((/* implicit */unsigned char) var_16);
                    }
                    for (short i_12 = 1; i_12 < 24; i_12 += 3) 
                    {
                        arr_35 [i_0] [i_8] [i_9 - 1] [i_10] [(unsigned char)15] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_6 [14ULL] [i_0] [i_9] [i_10])) >= (var_4)))))) | ((+(arr_11 [i_12 + 1])))));
                        var_29 |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((4294967275U), (((/* implicit */unsigned int) var_17))))) ? ((+(13726594530064437941ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [(unsigned char)18] [i_8] [(unsigned char)18]))))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967275U))));
                    }
                }
            }
            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_14 = 1; i_14 < 22; i_14 += 4) 
                {
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((short) 3318304017U)))));
                    var_32 = ((/* implicit */unsigned char) ((signed char) (+(((((/* implicit */_Bool) var_10)) ? (549755813887ULL) : (var_0))))));
                    var_33 -= ((/* implicit */unsigned int) var_13);
                    arr_42 [i_0 + 3] = ((/* implicit */unsigned char) ((long long int) 6126726232845471997ULL));
                }
                for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15999))))) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_8]))) / (arr_12 [i_13] [6ULL])))))) != (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (unsigned short)65535)), (38U))))))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)28555)))))));
                    arr_45 [i_0 + 2] [i_0 + 2] [i_13] [i_0 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1541216635U)) ? (((/* implicit */int) (short)-10668)) : (min((909603218), (((/* implicit */int) (_Bool)0))))))));
                }
                for (unsigned short i_16 = 1; i_16 < 23; i_16 += 2) 
                {
                    arr_48 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */signed char) arr_46 [(signed char)11] [(_Bool)1] [i_13] [i_16]);
                    arr_49 [i_0] [i_0 + 2] [2LL] [2LL] [(unsigned char)22] [i_16 + 2] = ((/* implicit */short) ((((_Bool) (short)29866)) ? (((((/* implicit */_Bool) min((976663272U), (((/* implicit */unsigned int) 1725679554))))) ? (var_0) : ((+(3842568866113339110ULL))))) : (((((/* implicit */_Bool) arr_43 [i_16])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (arr_14 [i_13])))));
                    var_36 = ((/* implicit */long long int) var_8);
                    var_37 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) arr_24 [i_0 - 1])) : ((-(-1725679555))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_54 [i_8] [i_17] [11] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_13])) : (((/* implicit */int) arr_53 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) ((unsigned short) var_10))) ? (var_4) : (((((/* implicit */int) arr_18 [i_13] [i_8] [i_13] [(_Bool)1] [i_13])) / (var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 33U)) ? (((/* implicit */int) arr_8 [i_13] [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) (_Bool)1)))))));
                }
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */unsigned int) -1725679557)) : (28U))))))));
                            var_40 = ((/* implicit */_Bool) var_15);
                            var_41 += ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) min((((/* implicit */short) var_2)), (var_17))))))), ((-(((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    var_42 = ((/* implicit */signed char) (((+((((_Bool)1) ? (0LL) : (((/* implicit */long long int) 2753750636U)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_20 + 1])))))));
                    var_43 &= ((((/* implicit */_Bool) ((signed char) arr_10 [i_13] [i_20 + 1] [i_0 + 1]))) ? (((/* implicit */long long int) (-(4294967287U)))) : (var_16));
                }
            }
            for (long long int i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
            {
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (+((+(arr_36 [i_0 + 2]))))))));
                var_45 = var_13;
            }
            for (long long int i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
            {
                var_46 = ((/* implicit */signed char) 6218562083652022322LL);
                var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) min((((short) (_Bool)0)), (((/* implicit */short) (_Bool)1)))))));
            }
        }
    }
}
