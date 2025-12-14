/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158225
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 ^= (short)-1;
                    arr_7 [i_1] = max(((short)-1), (((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (var_1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4826)) / (((/* implicit */int) (short)-4826))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((3273534107358236001ULL), (((/* implicit */unsigned long long int) var_6)))) >= (var_16)))) + (((/* implicit */int) (short)-4801))));
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) (((!(arr_10 [i_3]))) ? (((/* implicit */int) ((short) (unsigned short)40002))) : ((~(((/* implicit */int) arr_10 [i_3]))))));
        var_21 = max((((/* implicit */unsigned int) ((signed char) arr_4 [12]))), ((~(arr_4 [12ULL]))));
        var_22 = ((/* implicit */unsigned long long int) max((((arr_9 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))))), (((unsigned int) max((3273534107358236005ULL), (((/* implicit */unsigned long long int) (short)1)))))));
        var_23 *= ((/* implicit */_Bool) (short)-1);
    }
    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) arr_13 [(signed char)0])) ? (((/* implicit */int) arr_13 [(short)12])) : (((/* implicit */int) arr_13 [(unsigned char)8])))))))))));
        var_25 = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [(short)5] |= ((/* implicit */unsigned int) var_10);
        var_26 |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_5 - 3] [i_5 - 2])) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_5 + 2])) : (((/* implicit */int) (short)0))))))) << (((13719675953183646175ULL) - (13719675953183646148ULL)))));
        /* LoopSeq 3 */
        for (short i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            var_27 = 18446744073709551615ULL;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    {
                        var_28 ^= ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40002))))), (max((((/* implicit */long long int) ((arr_15 [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (var_0)))));
                        arr_26 [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? ((~(((/* implicit */int) (short)-4826)))) : (((/* implicit */int) arr_21 [i_5] [i_6 - 2]))))) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) (short)4834)))) : ((+(((/* implicit */int) (short)1))))));
                        arr_27 [i_8] = max((((max((((/* implicit */unsigned long long int) (unsigned short)25514)), (10728643306386003545ULL))) + (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3482908482258941214ULL)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    {
                        arr_34 [i_5] [i_5] [i_9] [i_5] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_5 - 3] [i_5 - 3] [i_5]))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_13 [i_10])))))) ? (var_3) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)25535)) / (((/* implicit */int) arr_13 [i_10])))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) 4003302244U))));
                            arr_38 [i_10] [i_9] [8ULL] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_33 [i_5 + 2] [i_5 - 3])))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            var_31 *= ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5 + 2] [i_5 - 1]))) & (((arr_40 [i_5] [i_5] [i_5] [i_5] [i_12]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned int) arr_12 [i_12] [i_12]))));
                            arr_41 [i_12] [i_12] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2905730537U)) ? ((+(15173209966351315615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (unsigned short)40002))))))) * (((/* implicit */unsigned long long int) (+((-(var_0))))))));
                            var_32 ^= ((/* implicit */unsigned short) max((max((var_8), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_5 + 2] [i_6] [i_9] [i_12] [i_10] [i_12]))))))), (((/* implicit */unsigned long long int) -1))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            var_33 |= ((/* implicit */short) (~((+(((/* implicit */int) (unsigned short)40000))))));
                            var_34 = ((/* implicit */short) ((((((/* implicit */int) arr_22 [i_5 - 3] [i_6 + 1] [i_6] [i_6 - 2])) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_8))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_37 [i_10] [i_10] [i_9] [i_5] [i_10])))))) != (var_5))))));
                            var_35 *= ((/* implicit */unsigned char) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_11)))))))));
                        }
                    }
                } 
            } 
            var_36 *= ((/* implicit */unsigned char) var_10);
            arr_44 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((int) 2424337738U)), (((((/* implicit */_Bool) arr_36 [i_5])) ? (((/* implicit */int) arr_28 [i_5 - 3] [i_6] [i_6])) : (((/* implicit */int) (short)-1))))))) - (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) + (var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (var_10) : (15173209966351315613ULL))) : (((((/* implicit */_Bool) (short)3)) ? (2712681123454313128ULL) : (((/* implicit */unsigned long long int) arr_25 [5LL] [i_6] [i_6] [i_6]))))))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 4; i_14 < 20; i_14 += 1) 
        {
            arr_48 [i_14] [i_14] [i_5] = ((/* implicit */signed char) ((unsigned short) (~(0ULL))));
            /* LoopSeq 2 */
            for (unsigned short i_15 = 2; i_15 < 20; i_15 += 4) /* same iter space */
            {
                arr_51 [i_15] [i_14] [i_5] = ((/* implicit */unsigned long long int) arr_30 [i_5] [i_5] [i_5 + 1] [i_15] [i_14] [i_14 + 1]);
                arr_52 [i_15] [i_14] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25550)) && (((/* implicit */_Bool) 0ULL))));
                var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_50 [i_5 - 2])) * (((/* implicit */int) arr_12 [i_15 + 2] [i_14 - 2]))));
            }
            for (unsigned short i_16 = 2; i_16 < 20; i_16 += 4) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (short)-1))));
                var_39 ^= ((/* implicit */short) (+(3273534107358236001ULL)));
                arr_56 [i_5] [i_14] [4ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_16 + 2])) ? (((/* implicit */int) arr_24 [i_5 - 3] [i_14] [i_16] [i_16 - 2])) : (((/* implicit */int) (unsigned char)212))));
                arr_57 [i_5] [i_5] [i_14] [i_16] = ((/* implicit */short) var_12);
            }
        }
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            arr_60 [i_17] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (max((((/* implicit */unsigned long long int) arr_15 [i_5 + 2])), (var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_6), (((/* implicit */short) arr_20 [i_5] [i_5] [i_5]))))))))));
            var_40 ^= ((/* implicit */unsigned int) var_12);
        }
    }
}
