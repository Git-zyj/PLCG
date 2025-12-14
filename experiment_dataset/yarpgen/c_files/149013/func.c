/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149013
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
    var_18 = ((/* implicit */unsigned short) (unsigned char)251);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((arr_0 [i_0 + 4]), ((~(((/* implicit */int) (unsigned short)3679))))));
        arr_2 [8] = ((/* implicit */int) max((((unsigned short) (unsigned short)47186)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-22353)))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 7; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_20 = max(((~(arr_9 [i_3 + 3] [i_3 + 3] [i_4] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(short)7])) > ((~(((/* implicit */int) (short)-22345))))))));
                        var_21 -= ((/* implicit */unsigned short) (((~(0))) < (max((((((/* implicit */_Bool) (unsigned short)19583)) ? (var_4) : (((/* implicit */int) var_13)))), (((((/* implicit */int) arr_12 [i_4] [(short)2] [i_1] [i_4])) * (((/* implicit */int) (short)-8192))))))));
                        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (14)))));
                    }
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 1) 
                    {
                        var_23 |= ((/* implicit */unsigned char) 4294967294U);
                        var_24 ^= ((/* implicit */unsigned long long int) (-(max((var_9), (((/* implicit */int) (short)22358))))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_15 [i_5] [i_2 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 2] [i_2 - 3] [i_5 - 3]))) : (arr_9 [i_1] [i_2 - 2] [i_1] [4ULL]))), (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */int) var_3))))))))));
                        var_26 -= ((/* implicit */unsigned short) max((((/* implicit */int) var_16)), (min((arr_6 [i_5 + 1]), ((~(((/* implicit */int) arr_12 [(unsigned short)10] [i_5] [(unsigned short)10] [(_Bool)1]))))))));
                        arr_16 [i_2] [i_2] [i_2] [i_2] = min(((unsigned short)9056), (((/* implicit */unsigned short) (short)-22345)));
                    }
                    arr_17 [i_2] [i_2 - 1] [8U] [(short)2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((unsigned char) (unsigned short)56485)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 7; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_27 = ((min(((+(0))), (((((arr_8 [(signed char)3] [i_2 - 3] [i_2 - 3] [i_2 - 3]) + (2147483647))) << (((((/* implicit */int) (unsigned short)39168)) - (39168))))))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 - 1])) >= (((/* implicit */int) (_Bool)1))))));
                                arr_24 [(unsigned char)5] [i_2] [(unsigned char)5] [(signed char)9] [i_2] [(signed char)9] [i_7] = ((/* implicit */short) arr_12 [i_2] [i_1 - 1] [i_1 - 3] [i_2]);
                                var_28 &= ((/* implicit */int) ((unsigned char) ((var_4) <= (((/* implicit */int) (!(((/* implicit */_Bool) -8))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) 14U)))))))) & ((+((-(((/* implicit */int) arr_11 [i_1] [(unsigned char)0])))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_30 = arr_9 [(short)10] [i_2 - 3] [i_2] [i_2];
                                var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))));
                                var_32 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2048))))) ? (arr_19 [i_2 - 3] [i_2] [i_2 - 3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) var_1))))))))));
                                arr_31 [i_1 + 2] [i_2] = ((/* implicit */unsigned char) arr_29 [i_2] [10U] [10U]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_19 [i_1 - 1] [(unsigned short)4] [i_1 - 2] [(short)2])))) ? (arr_19 [i_1 - 2] [8ULL] [(signed char)4] [0ULL]) : (((((/* implicit */_Bool) -2147483632)) ? (((/* implicit */unsigned int) -11)) : (975851032U)))));
        /* LoopSeq 1 */
        for (short i_10 = 2; i_10 < 10; i_10 += 4) 
        {
            arr_34 [i_10 + 1] [i_10 + 1] = ((/* implicit */unsigned short) (+(((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_1] [7ULL] [i_1 - 1])))))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9250))) : (16210628003211514777ULL)));
            arr_35 [i_10] = ((/* implicit */short) (-((-(((/* implicit */int) arr_10 [i_1 + 2] [i_10]))))));
            var_35 = (+((~((-(-11))))));
            var_36 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_1 - 3] [i_10 - 2])) >> (((((/* implicit */int) arr_3 [i_1 - 2] [i_10 + 1])) - (50155))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1] [i_10 - 2])) == (((/* implicit */int) arr_3 [i_1 - 2] [i_10 - 2])))))));
        }
    }
    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 3) 
    {
        arr_40 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_36 [i_11]), ((unsigned short)55471)))) ? ((~(10878410924852091235ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))))) || (((/* implicit */_Bool) ((arr_38 [i_11 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11 - 2]))))))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_44 [i_12] [(unsigned short)18] [14U] = ((/* implicit */_Bool) (~(3319116264U)));
            var_37 ^= var_2;
            var_38 *= ((/* implicit */int) ((arr_43 [(unsigned short)0] [i_12] [(unsigned short)0]) >= (arr_0 [i_12])));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 20; i_13 += 2) 
        {
            var_39 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)9233)) : (arr_45 [(unsigned short)18] [1] [i_13 - 1]))))));
            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
        }
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_41 = ((/* implicit */short) (-(arr_0 [i_14])));
        /* LoopSeq 4 */
        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-2147483647 - 1)) : (var_14)));
            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_15])))))));
        }
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 9)) ^ ((~(3411705593518436605ULL)))));
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_16] [i_14])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned short)27851)) : ((~(((/* implicit */int) arr_51 [(unsigned char)0] [i_14] [i_14])))))))));
        }
        for (int i_17 = 1; i_17 < 21; i_17 += 1) 
        {
            arr_60 [i_17] = ((int) (unsigned char)219);
            var_46 = ((/* implicit */short) ((975851032U) >> (((((/* implicit */int) arr_49 [i_17 - 1] [i_17 - 1])) + (11045)))));
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (+(((/* implicit */int) arr_50 [(unsigned short)3] [i_17 + 2])))))));
        }
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            var_48 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (short)29695)) : (((/* implicit */int) (unsigned char)84)))) / ((-(((/* implicit */int) (unsigned char)114))))));
            arr_64 [i_18] [i_14] [i_18] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
        }
    }
    var_49 = ((/* implicit */unsigned short) var_2);
}
