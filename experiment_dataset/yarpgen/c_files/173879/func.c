/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173879
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) var_1)), (var_9)))));
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned short) var_2)), (max((((/* implicit */unsigned short) (_Bool)0)), (var_3))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0)));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */int) 5360772665896827468LL);
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_22 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-26LL)))) ? (0) : (((/* implicit */int) arr_0 [i_0])));
            var_23 ^= ((/* implicit */signed char) arr_4 [6U]);
        }
        for (int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_24 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_0])));
            var_25 = ((/* implicit */unsigned long long int) 4294967295U);
        }
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_26 &= ((/* implicit */unsigned short) arr_3 [0U] [i_3]);
            arr_13 [i_0] = ((/* implicit */_Bool) 526006787U);
        }
        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_27 = ((((/* implicit */_Bool) max((6501185703096891394LL), (((/* implicit */long long int) 24))))) ? (max((max((arr_5 [i_0] [i_4] [(short)3]), (((/* implicit */unsigned int) (signed char)45)))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)79)), ((short)29296)))))) : (((arr_4 [i_4]) | (arr_8 [i_4] [i_4]))));
            var_28 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) : (3447860708U)));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                arr_21 [i_0] [(signed char)8] [(signed char)8] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (_Bool)1))))), (1)))), (max((((/* implicit */long long int) (short)17238)), (min((5360772665896827448LL), (((/* implicit */long long int) 526006790U))))))));
                var_29 = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (((long long int) (_Bool)1))));
                arr_22 [i_0] [17LL] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0]);
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) 14))));
            }
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) (signed char)-46);
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_32 = ((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0]))));
                    var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)54)) ? (max((max((((/* implicit */int) arr_7 [i_6])), (595950816))), (((/* implicit */int) max(((unsigned char)191), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) arr_14 [i_6] [i_4] [i_6]))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_34 -= ((/* implicit */signed char) max((((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_6 [i_7] [i_4] [i_7])), (18446744073709551598ULL))))), (max((((/* implicit */int) arr_26 [i_4] [i_4] [i_7] [i_8])), (((((/* implicit */_Bool) arr_10 [8] [i_6])) ? (((/* implicit */int) (short)29282)) : (((/* implicit */int) (unsigned short)13536))))))));
                        var_35 = ((/* implicit */short) min((max((((/* implicit */long long int) 526006788U)), (0LL))), (((/* implicit */long long int) arr_6 [i_4] [6] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_36 = ((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_7]);
                        var_37 ^= ((/* implicit */signed char) var_9);
                        var_38 = ((_Bool) 4294967277U);
                    }
                    var_39 = ((/* implicit */int) ((max((((/* implicit */unsigned int) max(((unsigned short)65523), (((/* implicit */unsigned short) var_4))))), (min((arr_4 [i_7]), (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_6] [0LL] [i_7] [i_0])))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) arr_18 [(unsigned short)10] [i_0] [i_6] [(signed char)15])) < (((/* implicit */int) (signed char)19)))), ((_Bool)1)))))));
                }
            }
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                var_40 = ((/* implicit */long long int) max((((var_9) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29297)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_4] [(short)10] [i_0] [i_10]))))))), (((/* implicit */unsigned long long int) max((min(((signed char)-46), (((/* implicit */signed char) (_Bool)1)))), (((signed char) 1U)))))));
                var_41 = ((/* implicit */_Bool) 547275032);
            }
            for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_42 = ((/* implicit */int) 4175919025840535365LL);
                    var_43 ^= ((/* implicit */short) max((((/* implicit */long long int) max(((short)17), (((/* implicit */short) arr_26 [(signed char)18] [i_11 + 2] [i_12] [(_Bool)1]))))), (max((max((((/* implicit */long long int) 5U)), (4323203796140580862LL))), (min((((/* implicit */long long int) (_Bool)0)), (arr_17 [(_Bool)1])))))));
                }
                for (unsigned short i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_44 = ((/* implicit */short) var_6);
                        var_45 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (1412231840)));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_46 = ((/* implicit */int) 9086540543624429679ULL);
                        arr_47 [i_11] [i_0] [i_11 - 1] [i_13] [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (min((6166572959835741484ULL), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-4), ((short)6624))))) == (arr_44 [(_Bool)1] [20U]))))));
                    }
                    arr_48 [3] [i_0] [20ULL] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((max((var_8), (var_8))), (min((74037319), (((/* implicit */int) arr_12 [(short)0] [(_Bool)1] [i_13]))))))), (((unsigned int) ((unsigned long long int) (short)11)))));
                }
                var_47 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 5360772665896827468LL)) ? (891617369) : (((/* implicit */int) var_10)))), (-1234175197)));
                var_48 -= ((/* implicit */long long int) ((((_Bool) (unsigned char)53)) ? (138166104) : (((/* implicit */int) (short)-13994))));
                var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned char) (_Bool)0))))) ? (max((arr_38 [i_0] [i_4] [(signed char)5] [i_4] [i_4]), (((/* implicit */int) arr_18 [i_4] [i_0] [i_4] [i_0])))) : (((/* implicit */int) min(((unsigned short)65524), (((/* implicit */unsigned short) ((signed char) (signed char)0))))))));
            }
        }
    }
}
