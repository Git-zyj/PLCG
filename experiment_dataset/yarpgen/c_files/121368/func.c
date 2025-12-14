/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121368
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)3495)) ? (var_0) : (((/* implicit */int) (short)12639)))), ((-(1787181664))))))));
                var_13 = 1811484818;
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max(((!(((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) ((unsigned short) var_11))) && (((/* implicit */_Bool) var_6)))))))));
                arr_5 [i_0] [i_0] [i_1 - 2] = ((/* implicit */int) (~(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -1787181664)) : (-4433118694990984309LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 1594176143)), (var_7))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */short) var_0);
                            arr_10 [i_0 - 1] [i_1] [i_2] [i_3] = -7103921742997756136LL;
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_6) | (var_9))) ^ (((/* implicit */unsigned long long int) max((1456475339), (((/* implicit */int) var_2)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (unsigned short i_6 = 3; i_6 < 10; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_7))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                arr_24 [i_6] [i_6] = ((/* implicit */long long int) max((min((var_10), (var_10))), (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_8))))));
                                arr_25 [i_4] [i_5] [i_6 - 1] [i_6] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_4))))))))) != (((long long int) ((var_6) ^ (var_11))))));
                                arr_26 [i_6] = ((/* implicit */short) (((((!(((/* implicit */_Bool) (unsigned char)224)))) ? (-1787181685) : (var_4))) / (max((((/* implicit */int) min((var_5), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    arr_32 [i_4] [(unsigned char)0] [i_9 + 3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) * (((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_8))))) - (((unsigned long long int) (short)-21023))))));
                    arr_33 [4LL] [i_9 - 1] [i_10] [i_9] = ((/* implicit */int) (unsigned char)255);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_11 = 2; i_11 < 11; i_11 += 2) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((14655743137329168536ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_7)))))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (var_6))) : (((/* implicit */unsigned long long int) max((-1594176143), (((int) var_11))))))))));
            arr_38 [i_4] [i_11] = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_2))) * (17LL))) / (((/* implicit */long long int) max((var_4), (((/* implicit */int) (short)-21850))))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)18))))));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)80))))))))));
                            arr_47 [i_4] [i_11 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), ((unsigned short)30520))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_11)))) ? (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24658))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))))));
                            arr_48 [i_4] [(short)5] = ((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) (signed char)39)))), (((((/* implicit */int) (short)-17827)) / (((/* implicit */int) (unsigned char)210)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_49 [i_4] [i_13] [i_12] [i_11] [i_14] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-19))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            arr_52 [i_4] [i_15] = -17LL;
            var_21 = ((/* implicit */unsigned short) var_0);
            arr_53 [i_4] [i_4] [(unsigned short)9] = ((/* implicit */short) ((((((/* implicit */unsigned int) var_4)) / (3850125608U))) <= (((/* implicit */unsigned int) ((((max((-1594176138), (var_0))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_6))) - (17731848502502258471ULL))))))));
        }
        arr_54 [i_4] [i_4] = ((/* implicit */unsigned short) (~(min((((unsigned long long int) (unsigned short)33995)), (((/* implicit */unsigned long long int) -1787181665))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
    {
        for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 2) 
        {
            for (unsigned short i_18 = 2; i_18 < 17; i_18 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned short) ((int) max((((/* implicit */unsigned long long int) var_3)), (var_11))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) <= ((-((-(var_3)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_6))))))));
    var_25 = ((/* implicit */unsigned short) ((((int) (-(8639257877618189895LL)))) - (var_0)));
}
