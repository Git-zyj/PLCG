/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186387
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((2383075246U) + (1911892050U)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [2] [i_2] [i_4] [i_4] = ((signed char) 1911892049U);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2383075246U)) ? (((/* implicit */int) ((((arr_10 [i_4] [i_3] [i_2] [i_1 - 1]) ? (((/* implicit */unsigned int) arr_16 [i_0] [(unsigned char)5])) : (arr_15 [i_2] [i_2] [i_2] [i_2] [i_0]))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) & (var_0)))))) : ((~(((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1 - 1])))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)24663)), (-526652728)))) ? (((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) arr_0 [i_0]))))) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_5 [i_1 + 2] [i_0])))))) : (((int) ((arr_15 [i_0] [i_1] [i_1] [i_2] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))))))));
                                arr_19 [i_3] [i_1] [i_1] [(_Bool)1] [i_1] [12U] |= (unsigned char)12;
                                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_11 [i_0] [i_1 + 2] [i_4] [(short)6] [i_4] [i_1 + 4]) : (((/* implicit */unsigned int) arr_0 [i_1 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_18);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & ((+(1911892036U)))));
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 3; i_6 < 23; i_6 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((((/* implicit */int) arr_24 [i_5] [i_6] [i_6 + 1])) | (((/* implicit */int) arr_24 [i_5] [i_6 - 1] [i_6 - 1])))) : (((/* implicit */int) (signed char)-7))));
            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_5] [i_6 - 1] [i_6 + 1])) < (((/* implicit */int) arr_25 [i_6] [i_6 - 3] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)104)))) <= (((/* implicit */int) arr_25 [i_5] [i_6] [i_5])))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (var_13) : (arr_23 [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_24 [i_5] [(signed char)18] [i_6]), (((/* implicit */signed char) arr_25 [i_5] [i_6] [i_5])))))) : (((arr_21 [i_5]) << (((((/* implicit */int) arr_24 [i_5] [i_5] [i_5])) - (77)))))))));
            arr_26 [i_5] [i_5] = (~((~(((/* implicit */int) arr_25 [i_5] [16U] [i_5])))));
            var_28 = ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_5] [i_6] [i_6 + 1])) != (((/* implicit */int) var_6))))) - (((/* implicit */int) min((arr_24 [i_5] [i_5] [i_6 + 1]), (var_11)))));
            var_29 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-24670)), (3340834249U)))) : (8194996675630858493ULL))), ((+((+(10251747398078693123ULL)))))));
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_40 [i_5] [(unsigned short)10] [i_8] [i_9] [i_5] = ((/* implicit */unsigned char) arr_20 [i_5]);
                            arr_41 [(short)14] [i_7] [0] [i_9] [i_5] = ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                        }
                    } 
                } 
            } 
            var_30 |= ((/* implicit */unsigned long long int) ((2738278638U) != (2738278636U)));
            var_31 = ((signed char) min((min((((/* implicit */int) arr_25 [i_5] [i_7] [i_5])), (var_12))), ((~(((/* implicit */int) arr_37 [i_7] [i_7] [(_Bool)1] [i_5] [i_5]))))));
        }
        arr_42 [i_5] = (i_5 % 2 == 0) ? (max((min(((~(((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [10U])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) != (arr_29 [i_5] [i_5])))))), (((((/* implicit */int) arr_32 [i_5])) << (((var_19) - (1857728379U))))))) : (max((min(((~(((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [10U])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) != (arr_29 [i_5] [i_5])))))), (((((((/* implicit */int) arr_32 [i_5])) + (2147483647))) << (((((var_19) - (1857728379U))) - (7U)))))));
    }
    var_32 = ((/* implicit */short) min(((~(max((var_0), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) ((unsigned char) ((int) var_8))))));
}
