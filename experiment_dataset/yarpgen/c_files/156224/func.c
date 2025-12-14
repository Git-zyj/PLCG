/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156224
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
    var_13 = ((/* implicit */int) var_7);
    var_14 *= ((unsigned long long int) (~(((/* implicit */int) var_1))));
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) max((min(((signed char)(-127 - 1)), ((signed char)-121))), (((signed char) var_6)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-95)), (var_12)))) ? ((((_Bool)0) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)0])) : (((/* implicit */int) (signed char)-124)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_11 [i_2] = min((((unsigned char) arr_2 [i_2 - 2])), (((/* implicit */unsigned char) ((signed char) min(((signed char)(-127 - 1)), (arr_1 [i_2]))))));
                    arr_12 [(unsigned short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [(_Bool)1] [i_0 - 2])) + (2147483647))) << ((((((~(((/* implicit */int) (signed char)127)))) + (141))) - (13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0 + 2])))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (min((-274877906944LL), (((/* implicit */long long int) var_11))))))));
                    var_16 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_3 [(signed char)21] [i_2 - 1])), (arr_9 [i_0 + 2] [i_0 + 2]))))) * (arr_5 [i_0 + 2] [i_0])))));
                    var_17 += ((/* implicit */int) ((signed char) max(((+(((/* implicit */int) arr_7 [i_0])))), ((-(((/* implicit */int) arr_9 [i_1] [18])))))));
                    arr_13 [i_2] [16LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_1))), (((((/* implicit */int) arr_3 [i_2] [i_2])) * (((/* implicit */int) (signed char)127))))))) + (((((/* implicit */_Bool) 1714092651)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (3U)))));
                }
            } 
        } 
        arr_14 [i_0] = ((short) ((arr_7 [i_0]) ? (((arr_5 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))))) : (((/* implicit */unsigned long long int) ((long long int) 4885366364795589314ULL)))));
        arr_15 [i_0] = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0]);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((((((/* implicit */int) (signed char)127)) == (((/* implicit */int) var_8)))) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)52)) > (((/* implicit */int) (_Bool)0))))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] = ((/* implicit */signed char) arr_0 [i_0]);
                        arr_23 [i_5] [i_5] [i_4] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_5])) ? ((~(((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (arr_5 [i_5] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) : (((((/* implicit */unsigned long long int) var_9)) | (arr_19 [i_0] [i_4])))))));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) ((arr_19 [i_6] [i_7]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_6] [i_8 - 1])) ? (((/* implicit */int) arr_20 [i_8 + 1] [(signed char)12] [(signed char)12] [i_8] [i_0] [(signed char)12])) : (((/* implicit */int) arr_28 [i_8 + 1] [i_8] [i_8] [i_8])))))));
                        arr_31 [i_6] = ((/* implicit */_Bool) min((((signed char) arr_1 [i_0 - 1])), (((/* implicit */signed char) max((((((/* implicit */int) arr_9 [i_0] [i_0])) <= (((/* implicit */int) var_6)))), (((((/* implicit */int) var_8)) == (((/* implicit */int) arr_1 [i_7])))))))));
                        arr_32 [(signed char)18] [i_6] [i_8] |= ((/* implicit */long long int) (~(min((2110707532), (((/* implicit */int) arr_26 [i_0] [i_0] [(signed char)14] [i_0 - 1]))))));
                    }
                } 
            } 
            arr_33 [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_0 - 1])))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) > (((/* implicit */int) arr_1 [i_0 + 1])))))));
        }
    }
    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_35 [i_9]))));
        arr_37 [i_9] = arr_0 [i_9];
        var_22 = ((/* implicit */_Bool) (+((((-(((/* implicit */int) var_0)))) ^ (((/* implicit */int) arr_10 [i_9] [i_9] [i_9]))))));
        var_23 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_9])) ? (((/* implicit */int) arr_25 [i_9])) : (((/* implicit */int) arr_25 [i_9])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4143654419865309773ULL)))))));
    }
    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_24 *= ((/* implicit */_Bool) max((((unsigned int) -1937747379)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_38 [i_10] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) arr_39 [(_Bool)1])))))) || (((/* implicit */_Bool) arr_40 [i_10])))))));
        var_25 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((-832819494) < (((/* implicit */int) arr_40 [i_10])))))));
        var_26 += ((/* implicit */unsigned short) max((((arr_38 [i_10] [i_10]) | (arr_38 [i_10] [i_10]))), (((/* implicit */long long int) arr_39 [(short)8]))));
        var_27 += ((/* implicit */unsigned long long int) var_0);
    }
    var_28 = ((/* implicit */unsigned short) var_6);
}
