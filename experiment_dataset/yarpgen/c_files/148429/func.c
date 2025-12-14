/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148429
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
    var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((((((/* implicit */_Bool) (unsigned short)5062)) ? (((/* implicit */unsigned int) 911144270)) : (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -911144270)) && (((/* implicit */_Bool) -911144259)))))))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (var_7)));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_1))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_7))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((911144259), (((/* implicit */int) arr_1 [i_0]))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) var_2)) - (10052))))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_8 [(short)0] = ((/* implicit */long long int) -911144270);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -911144256)) ? (-911144263) : (-911144259))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) % (arr_17 [(signed char)5] [i_2] [i_2] [2LL] [i_2] [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [10ULL]))))))));
                            arr_21 [i_1] [(unsigned short)0] [(signed char)2] [i_2] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_7))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            arr_24 [(unsigned short)13] [i_2] [i_2] [11LL] [i_4] = ((/* implicit */unsigned char) arr_22 [i_4] [i_2]);
                            arr_25 [i_4] [(unsigned char)6] [i_3] [i_3] [i_3] [18] [i_3] = ((/* implicit */unsigned char) var_5);
                            arr_26 [i_4] [i_2] [i_2 + 1] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [0LL] [i_2] [i_2] [0LL] [i_2 - 1] [i_2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_19 [i_1])))) : (((/* implicit */int) arr_23 [i_6 + 3] [16ULL] [i_6 - 1] [i_6 - 2] [i_6 + 1] [12ULL] [i_6]))));
                            var_15 = ((/* implicit */long long int) ((var_9) < (-8560051303216216282LL)));
                        }
                        var_16 = ((/* implicit */long long int) ((unsigned short) max((arr_16 [i_1] [i_1] [i_1] [4LL] [i_1] [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_1] [17ULL]))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 4; i_8 < 23; i_8 += 1) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (signed char)-123))));
            arr_34 [i_7] [i_7] = (_Bool)1;
        }
        var_18 = ((/* implicit */int) ((((arr_27 [i_7]) / (arr_27 [i_7]))) < ((~(((/* implicit */int) ((unsigned char) 911144259)))))));
    }
}
