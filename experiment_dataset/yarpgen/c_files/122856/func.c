/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122856
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned short) var_1)))), (min((var_9), (((/* implicit */unsigned short) var_16))))))), (var_8)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6)))))) : (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) var_17))) : (((/* implicit */int) var_17))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_16))) == (((/* implicit */int) var_6))))))))));
                        var_22 = ((/* implicit */long long int) var_5);
                        arr_8 [i_0] [i_2] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_13);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_23 |= ((/* implicit */unsigned char) var_12);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_6))));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (var_10))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-87)))) : (var_11)));
                                var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -4634317627794147862LL))) != (((/* implicit */int) var_15))))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (var_13)))));
                                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_15)) >= (((/* implicit */int) ((signed char) var_14))))) || (max((((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_4)))) + (((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_14))))))));
                                arr_24 [(signed char)2] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_6))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_12))))))), (((unsigned long long int) var_17))));
                                var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (var_10)))))), ((((!(((/* implicit */_Bool) var_9)))) || ((!(((/* implicit */_Bool) var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), ((+(9648213995883630561ULL)))));
        arr_25 [i_0] [(signed char)16] &= ((/* implicit */int) min(((~(var_11))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (((int) var_17)))))));
    }
    for (unsigned char i_9 = 3; i_9 < 22; i_9 += 2) /* same iter space */
    {
        arr_29 [20ULL] &= var_17;
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_2))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) max((var_10), (var_10)));
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            arr_32 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        }
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (short i_12 = 1; i_12 < 22; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        for (long long int i_14 = 2; i_14 < 22; i_14 += 3) 
                        {
                            {
                                arr_43 [i_9] [i_14] = ((/* implicit */short) var_13);
                                arr_44 [i_11] [i_9 - 2] [i_9 + 1] [i_9 - 3] [i_9] |= ((/* implicit */unsigned char) var_9);
                                arr_45 [i_13] [i_13] [i_11] [(unsigned char)20] [(unsigned char)20] &= ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_4)))))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_7)))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            for (unsigned short i_16 = 1; i_16 < 20; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    {
                        arr_55 [5] [i_9] [i_9] [5] = ((/* implicit */int) var_15);
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_18 = 3; i_18 < 22; i_18 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) var_15);
        arr_58 [i_18] = ((/* implicit */_Bool) var_6);
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_15))))) ? ((~((-(var_5))))) : ((-(((/* implicit */int) var_15))))));
        arr_59 [i_18] = ((/* implicit */unsigned int) var_3);
        var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
    }
    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((min((((/* implicit */unsigned long long int) var_13)), (var_8))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))))));
}
