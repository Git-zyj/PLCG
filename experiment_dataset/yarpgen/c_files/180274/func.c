/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180274
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-20LL))))));
                var_21 ^= ((/* implicit */short) var_14);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            {
                arr_10 [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7)))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(17307872495244461870ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_21 [i_4] [i_4] [14LL] [i_4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) ((((/* implicit */int) ((var_14) >= (((/* implicit */int) arr_16 [(unsigned short)14]))))) == (((/* implicit */int) var_15))))) : (max((((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-103)))), (((/* implicit */int) (unsigned char)1)))));
                                arr_22 [(short)6] [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_6 + 2] [i_6 - 2]), (((/* implicit */unsigned char) var_3)))))) - ((-(var_16)))));
                                arr_23 [i_8] [(unsigned short)14] [i_6] [(short)0] [(short)0] &= ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 15; i_9 += 3) 
                {
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_23 &= ((/* implicit */unsigned int) (unsigned char)25);
                            var_24 -= (unsigned char)31;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 3; i_13 < 19; i_13 += 3) 
            {
                {
                    arr_35 [i_11] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_32 [i_12] [i_13 + 1] [i_13 + 3]))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_11)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            for (unsigned short i_15 = 2; i_15 < 21; i_15 += 4) 
            {
                for (long long int i_16 = 1; i_16 < 21; i_16 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) 0);
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 1; i_17 < 20; i_17 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (var_5)));
                            var_28 -= ((/* implicit */_Bool) ((unsigned short) ((min((((/* implicit */unsigned long long int) 3813701981U)), (var_1))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_37 [i_16 - 1] [i_16 - 1] [(_Bool)1])) : (((/* implicit */int) (unsigned char)35)))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_18 = 1; i_18 < 20; i_18 += 1) /* same iter space */
                        {
                            arr_50 [i_16] [(unsigned char)1] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) (short)9778))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_33 [(_Bool)1] [i_14] [i_14])), (max((((unsigned char) arr_47 [(short)1] [11] [11] [11] [i_16] [i_16] [i_18])), (((/* implicit */unsigned char) var_18)))))))));
                        }
                        for (long long int i_19 = 1; i_19 < 20; i_19 += 1) /* same iter space */
                        {
                            arr_54 [i_16] [i_16] [13LL] [i_19] [i_19] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_19] [(unsigned char)9] [i_15] [i_15] [i_11] [i_11])) || (((/* implicit */_Bool) var_6)))))))));
                            arr_55 [i_11] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_56 [i_11] [i_16] [(unsigned char)9] [i_11] [i_11] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((short)-21686), ((short)9778)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32475))) : (max((((/* implicit */unsigned long long int) (signed char)-121)), (var_7))))), (((/* implicit */unsigned long long int) var_11))));
                        }
                        for (short i_20 = 3; i_20 < 20; i_20 += 3) 
                        {
                            arr_59 [i_16] = ((/* implicit */short) ((15093838348264042584ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            arr_60 [i_16] [i_16] = ((/* implicit */unsigned char) (-(arr_52 [i_11] [(short)2] [(_Bool)1] [i_16] [i_20])));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~((-((+(((/* implicit */int) (short)32490)))))))))));
                        }
                        arr_61 [(signed char)21] [(unsigned char)10] [i_16] [(signed char)16] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((short)0), ((short)-2)))), (min((arr_46 [i_16] [i_15 - 1] [i_16 - 1]), (((/* implicit */unsigned long long int) var_17))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((int) 1236944296407466211ULL)), (((/* implicit */int) ((((/* implicit */int) (short)21690)) >= (((/* implicit */int) (short)-32502)))))))), (((((/* implicit */unsigned long long int) arr_29 [5] [5])) - (max((((/* implicit */unsigned long long int) (short)32501)), (var_0))))))))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)32517)))) ? (((var_5) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_6)) | (-1652116365)))))), (max((((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_45 [i_11] [(signed char)14] [i_11] [i_11] [(short)9] [i_11] [i_11]))), (((/* implicit */unsigned long long int) var_15)))))))));
    }
}
