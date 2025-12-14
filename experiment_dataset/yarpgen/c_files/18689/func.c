/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18689
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((var_5) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1699089191617879158LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((5998677955371806267LL) != (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47707))) + (5143459595117215254LL))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_3] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) ^ (var_11)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-95)), ((unsigned short)28270)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-95))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)26)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) var_4))))))));
                        arr_12 [i_3] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((((/* implicit */int) var_5)) % (((/* implicit */int) var_13))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) ((_Bool) (signed char)-105))))))));
                        var_18 |= ((/* implicit */signed char) min((13235145858838043753ULL), (((/* implicit */unsigned long long int) (signed char)102))));
                        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned short)18824)))), (((/* implicit */int) (_Bool)1))));
                    }
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)61874)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (-5143459595117215255LL))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_9))) + (((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)-105))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)5485))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)95))) / (-5998677955371806268LL))))) : (max(((-(7496021455722460926LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) min(((short)-512), (((/* implicit */short) (unsigned char)33))));
                arr_17 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)9148))))) || (var_9)));
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_15)) + (32218)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50056)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) var_8))))));
                                arr_25 [i_4] [i_4] [i_8] [i_8] [i_4] = ((/* implicit */unsigned char) min((((_Bool) var_8)), (((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                                var_24 -= ((/* implicit */unsigned short) var_9);
                                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (signed char)-59))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (short)-18795)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-5998677955371806253LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)38)), ((short)-20310)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        arr_28 [i_4] [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_3))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) ^ (((((/* implicit */_Bool) 47397963U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (var_8)))));
                        var_27 = ((/* implicit */short) (~(((((/* implicit */int) var_5)) >> (((/* implicit */int) var_3))))));
                        arr_29 [i_9] [i_6] [i_5] [i_4] |= ((/* implicit */unsigned char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        arr_30 [i_4] [(unsigned short)2] [i_6 - 1] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) (signed char)58);
                    }
                    for (int i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) var_13);
                        var_29 *= ((signed char) (~(((((/* implicit */int) var_7)) | (((/* implicit */int) var_13))))));
                        var_30 = var_2;
                        arr_35 [i_10] [1U] [i_6 - 2] [i_6] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)96))))), (var_1))) + (((/* implicit */long long int) ((((/* implicit */int) min((var_5), (var_3)))) - (((((/* implicit */int) (unsigned char)222)) >> (((((/* implicit */int) (signed char)94)) - (90))))))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) | (min((-7498484452647418993LL), (var_0)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_5))))) | (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5485)) & (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_15))) - (((((/* implicit */_Bool) (short)3327)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) var_7))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_3))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            arr_43 [i_4] [i_5] [i_6 + 2] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))));
                            var_34 = ((/* implicit */long long int) (-(268435456U)));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) var_15))));
                        }
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) -7498484452647418993LL)) ? (2350218133803555935ULL) : (((/* implicit */unsigned long long int) var_1)))))))));
                        arr_44 [i_6] [i_5] [i_6] [i_11 + 1] = ((/* implicit */unsigned char) var_2);
                    }
                }
                arr_45 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) min((var_5), (var_6))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (8080234373868825283ULL)))) ? (((/* implicit */int) min((var_2), ((signed char)-1)))) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            {
                arr_52 [i_15] = ((/* implicit */int) ((((((var_0) >> (((/* implicit */int) var_3)))) / (((/* implicit */long long int) var_8)))) >> (((var_8) - (1944768144U)))));
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))) << (((((((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)16376)))) ? (((var_5) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)43)))))) - (42))))))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), (max((918058184U), (((/* implicit */unsigned int) var_10))))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65084))))) - (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (short)25997)))))))));
            }
        } 
    } 
}
