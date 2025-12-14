/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15588
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_18))));
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 141021302)), (var_5)))) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)60164))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)39))) : (var_10)))))), ((+(((var_19) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) 141021309);
                    var_21 = (((+(((/* implicit */int) var_16)))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (arr_9 [i_0] [i_0] [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((-4276299721584901260LL), (((arr_0 [(signed char)8]) / (-4276299721584901260LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2] [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)18)) ? (-4276299721584901260LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)217))))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((max((1354247242U), (((/* implicit */unsigned int) var_14)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)65517))))))) == (((/* implicit */int) arr_8 [i_1] [i_2]))));
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) * ((+(2285830676U)))))) ? (((((/* implicit */int) (unsigned short)0)) << (((141021302) ^ (141021302))))) : (((((/* implicit */int) (unsigned char)245)) << (((1354247242U) - (1354247240U)))))));
                            var_24 = ((unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 4276299721584901259LL)) || (((/* implicit */_Bool) var_19)))))));
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [11LL])) ? (((/* implicit */long long int) min((81709334), (((/* implicit */int) (unsigned short)65517))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_2] [i_0])) ? (9197245237461470827LL) : (arr_18 [i_0] [i_1] [i_1] [(unsigned short)4] [i_5] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)480)) ? (((/* implicit */int) (short)8792)) : (((/* implicit */int) (unsigned short)0))))) : (max((-3063877938050591758LL), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0] [i_5] [i_5]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            arr_23 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_11 [i_6 - 3] [i_2] [i_2] [i_5] [i_2]), (arr_11 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6] [i_5])))) ^ (4276299721584901259LL)));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)25), (((/* implicit */unsigned short) (unsigned char)46))))) ? (-6912366489883830341LL) : (((/* implicit */long long int) 2113864059U))));
                            var_27 = ((/* implicit */long long int) arr_15 [i_6] [i_1] [i_2]);
                        }
                        var_28 ^= ((/* implicit */long long int) (unsigned short)13552);
                        var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */short) var_2)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_19)))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 24; i_7 += 4) 
    {
        arr_28 [i_7] = 3502253107U;
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    var_30 ^= ((/* implicit */long long int) var_6);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 23; i_11 += 3) 
                        {
                            {
                                arr_41 [i_7] [i_7] [i_9] [i_10] [i_9] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6912366489883830341LL)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (signed char)94))))) || (((/* implicit */_Bool) (unsigned char)210))));
                                var_31 += ((/* implicit */unsigned short) ((((arr_25 [i_7 - 1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_35 [i_7 + 1] [17LL])) - (63)))));
                                var_32 &= ((1806244171) & (((/* implicit */int) (short)-32747)));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32747)) || (((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7] [i_8] [i_9]))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (unsigned short i_13 = 2; i_13 < 23; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    {
                        var_34 ^= ((/* implicit */long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned short)36119))));
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_13))));
                        arr_49 [i_12] [i_12] [i_13 + 2] [i_12] [i_14] [i_7 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 6833645371899615156LL)))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 3; i_15 < 10; i_15 += 1) 
    {
        arr_52 [i_15] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)216))));
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_36 ^= (unsigned char)172;
                        arr_62 [i_15] [i_17] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) -9197245237461470827LL)) || (((/* implicit */_Bool) (unsigned char)57))))) | ((((~(((/* implicit */int) var_4)))) + (((/* implicit */int) var_18))))));
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned int) (+(var_10)));
}
