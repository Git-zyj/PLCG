/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168841
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
    var_13 = ((((/* implicit */_Bool) 651498726)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) min((-2165558550975507631LL), (((/* implicit */long long int) arr_1 [i_0])))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : ((~(((/* implicit */int) var_8))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] [i_2] [i_2] [2LL] [i_1] [i_0] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [19U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [2U]))))), (((/* implicit */long long int) ((arr_0 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])))))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)76)), (var_10))))));
                        var_14 *= ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2165558550975507648LL)) || (((/* implicit */_Bool) 4447536454768429567LL)))))) / (min((((/* implicit */long long int) var_10)), (2165558550975507630LL))))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(arr_7 [i_0]))), (((/* implicit */long long int) (short)-19072))))) ? ((+(((18446744073709551613ULL) / (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) -4463169521478200532LL))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) : (min((((/* implicit */int) var_7)), (-1703460789))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) min((min((arr_0 [i_4]), (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19071))) : (arr_0 [i_4])))));
            var_16 = ((/* implicit */unsigned short) (short)-19085);
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_18 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_5] [i_5] [i_0]), (arr_17 [i_0] [i_5] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((~(min((4160694178U), (((/* implicit */unsigned int) (signed char)127))))))));
            arr_19 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_5] [i_0])) / ((+(((/* implicit */int) (short)30635))))));
            var_17 += ((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)30627)))), (((((/* implicit */int) ((arr_3 [i_0] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) (short)15000)))))) ^ ((~(((/* implicit */int) (signed char)-1))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_6])) | (((/* implicit */int) arr_10 [i_0] [i_0] [(short)11] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_6] [i_6] [i_0])), (arr_20 [(short)18])))) : (((/* implicit */int) arr_20 [i_0]))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_6] [i_7] [i_8] [i_9] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_16 [i_0] [i_0])) <= (min((((/* implicit */unsigned int) arr_1 [i_8])), (var_6))))))) / (((((((/* implicit */_Bool) var_4)) ? (arr_23 [i_0] [i_6] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)128))))) + (((/* implicit */long long int) arr_0 [i_9]))))));
                            arr_29 [(signed char)17] [i_6] [i_6] [(signed char)17] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_6])), (5862744604878262776ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6] [i_0])) || (((/* implicit */_Bool) arr_14 [i_7] [i_0]))))) : (((/* implicit */int) arr_22 [i_9] [i_7] [i_6] [i_0]))));
                            var_19 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (min((((/* implicit */unsigned long long int) arr_24 [i_6])), ((~(arr_8 [i_7] [i_8] [i_7] [i_0])))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */long long int) ((signed char) (~(arr_16 [i_0] [i_6]))));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((((/* implicit */int) (short)19075)) < (((/* implicit */int) (signed char)8)))))) ? (134273117U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 4; i_11 < 19; i_11 += 4) 
        {
            arr_35 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)723)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned short)65532))));
            var_21 ^= ((/* implicit */int) arr_5 [16LL] [i_10]);
        }
        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))) / (13439140355500370822ULL))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (309260674583461860LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6028)))))) ? (((/* implicit */unsigned int) ((int) arr_15 [i_10] [i_12]))) : (((unsigned int) arr_24 [i_10]))));
            arr_38 [i_10] [i_12] [(signed char)5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_10] [i_12] [i_12] [i_10]))));
        }
        /* LoopSeq 1 */
        for (short i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (short i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        {
                            var_24 = arr_23 [i_13 + 3] [i_13 + 3] [i_13 + 3] [6LL];
                            arr_47 [i_10] [i_13] [i_10] [i_15] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_45 [i_14] [i_14] [i_14 + 1] [(signed char)12] [i_14])) : (((/* implicit */int) arr_24 [i_14 - 3]))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5374221264876473759LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_13 [i_14] [i_14] [0LL])));
                        }
                    } 
                } 
            } 
            arr_48 [i_13] [(signed char)7] = ((/* implicit */short) ((((/* implicit */int) arr_6 [0] [i_13 + 1])) ^ (((/* implicit */int) arr_6 [i_10] [i_13 + 3]))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)79)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 134273103U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14719))) : (451337882U))))));
            arr_49 [i_13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-32760))) <= (arr_26 [i_13 + 4] [i_13 + 4] [i_13 - 1] [15LL])));
            arr_50 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_13] [i_13] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10] [i_10] [i_13] [i_13])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_39 [i_10] [i_10] [i_13])));
        }
    }
    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_18 = 4; i_18 < 15; i_18 += 1) 
        {
            for (long long int i_19 = 4; i_19 < 16; i_19 += 4) 
            {
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_46 [i_20] [6U] [i_20] [7U] [i_20] [i_20] [i_19 + 1])) ? (((/* implicit */int) arr_37 [i_19] [(unsigned short)18] [i_19 - 4])) : (((/* implicit */int) arr_10 [i_20] [i_20] [i_20] [i_19 + 2]))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_17] [i_18 + 2] [i_20])) / (((/* implicit */int) arr_37 [i_17] [i_18 - 3] [i_20]))))) < ((~(arr_8 [i_19 - 4] [14LL] [0LL] [i_19])))));
                        arr_61 [i_17] [17LL] [i_18] [17LL] [i_20] [i_20] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [(signed char)0] [i_18 + 2]))))), (min((((/* implicit */unsigned int) arr_14 [i_19] [i_20])), (arr_39 [i_17] [i_18 - 3] [(signed char)15])))))));
                        arr_62 [i_17] [i_18] [i_17] [i_20] = arr_14 [i_17] [i_18 - 4];
                    }
                } 
            } 
        } 
        var_29 ^= ((/* implicit */long long int) ((unsigned int) (short)19084));
    }
    var_30 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (short)-30635))))));
    var_31 = ((/* implicit */long long int) ((7201666342016709394LL) < (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) ((-2165558550975507634LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26948)))))))))))));
    var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), ((((+(8571483881221669787ULL))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (9148))) - (20))))))))));
}
