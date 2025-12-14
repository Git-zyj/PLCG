/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138404
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1 + 1] [i_0] = ((/* implicit */_Bool) var_11);
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2047)) ? (120750008) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */int) (short)29033)) | (var_2)))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)29033)))))) : (min((((/* implicit */unsigned long long int) var_2)), (arr_9 [i_2]))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 4; i_4 < 22; i_4 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_2] [i_2])), (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 4; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */int) ((arr_15 [i_4] [i_4 - 3] [i_4] [i_4 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3 - 1] [i_4])))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_5])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_5] [i_5]))))) : (min((((/* implicit */unsigned long long int) arr_13 [i_5] [i_4])), (var_17))))))));
                }
                for (signed char i_6 = 4; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    arr_20 [i_2] [i_2] = ((((/* implicit */int) (unsigned short)26967)) - (160597378));
                    arr_21 [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_9 [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_3 - 3] [i_3 - 4])) && (((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 - 2] [i_3 - 1])))))) : (arr_10 [i_2] [i_2] [i_2])));
                    arr_22 [i_2] [i_2] [i_4 - 2] [i_6] |= ((/* implicit */unsigned char) ((unsigned int) min((arr_8 [i_6 - 1]), (arr_8 [i_6 - 1]))));
                    var_25 *= ((/* implicit */short) min((arr_12 [i_2] [i_4 - 1] [i_6 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_19)), ((short)32767)))))))));
                }
                arr_23 [i_2] [i_2] [i_3 - 2] [i_4] = ((/* implicit */unsigned int) var_18);
                var_26 = var_13;
            }
            for (int i_7 = 4; i_7 < 22; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    arr_30 [i_2] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)2047))))) & (((((/* implicit */_Bool) arr_16 [i_7] [i_7 - 3] [i_3 + 1] [i_8] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39087))))));
                    arr_31 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1])) & (((/* implicit */int) (signed char)116)))))));
                    arr_32 [i_7] = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (18U)))), (var_4)));
                    var_27 = ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39087)))))), (((/* implicit */int) (unsigned char)210))));
                }
                var_28 = ((/* implicit */short) var_6);
            }
            var_29 = ((/* implicit */unsigned short) ((((arr_11 [i_3 - 4] [i_3 + 1]) != (arr_11 [i_3 - 2] [i_3 + 1]))) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_3])) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-47)) != (((/* implicit */int) (_Bool)1))))), ((signed char)-30))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_35 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_12 [i_9] [i_9] [i_9]);
            arr_36 [i_2] [i_2] = ((/* implicit */short) ((((arr_15 [i_2] [i_9] [i_9] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
        }
        for (unsigned short i_10 = 4; i_10 < 20; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (-5580421493382412441LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [(signed char)0]))))))))));
            var_31 = ((/* implicit */_Bool) var_9);
            arr_40 [i_10] = ((/* implicit */unsigned long long int) (unsigned char)238);
            var_32 = ((/* implicit */unsigned short) var_19);
            arr_41 [i_2] [i_2] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned int) ((max((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_10]), (((/* implicit */int) arr_38 [i_2] [i_2] [i_10])))) & (((/* implicit */int) arr_33 [i_10 + 1]))))), (arr_37 [i_2] [i_2] [i_2])));
        }
    }
}
