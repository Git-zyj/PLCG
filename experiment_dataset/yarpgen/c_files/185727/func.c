/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185727
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) max((3807449643U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 4294967275U))))))));
        var_15 = ((/* implicit */unsigned int) var_6);
        arr_2 [i_0] = ((/* implicit */int) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 1072693248))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (var_7)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))) & (((unsigned int) (unsigned char)88))));
                arr_11 [i_2] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) var_0)) + (((var_10) | (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((_Bool) var_1)))));
                arr_12 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) var_4))), (((unsigned int) ((unsigned char) var_12)))));
            }
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
            {
                arr_16 [i_2] = ((/* implicit */unsigned char) ((((var_13) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) 8981168124406304290LL)) : (2017612633061982208ULL)))));
                var_17 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) var_6)))));
                var_18 = ((/* implicit */unsigned int) var_10);
            }
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_1)) - (119))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)174)) & (((/* implicit */int) (unsigned char)99)))));
                            arr_28 [i_1] [i_2] [i_5] [i_6] [i_1] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_11)))));
                var_22 = ((/* implicit */short) (!(((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))))));
                var_23 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) / (((/* implicit */int) var_5)))) * (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_4))))));
            }
            var_24 = ((/* implicit */signed char) ((unsigned char) min((var_9), (((/* implicit */long long int) var_3)))));
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_25 -= ((/* implicit */signed char) ((unsigned long long int) ((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))))));
                        arr_35 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (var_8)))));
                        arr_36 [i_1] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_3))))) : (var_2));
                        arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_2] [2ULL] [(signed char)18] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((int) var_2))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_13))))) & (((((unsigned long long int) var_13)) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11))))))));
                            var_27 = ((/* implicit */int) (!(((var_7) < (var_7)))));
                        }
                        for (unsigned short i_11 = 2; i_11 < 20; i_11 += 4) /* same iter space */
                        {
                            arr_43 [21U] [i_2] [i_9] = ((/* implicit */signed char) ((int) (+(13747623527954817101ULL))));
                            arr_44 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) var_3);
                        }
                    }
                } 
            } 
        }
        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            var_28 *= ((/* implicit */unsigned int) var_13);
            var_29 = ((/* implicit */unsigned int) ((signed char) ((((unsigned int) var_0)) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (var_8))))))));
            var_30 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)159));
            arr_47 [i_12] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) ((var_9) ^ (((/* implicit */long long int) var_7))))))));
        }
        for (long long int i_13 = 4; i_13 < 20; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_4))) / (((/* implicit */int) var_11))));
                arr_52 [i_1] [i_1] [i_1] [i_13] = ((/* implicit */signed char) max((((short) ((unsigned char) (unsigned short)0))), (((/* implicit */short) ((_Bool) ((unsigned char) (unsigned short)11605))))));
            }
            for (short i_15 = 1; i_15 < 19; i_15 += 2) 
            {
                var_32 = ((/* implicit */_Bool) var_7);
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (min((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            }
            arr_57 [i_1] [i_13] [i_13] = ((/* implicit */signed char) (~(2837188318594753468ULL)));
        }
        arr_58 [i_1] = ((/* implicit */int) ((unsigned short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_9)))));
        var_34 -= ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_6)))) * (((/* implicit */int) ((short) var_10))))) / (((/* implicit */int) var_12))));
    }
    var_35 = ((/* implicit */long long int) ((unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_13)), (var_8)))));
}
