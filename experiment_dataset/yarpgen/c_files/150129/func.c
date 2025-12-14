/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150129
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
    var_10 = ((/* implicit */signed char) ((-1758717820) / (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 7; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) max((((/* implicit */short) arr_5 [i_0] [i_0] [i_2 - 2])), (((short) (-(((/* implicit */int) (_Bool)1)))))));
                        var_13 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned char) arr_5 [i_4] [i_2 - 2] [i_0 - 1]);
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_17 [i_0] [(unsigned short)9] [1U] [i_4] [i_0] = ((/* implicit */long long int) (signed char)73);
                            var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (short)32504)) != (((/* implicit */int) arr_10 [(signed char)4] [(unsigned short)4])))))), (1485700528U)));
                            arr_18 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) -1722270359);
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(short)1])))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [(unsigned char)5] [i_2 + 2] [i_6] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0]))) : (max((arr_4 [i_0] [i_2 - 3]), (arr_4 [i_0] [i_2 + 2])))));
                            var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((606388073) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [(signed char)8] [(unsigned char)0] [(signed char)6] [(signed char)6] [i_0 - 1]))) : (arr_12 [2LL] [i_2] [(signed char)5] [1LL]))), (((/* implicit */long long int) -1230553324))));
                            var_18 = (-(max((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_6] [i_1])) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_1 [i_0])), (1758717820))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_26 [i_0] [i_0] [i_2 + 2] [i_6] [4ULL] [i_6] = var_2;
                            arr_27 [i_0] [i_1] [i_2] [(short)6] [i_6] [(short)6] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) max((1890740598), ((+(((/* implicit */int) (signed char)-66))))))) : (((((/* implicit */_Bool) -1758717845)) ? (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) arr_8 [8ULL] [i_0] [i_2]))))) : (3992747368U)))));
                        }
                        var_19 = ((/* implicit */long long int) var_5);
                    }
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    arr_30 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_31 [i_0] [(_Bool)1] [i_9] = ((/* implicit */short) arr_19 [i_0]);
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_20 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_29 [i_0] [i_1] [i_10]))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) (unsigned char)31))))));
                    var_22 = ((/* implicit */_Bool) ((((5310458538540539157ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) 1758717820))));
                    var_23 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) 0U)) : (9223372036854775804LL))))) && ((_Bool)1));
                }
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) (+(((arr_33 [i_0 - 1] [i_0]) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_0) : (var_0))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1))))))));
                        arr_41 [i_0] [i_1] [i_11] [i_11] [8ULL] [8ULL] |= ((long long int) (((_Bool)1) ? (arr_3 [i_12 - 1] [i_12]) : (((/* implicit */unsigned long long int) var_9))));
                        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) -3248723513192235000LL);
                        arr_43 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)224))));
                        var_25 = ((/* implicit */signed char) var_2);
                    }
                    arr_44 [6] [3LL] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_11])))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 1]))))) : (9223372036854775786LL)));
                    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [8LL])) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)0] [i_0 - 4] [4LL] [4LL])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) var_4))));
                }
                var_27 = ((/* implicit */int) (-(((1205724365U) >> (((((/* implicit */int) (short)26781)) - (26756)))))));
            }
        } 
    } 
}
