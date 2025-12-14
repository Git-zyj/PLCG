/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108270
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
    var_17 = ((/* implicit */int) var_3);
    var_18 = (-(((/* implicit */int) ((((((/* implicit */_Bool) 9650909965128512200ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4167))) : (68719476735LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) && (((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_3 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) 68719476735LL))))));
            var_20 = ((((/* implicit */_Bool) (signed char)44)) ? (-2146499570190625523LL) : (((/* implicit */long long int) 16383)));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */int) (signed char)-44)) : (1016769338)));
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5518549547572675726ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [11LL] [i_1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) : (arr_3 [i_0 + 2] [i_1])));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_4]) >= (((((/* implicit */_Bool) -4956787445213592763LL)) ? (arr_1 [i_0] [(unsigned short)7]) : (arr_1 [i_2] [i_2])))));
                        arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_2])) / (arr_3 [i_0] [i_2])));
                    }
                } 
            } 
            arr_12 [i_2] [i_0] [i_2] = ((/* implicit */int) ((long long int) var_15));
            var_23 = ((/* implicit */signed char) var_16);
        }
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (arr_6 [2ULL])));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_16 [i_5] [5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (arr_13 [i_5] [i_5])));
        arr_17 [i_5] [i_5] = ((int) ((short) (~(((/* implicit */int) (short)0)))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -157566790)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (short)-1))))))) : (min((((/* implicit */long long int) ((_Bool) (short)-30734))), ((-(var_9)))))));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_7])) ? ((((((~(((/* implicit */int) (signed char)44)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_2 [i_6] [i_7])) ? (((/* implicit */int) var_7)) : (780022209))) + (131))))) : (((((((/* implicit */int) (short)-30734)) + (2147483647))) << (((((/* implicit */int) (signed char)50)) - (50)))))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_6 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94)))))) : (6919704603950090209LL))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-53)) * (((/* implicit */int) (signed char)-1))))) ? ((-(7549675690685829335LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_26 = arr_5 [i_6];
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_28 [i_8] = ((/* implicit */signed char) ((int) var_8));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_27 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) * (1610025680U)));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1778646896)) ? (-220071252) : (((/* implicit */int) ((signed char) (unsigned short)13040))))))));
                }
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_19 [i_6] [i_8])), (6317799030851660279ULL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_11 = 2; i_11 < 7; i_11 += 2) 
                {
                    arr_38 [i_9] [i_8] [5U] [i_11] = ((/* implicit */signed char) (-(((-780022209) / (-157566802)))));
                    arr_39 [i_8] [(signed char)5] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */_Bool) 1374218921)) ? (((/* implicit */int) (unsigned short)13035)) : (((/* implicit */int) (signed char)48)))) - (13035)))));
                    var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -157566801)) ? (((/* implicit */unsigned long long int) var_10)) : (16381914618121569398ULL)));
                    arr_40 [i_6] [i_8] [i_6] [i_11] |= ((/* implicit */unsigned short) (-(var_10)));
                    arr_41 [i_8] = ((/* implicit */unsigned long long int) 906908112008602226LL);
                }
                arr_42 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -466548546))))) >= (((/* implicit */int) var_5))))) : ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (arr_8 [i_8] [i_8] [i_8])))))));
            }
            var_31 = ((/* implicit */unsigned long long int) max((arr_6 [i_8]), ((~(((/* implicit */int) arr_32 [i_6] [i_8]))))));
        }
        for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            arr_45 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (signed char)88)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_6] [i_12])) | (((/* implicit */int) arr_43 [i_6] [i_12]))))) : (min((max((arr_27 [i_12] [i_6] [i_6]), (10490233813719342099ULL))), (((/* implicit */unsigned long long int) ((short) (signed char)-39)))))));
            var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_33 [i_6] [i_6] [i_6] [i_6]))) ? (var_2) : ((-(((/* implicit */int) (unsigned short)15520))))));
            /* LoopSeq 2 */
            for (int i_13 = 2; i_13 < 10; i_13 += 2) 
            {
                arr_48 [i_12] [i_12] [i_12] |= ((/* implicit */unsigned long long int) (+(arr_10 [i_6] [i_6] [i_13] [i_6])));
                var_33 += ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (unsigned short)126)) ? (((/* implicit */unsigned long long int) 906908112008602226LL)) : (4194537015512300312ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
            for (int i_14 = 1; i_14 < 10; i_14 += 3) 
            {
                arr_52 [i_14] [i_14 + 1] [i_14 + 1] = ((((/* implicit */_Bool) ((arr_27 [i_6] [i_14 + 1] [i_14 - 1]) * (arr_27 [i_12] [i_14 - 1] [i_14 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_12] [i_12] [(signed char)6]))) : (((((/* implicit */_Bool) (-(-68719476732LL)))) ? (max((var_15), (((/* implicit */long long int) arr_2 [i_6] [i_12])))) : (((/* implicit */long long int) max((157566802), (((/* implicit */int) arr_22 [(short)0]))))))));
                arr_53 [i_14] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)13035)), (1276958009099737854LL)));
            }
            var_34 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_36 [i_6] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6] [i_12]))) : (7U))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_33 [i_6] [0ULL] [i_6] [i_12])), (arr_13 [i_6] [i_12]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_2)) : (-6280521854699370423LL)))) ? ((~(var_4))) : (max((((/* implicit */long long int) -157566824)), (-6280521854699370417LL))))) : (((((/* implicit */_Bool) (short)-25219)) ? (6280521854699370423LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))));
            arr_54 [i_12] [i_6] [i_6] = (-(var_14));
        }
        var_35 = ((int) (+((-(var_10)))));
        arr_55 [i_6] [i_6] = ((/* implicit */int) arr_5 [i_6]);
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_36 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)52471)) + (((/* implicit */int) (signed char)31)))) >= (arr_6 [i_15])));
        var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_15])) < (((/* implicit */int) arr_5 [i_15]))));
        arr_59 [4ULL] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)1))));
    }
}
