/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11322
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */int) (short)16352);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(17564554069738230744ULL))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) -8956998838130891467LL))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            var_15 = ((/* implicit */signed char) min((-8956998838130891467LL), (((min(((_Bool)0), ((_Bool)1))) ? (max((var_12), (((/* implicit */long long int) var_8)))) : (min((-8956998838130891467LL), (8956998838130891467LL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_16 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0]))) : (1332240459U))));
                arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (short)15);
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_1 [i_1] [(short)0]))));
            }
            arr_10 [i_1] [i_0] = ((/* implicit */unsigned short) min((arr_5 [i_0] [i_1 - 1] [i_1]), (((/* implicit */signed char) ((_Bool) 2305843009213693952ULL)))));
        }
        for (short i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_11))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_7)))))) % (var_4))))));
            var_20 -= ((/* implicit */_Bool) var_8);
            arr_13 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_3] [i_3]))) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30575))) : (var_9))) : ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_20 [i_3] [i_3] [i_4] [i_5 + 1] = ((((/* implicit */_Bool) ((int) (!(arr_18 [(unsigned short)9] [i_4] [(unsigned short)9] [i_4] [i_3] [i_4]))))) ? (arr_1 [i_0] [i_3 - 3]) : (((unsigned long long int) var_1)));
                    arr_21 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */signed char) arr_17 [i_0] [i_0] [i_0] [i_5]);
                    arr_22 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned char)63);
                }
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned short) ((arr_18 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] [i_0]) ? (((/* implicit */int) (short)32256)) : (((/* implicit */int) arr_4 [i_4]))))))));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) ((signed char) 2305843009213693952ULL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_32 [i_0] [i_7] [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (2305843009213693952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51)))));
                arr_33 [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8956998838130891467LL)));
                arr_34 [i_7] = ((((/* implicit */_Bool) 18104840163407743439ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8918191328122476831LL)) ? (arr_14 [i_0] [i_0] [i_0]) : (0U)))) : (var_10));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) 8191U)))));
                arr_39 [i_8] [i_6] [i_6] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_6] [(unsigned short)11])) ? (2962726836U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4886)))));
                arr_40 [i_0] [i_0] [i_8] = (unsigned char)255;
                arr_41 [i_0] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) var_8);
            }
            arr_42 [i_0] = ((/* implicit */short) arr_19 [i_0] [i_0] [(_Bool)0] [i_0] [i_0] [i_0]);
            var_23 = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0] [i_0]);
            var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)1023))) & (var_12)));
        }
    }
    var_25 = ((/* implicit */int) var_12);
}
