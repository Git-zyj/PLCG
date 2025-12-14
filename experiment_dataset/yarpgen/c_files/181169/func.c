/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181169
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_2] = ((/* implicit */int) var_10);
                    var_11 *= ((((/* implicit */_Bool) ((6161813733525034344LL) % (6161813733525034344LL)))) ? ((+(6161813733525034344LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (var_3)))))))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (((-((+(6161813733525034344LL))))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) min((871411861), (((/* implicit */int) ((var_10) <= (((var_8) ? (6161813733525034339LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((6209274485360027106LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) / (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-6209274485360027106LL)))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            arr_16 [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) (~(-194804880)));
            arr_17 [i_4] [i_5] = ((/* implicit */short) (unsigned short)2267);
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            var_14 += ((/* implicit */long long int) ((unsigned short) ((_Bool) var_3)));
            var_15 += ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_7))));
            var_16 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)255)))) >> (((/* implicit */int) (unsigned char)0))));
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
        {
            arr_22 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ ((~(((/* implicit */int) var_5))))));
            var_17 = ((/* implicit */long long int) ((unsigned short) var_8));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_10 = 3; i_10 < 21; i_10 += 3) 
                        {
                            arr_31 [i_9] = ((/* implicit */long long int) ((unsigned short) var_3));
                            arr_32 [i_4] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) (_Bool)1))));
                            arr_33 [(unsigned short)2] [i_4 - 1] [i_8] [i_9] [i_10] [i_7] [i_10] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)65535)))));
                            arr_34 [i_10] [i_9] = ((/* implicit */unsigned short) (short)4287);
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 4) 
                        {
                            var_18 |= ((/* implicit */unsigned char) ((max((((unsigned long long int) 6209274485360027106LL)), (((/* implicit */unsigned long long int) (unsigned short)2267)))) << (((((/* implicit */int) (unsigned char)255)) - (254)))));
                            var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_12 = 4; i_12 < 22; i_12 += 4) 
                        {
                            arr_41 [i_4 - 1] [i_7] [i_7] [i_9] [i_9 + 2] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                            arr_42 [i_4 + 1] [(unsigned short)10] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned short)39700)) - (39698)))));
                        }
                        for (unsigned short i_13 = 4; i_13 < 19; i_13 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) min((var_4), (((/* implicit */unsigned short) (unsigned char)3)))));
                            arr_47 [i_4] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            arr_48 [i_9] [i_9] [i_9] [i_8] [i_7] [i_9] = ((((((/* implicit */_Bool) 675486863)) ? (1830997444013902578LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_2))))));
                        }
                        var_21 ^= ((/* implicit */short) ((long long int) ((long long int) (-(var_0)))));
                        arr_49 [i_4 - 1] [i_4 - 1] [i_9] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (unsigned char)156)), (15666330642652328101ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (unsigned short)40665))))) : ((-2147483647 - 1)))))));
                        arr_50 [3ULL] [i_4] [i_9] [i_4] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((int) var_2)))))));
                    }
                } 
            } 
            var_22 *= ((/* implicit */unsigned int) var_7);
        }
        /* LoopNest 3 */
        for (unsigned char i_14 = 3; i_14 < 22; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) (unsigned short)2267)), (max((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL))))));
                        arr_60 [i_4] [i_14] [i_15] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))));
                        var_23 = ((min((((/* implicit */long long int) var_1)), (-2595271012269807516LL))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)241))))));
                        arr_61 [i_4] [i_4] [i_14] [i_15] [i_16] [i_16] = (~(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)239))))), (var_9)))));
                    }
                } 
            } 
        } 
        arr_62 [(unsigned short)5] [i_4 - 1] = ((/* implicit */unsigned short) var_0);
        /* LoopSeq 2 */
        for (unsigned short i_17 = 1; i_17 < 22; i_17 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((18446744073709551605ULL), (((((/* implicit */unsigned long long int) var_0)) & (2780413431057223521ULL)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9007199254740991ULL)))))));
                arr_69 [i_4] [i_18] [14ULL] [i_18] = ((/* implicit */unsigned long long int) (~(2913096702U)));
            }
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_26 += ((/* implicit */short) ((int) var_4));
            var_27 = ((/* implicit */unsigned short) max((var_27), (var_1)));
            arr_73 [i_19] [(short)19] [i_4] = (!(((/* implicit */_Bool) (unsigned char)255)));
            var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_78 [i_4 + 1] [i_19] [i_20] = var_5;
                arr_79 [(unsigned short)1] [i_19] = ((/* implicit */unsigned short) -194804880);
            }
            for (signed char i_21 = 2; i_21 < 21; i_21 += 1) 
            {
                arr_83 [i_4] [i_19] [11] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((-194804880) / (((/* implicit */int) (unsigned char)255))))) ^ (8062992704146501591LL)));
                arr_84 [i_21 + 1] [i_21] [i_19] [(unsigned short)20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_4)))));
            }
        }
        arr_85 [i_4] [i_4 + 1] &= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (216593916151588903ULL)))));
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) ((unsigned char) var_0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)4002)) - (3995))))))))) : (((/* implicit */int) ((unsigned char) var_10)))));
}
