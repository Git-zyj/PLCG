/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136760
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_19 &= ((/* implicit */unsigned int) var_9);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((min((var_3), (((/* implicit */unsigned short) var_2)))), (min((var_6), (var_4))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_8))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */long long int) var_5);
                                var_23 += ((/* implicit */unsigned char) min((-3496586306808029553LL), (-3496586306808029553LL)));
                                var_24 = ((/* implicit */unsigned char) min(((+((-(var_18))))), (((/* implicit */unsigned long long int) (~(3496586306808029552LL))))));
                                var_25 = ((/* implicit */unsigned char) min((3496586306808029559LL), (-3496586306808029553LL)));
                                var_26 ^= min(((~(var_18))), (((/* implicit */unsigned long long int) (~(var_8)))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [4ULL] [(unsigned char)10] [i_3] = min((min((min((((/* implicit */long long int) var_14)), (var_8))), (((/* implicit */long long int) min((var_0), (var_0)))))), (((/* implicit */long long int) min(((unsigned char)16), ((unsigned char)16)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((min((min((var_11), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_13)))))), (min((min((5215053660224141584ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_13), (var_13))))))));
                        var_28 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), ((-(-3496586306808029577LL)))));
                        arr_24 [i_1] &= var_7;
                        arr_25 [9ULL] = ((/* implicit */unsigned short) var_0);
                        var_29 &= (+(min((((/* implicit */unsigned long long int) var_7)), (var_9))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned int) min((min((var_11), (min((((/* implicit */unsigned long long int) var_10)), (var_11))))), (((/* implicit */unsigned long long int) var_4))));
    var_31 ^= ((/* implicit */long long int) var_5);
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (min((((/* implicit */unsigned long long int) min((var_7), (min((-2592580313687221526LL), (((/* implicit */long long int) 430670785))))))), (min((min((((/* implicit */unsigned long long int) var_2)), (var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_17))))))))));
    /* LoopNest 3 */
    for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            {
                                var_33 += ((/* implicit */unsigned short) min((min((min((var_18), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_8)))))), (((/* implicit */unsigned long long int) var_16))));
                                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((unsigned char)239), ((unsigned char)243))))));
                                var_35 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))));
                            }
                        } 
                    } 
                    var_36 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)46370), (((/* implicit */unsigned short) (unsigned char)241)))))));
                }
            } 
        } 
    } 
}
