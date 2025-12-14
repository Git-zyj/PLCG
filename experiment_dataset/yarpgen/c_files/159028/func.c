/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159028
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
    var_18 = ((/* implicit */unsigned int) ((var_6) | (((/* implicit */long long int) (~(-1814708242))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((unsigned long long int) -1814708242));
            var_20 *= ((/* implicit */unsigned int) arr_2 [i_1] [i_0 - 2]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    arr_9 [i_0] [(unsigned short)14] [i_1] [i_0] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((2245399737331343134ULL), (((/* implicit */unsigned long long int) arr_5 [19]))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65518)) : (arr_8 [(unsigned char)14] [i_1] [i_1] [i_1] [i_1])))))))) >= ((~(((((/* implicit */_Bool) 18446744073709551603ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))))))));
                    var_21 *= (_Bool)1;
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)11175))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [15])) ? (((/* implicit */int) (_Bool)1)) : (234855330)));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3339)) != (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 - 2]))));
                    var_25 += ((/* implicit */long long int) var_9);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(arr_1 [i_2] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27882))) : (arr_2 [i_0] [i_0])))));
                }
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    arr_16 [i_0 - 3] [i_5] [i_2] [i_5 - 1] [i_5] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((unsigned short)65528), (((/* implicit */unsigned short) (_Bool)1))))), (min((17592186044415LL), (((/* implicit */long long int) (unsigned short)17902))))));
                    arr_17 [i_5] [i_0] [i_5] [i_5 + 2] = ((/* implicit */long long int) ((arr_15 [i_0 - 2] [i_0 - 3] [i_0 - 3]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                }
                var_26 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) min(((unsigned short)17), (((/* implicit */unsigned short) (signed char)43)))))))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned short)34994)) : (((/* implicit */int) (unsigned short)58693))));
                arr_18 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
            }
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1040183575U)))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_14))) * (((/* implicit */int) arr_1 [10ULL] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1]))) % (36020000925941760LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (arr_11 [i_0] [i_0] [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [i_6] [i_6]))))) : (var_8))))));
            arr_21 [i_0] [i_6] [i_0] = ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) * (((/* implicit */int) var_7)))), (min((((/* implicit */int) (_Bool)1)), (1983090720)))))));
        }
        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 1) 
        {
            arr_24 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_0)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_7] [i_0 - 2] [i_0 + 1] [i_7])) - (-234855306)))) + (9898561628540926205ULL)))));
            /* LoopSeq 4 */
            for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
            {
                var_30 -= ((/* implicit */unsigned short) var_4);
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) -7799180138996478416LL))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_30 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((8184U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_0 - 3])))))));
                arr_31 [i_0 + 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_9])) || (((/* implicit */_Bool) var_4))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 3; i_10 < 19; i_10 += 2) 
                {
                    var_32 = ((/* implicit */long long int) var_11);
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
                    var_34 = ((/* implicit */signed char) var_8);
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_37 [i_0] [i_0] [i_11] = ((/* implicit */_Bool) ((long long int) max(((unsigned short)65519), ((unsigned short)65535))));
                    arr_38 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_20 [i_0])), (arr_10 [i_7 - 3] [i_0 - 2] [i_7 - 3] [i_7] [i_9])))) ? (((/* implicit */int) ((signed char) -234855282))) : (((/* implicit */int) ((((((/* implicit */int) arr_36 [i_0] [i_7] [i_0])) | (((/* implicit */int) var_12)))) != (((/* implicit */int) arr_36 [i_0 - 3] [i_9] [i_9])))))));
                }
            }
            for (unsigned short i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                var_35 = ((/* implicit */int) (signed char)-38);
                arr_42 [i_0] [(unsigned short)9] [i_12 + 2] [17ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_28 [i_0] [i_7 - 1] [i_12 - 2] [i_0 - 1])) ? (arr_3 [i_12 + 2]) : (((/* implicit */int) (unsigned char)128))))));
            }
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                arr_45 [i_0] [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_20 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_7] [i_7 + 2] [i_7] [16ULL]) + (((/* implicit */long long int) ((/* implicit */int) arr_40 [8LL] [i_7] [i_7 + 2] [i_7 + 1])))))))))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_6))), (((/* implicit */long long int) ((short) 18ULL)))))));
                arr_46 [i_0] = ((/* implicit */long long int) arr_27 [i_0]);
            }
        }
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_36 = var_0;
                    arr_54 [i_0] [6U] [(_Bool)1] [i_0] = var_8;
                    var_37 *= ((/* implicit */signed char) ((_Bool) var_6));
                }
            } 
        } 
    }
}
