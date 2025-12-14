/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170678
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2958280066U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)246))))) : (((13942857037876268557ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
            var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 1]))));
            var_14 += ((/* implicit */unsigned char) ((short) var_3));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (arr_2 [i_0])));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_7 [i_0 - 1]))))))));
            var_17 += ((/* implicit */unsigned int) var_4);
        }
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) (signed char)107))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((11338039849327872898ULL) - (11338039849327872870ULL)))))) : (4082533351U)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) var_2))))));
            var_20 ^= ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)65535)))));
        }
        for (signed char i_4 = 4; i_4 < 23; i_4 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_1 [i_4] [i_0]))));
            arr_15 [i_0 - 3] [(unsigned short)0] [i_4] |= ((/* implicit */short) var_10);
            arr_16 [20LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (max((((((/* implicit */int) (short)-13474)) | (((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((signed char) (short)15607)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
        {
            arr_21 [i_0] [i_5] [i_5] = ((/* implicit */long long int) (((!(((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_0 - 3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0 - 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0])) > (((/* implicit */int) (_Bool)1)))))))))) : ((~(arr_7 [i_5])))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 4285900677899934315ULL))));
                        var_23 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_10))), (((((/* implicit */_Bool) arr_4 [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_4 [i_5] [i_5 - 2])) : (((/* implicit */int) arr_10 [i_5] [i_5 - 2]))))));
                        var_24 &= ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10236))) : (6323508122139853027ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) | (((/* implicit */int) ((signed char) (signed char)79))))))));
                        arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6])))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) == (var_0)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (signed char)-77))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (short)-15608)))))) ? ((-(((/* implicit */int) (signed char)-108)))) : (((/* implicit */int) ((_Bool) ((unsigned char) arr_13 [i_0] [i_10])))))))));
                            var_28 += ((/* implicit */signed char) (unsigned short)7936);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 2) 
                {
                    arr_42 [i_11] [i_11] [i_8] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5 - 1] [i_11 - 3] [i_0 + 1]))) != (var_11)));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((!(var_7))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_11])))))))))));
                    arr_43 [i_0] [i_0] [i_8] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_11 + 1] [i_11 + 1] [i_5 - 1])) ? (arr_17 [i_11 - 1] [i_11 - 1] [i_5 - 2]) : (arr_17 [i_11 + 1] [i_5 - 2] [i_5 - 1])));
                }
                arr_44 [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) - (2551874668U)));
            }
            for (short i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_30 &= ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) - (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)7741))))))));
                var_31 -= ((/* implicit */long long int) ((unsigned short) (~(max((((/* implicit */unsigned int) var_9)), (var_1))))));
            }
        }
        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 4; i_14 < 22; i_14 += 1) 
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_0 + 1] [i_14 + 1])))))));
                arr_53 [i_0] [i_0] [i_13] [i_14 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_13] [i_0 - 1] [i_14 - 2])) ? (((/* implicit */int) arr_10 [i_14 - 3] [i_0 - 3])) : (((/* implicit */int) (short)-7742))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_13] [i_0 + 1])), (14886821831310351617ULL)))));
            }
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_13] [i_13])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_0] [(short)10] [(short)10] [i_0]))))) ? (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        }
        var_34 = ((unsigned long long int) max((((/* implicit */long long int) (short)-31728)), (((((/* implicit */_Bool) var_9)) ? (3873681524887970685LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3363)))))));
    }
    for (int i_15 = 3; i_15 < 13; i_15 += 2) 
    {
        var_35 = ((/* implicit */_Bool) (unsigned char)179);
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            for (long long int i_17 = 1; i_17 < 13; i_17 += 4) 
            {
                {
                    var_36 = ((/* implicit */_Bool) var_0);
                    var_37 = ((/* implicit */unsigned int) arr_49 [i_15] [(short)9] [i_17 + 1]);
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7594))) * (var_0)))));
    var_39 = ((/* implicit */long long int) ((unsigned short) ((max((var_0), (((/* implicit */unsigned long long int) (signed char)-1)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((var_8) - (1167719623482839375ULL)))))))));
    var_40 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))));
}
