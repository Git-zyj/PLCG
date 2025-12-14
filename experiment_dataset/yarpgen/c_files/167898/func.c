/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167898
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
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40889))) == (8646911284551352320LL)));
            arr_6 [i_0] = ((/* implicit */int) ((((-184462592906559668LL) == (-1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)18] [i_1 - 4]))) : (-184462592906559668LL)));
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                var_17 *= ((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 + 1] [i_2] [i_2]);
                arr_10 [i_0] [i_1 - 3] [20] [i_1 - 3] = 184462592906559667LL;
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [15U] [i_2])) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 5759045412162881679LL)) ? (-5759045412162881680LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1 - 1] [(_Bool)1])))));
            }
            for (short i_3 = 4; i_3 < 20; i_3 += 3) 
            {
                arr_13 [i_3] [i_0] [i_1 - 1] [i_3 - 1] = ((((/* implicit */int) arr_7 [i_1 - 4] [6U] [i_3 - 1])) * (((/* implicit */int) arr_2 [6] [i_1] [6])));
                var_19 = ((/* implicit */int) arr_0 [i_0]);
                /* LoopSeq 4 */
                for (signed char i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_3] [19ULL] [i_3] [i_3] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) arr_8 [i_0] [(unsigned short)6] [i_3 - 4] [i_4]);
                    arr_18 [i_4 + 2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) -2698811558324107293LL);
                }
                for (signed char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_3] = ((((/* implicit */int) (unsigned short)2937)) + (((((/* implicit */int) arr_2 [i_0] [17ULL] [i_3])) + (((/* implicit */int) arr_15 [i_3] [i_1] [9])))));
                    arr_23 [i_0] [i_3] [i_3] [(unsigned char)0] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 - 4])) || (((/* implicit */_Bool) arr_0 [i_1 - 2]))));
                    arr_24 [(unsigned short)10] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) 5759045412162881679LL);
                }
                for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7589062742818423285ULL)) ? (-5078169178941675427LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)45)))))) : (arr_25 [i_3 - 1] [i_3 - 1] [i_1 - 4] [i_1 - 1])));
                    var_21 = ((/* implicit */signed char) min((var_21), (arr_2 [i_0] [(unsigned char)1] [i_3 - 1])));
                }
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    arr_30 [i_0] [18LL] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)43175)) == (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [(signed char)9] [i_3])) < (((/* implicit */int) (unsigned short)24647))))) : (((/* implicit */int) arr_7 [i_3 + 1] [i_1 + 1] [i_0]))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8535063214232573818LL)) ? (((/* implicit */long long int) arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_3 + 1] [i_7] [6])) : (-184462592906559668LL)))) ? (((arr_3 [i_0] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 1] [i_7] [i_3]))))))));
                    arr_31 [i_0] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 - 4])) : (((/* implicit */int) (short)32767))));
                }
                arr_32 [i_0] [i_3] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_0 [i_0])))))) <= (arr_14 [i_1 - 2] [i_3 - 1] [i_3] [17U] [(unsigned short)2] [i_3])));
                arr_33 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((5759045412162881679LL) | (-5759045412162881679LL)));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_9]);
                arr_39 [i_8] = arr_29 [i_8] [i_8] [i_8] [i_8];
                arr_40 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_8] [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_8] [i_0] [i_8]))) : (arr_25 [i_9] [i_8] [i_0] [i_0])));
            }
            for (int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) arr_15 [i_0] [i_0] [i_10])) << (((((/* implicit */int) arr_15 [i_10] [i_8] [i_10])) - (60)))))));
                var_25 = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_8] [i_8]);
                arr_43 [i_0] [i_8] [7] [(signed char)0] = ((/* implicit */_Bool) -1954155245);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [17]))) > (((((/* implicit */_Bool) 184462592906559668LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8] [(short)8] [i_10]))) : (4199017114643311536ULL))))))));
            }
            var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) >> (((3932805351U) - (3932805343U)))));
            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_8])) ? (arr_25 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [3U] [i_8] [i_0])))))));
            var_29 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_0] [i_8] [i_8])) - (((/* implicit */int) arr_37 [i_0] [i_8] [i_8]))));
        }
        arr_44 [i_0] = ((/* implicit */signed char) ((2063796659) > (((/* implicit */int) arr_34 [i_0] [i_0]))));
        arr_45 [(unsigned char)4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) - (((((/* implicit */_Bool) 1954155245)) ? (3220919157U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22361)))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        arr_48 [i_11] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) arr_9 [i_11] [i_11] [i_11]))));
        arr_49 [i_11] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)0)), (max((((((/* implicit */_Bool) 4115202125U)) ? (-184462592906559668LL) : (-5225509946884356064LL))), (((/* implicit */long long int) (_Bool)1))))));
        arr_50 [i_11] [i_11] = ((/* implicit */long long int) arr_11 [i_11] [i_11] [6ULL]);
        arr_51 [i_11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_27 [11] [i_11] [i_11])), (arr_42 [i_11] [i_11] [i_11] [i_11])));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((18002659447536211672ULL), (arr_36 [i_11] [i_11] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11]))))) : (184462592906559668LL)));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((179765171U), (((/* implicit */unsigned int) (unsigned short)12288))))) ? (((/* implicit */int) var_7)) : (var_11)));
}
