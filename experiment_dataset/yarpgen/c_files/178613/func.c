/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178613
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_0] [(signed char)4] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 1032180353)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [4U] [i_1])))), ((~(((/* implicit */int) arr_6 [i_0] [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    var_12 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_3] [i_1] [(_Bool)1]))));
                    var_13 = ((/* implicit */int) (_Bool)1);
                }
                arr_15 [i_1] [i_1] [i_2] [(short)6] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_2 + 1]);
                var_14 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (signed char)114)), (arr_1 [i_1])))));
                arr_16 [i_0] [i_1] [(unsigned char)4] [(_Bool)1] = ((/* implicit */unsigned long long int) max((min((arr_10 [3LL] [i_2 + 2] [i_2 + 2] [i_1]), (arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_1] [i_2 + 2] [i_1])))))));
                arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 2]), (((/* implicit */short) arr_14 [i_0] [0U] [i_1] [i_2 - 1]))))), (max((((((/* implicit */long long int) arr_13 [i_2 + 2] [i_2] [i_1] [i_1] [i_0] [i_0])) & (15LL))), (((/* implicit */long long int) (+(796762222))))))));
            }
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_15 = ((/* implicit */signed char) 4095ULL);
                arr_20 [(unsigned short)12] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_4]);
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_13 [i_4] [i_1] [i_1] [i_1] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_4] [i_4])))) ? (((/* implicit */int) ((arr_13 [i_4] [i_4] [i_4] [9U] [3LL] [i_0]) >= (arr_13 [i_4] [(unsigned char)0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4] [i_1] [i_4] [i_4])) || (((/* implicit */_Bool) arr_13 [i_0] [i_1] [(short)11] [i_4] [i_1] [i_4])))))));
                var_17 = ((/* implicit */long long int) (~((+(16320566150494645339ULL)))));
            }
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_1])))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)124))))))))));
        }
        arr_21 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_10 [i_0] [9ULL] [i_0] [i_0]))))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_5]))))), (((((/* implicit */_Bool) arr_5 [i_5] [9LL] [i_5])) ? (((/* implicit */long long int) -796762213)) : (-5597752482488161498LL))))), (((/* implicit */long long int) arr_6 [i_5] [i_5]))));
        var_20 = ((/* implicit */int) arr_1 [i_5]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) arr_25 [i_6]);
        arr_26 [(signed char)5] [(signed char)5] = ((/* implicit */unsigned int) (_Bool)1);
        var_22 = ((/* implicit */signed char) (unsigned short)13455);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_6] [i_6]))))))))));
    }
    for (int i_7 = 3; i_7 < 20; i_7 += 4) 
    {
        var_24 = ((/* implicit */long long int) min((((/* implicit */int) ((arr_27 [i_7 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) arr_29 [i_7 - 2]))))));
        var_25 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)52101)))) ? (min((arr_27 [i_7 - 3]), (arr_27 [i_7 - 3]))) : (((/* implicit */unsigned long long int) (+(4611686018410610688LL))))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 3; i_8 < 22; i_8 += 2) 
        {
            var_26 *= ((/* implicit */signed char) max((((/* implicit */int) min((arr_28 [i_7 - 1]), (arr_28 [i_7 - 1])))), ((+(((/* implicit */int) arr_28 [i_7 - 1]))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_27 [i_7 + 1]) / (((/* implicit */unsigned long long int) min((4132765388U), (((/* implicit */unsigned int) (signed char)-96)))))))) ? ((-(((((/* implicit */unsigned long long int) -9223372036854775792LL)) & (arr_27 [(unsigned char)17]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8 + 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_30 [i_7 + 2] [i_8])) : ((-(((/* implicit */int) arr_28 [i_7])))))))));
            arr_32 [10] [10U] [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_31 [i_7 + 3] [i_8 - 3] [(_Bool)1])) | (((/* implicit */int) arr_29 [i_7 + 2])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_29 [i_7 + 3])), ((unsigned char)237))))));
            arr_33 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-110)) > (((/* implicit */int) arr_29 [i_8 - 1]))));
            var_28 = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_29 [i_7 + 3])), (8))), (((/* implicit */int) arr_29 [i_8 + 1]))));
        }
        for (long long int i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_7 - 2] [i_9 + 1]))));
            var_30 = (+(((/* implicit */int) (unsigned char)12)));
            arr_36 [i_7] [i_7] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_28 [i_7 - 2]))))));
        }
        for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            arr_39 [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 12)) == (2126177923214906287ULL))))));
            var_31 = ((/* implicit */signed char) (_Bool)1);
        }
    }
    var_32 = ((/* implicit */_Bool) max(((((-(var_4))) / (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))));
    var_33 = (!(((/* implicit */_Bool) var_11)));
}
