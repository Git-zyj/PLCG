/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158494
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (unsigned char)222);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_2 + 1] [i_2 + 2] [i_2] [i_2]), ((unsigned char)222)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_2 + 1] [i_2 + 2] [i_2]), (arr_3 [i_2 + 1] [i_2 + 2] [i_2]))))) : (max((((/* implicit */unsigned long long int) (signed char)85)), (18446744073709551615ULL)))));
                arr_10 [i_0] [i_1] [i_0] = (unsigned char)203;
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23401)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_2 + 2]), (arr_7 [i_0] [i_0] [i_2] [i_2]))))))) : (max((1073741824U), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)-100)))))))));
            }
            var_20 = ((/* implicit */unsigned int) arr_6 [(short)8] [i_0] [i_1]);
        }
        for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) min(((signed char)101), ((signed char)-64)))), ((unsigned char)203)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))));
            arr_13 [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */int) (unsigned char)203)), ((-2147483647 - 1)))), (min((((/* implicit */int) arr_12 [i_0] [i_3 + 2])), (arr_4 [i_0] [(short)1] [i_3 + 2])))));
            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)23399), (((/* implicit */short) (unsigned char)142))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)24)), (arr_1 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (max((0U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11920)))));
        }
        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 2) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23399)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (signed char)71))))) ? (min((((/* implicit */int) (signed char)64)), (577588365))) : (((/* implicit */int) (short)23398))))) ? (max((max((arr_1 [i_0]), (arr_4 [i_0] [i_0] [i_4]))), (((/* implicit */int) (short)23381)))) : (max((((((/* implicit */_Bool) -2081786156)) ? (((/* implicit */int) (short)-2536)) : (((/* implicit */int) (short)-23380)))), (((/* implicit */int) (signed char)7))))));
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23398)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (signed char)-85))));
        }
        var_25 = ((/* implicit */unsigned int) max((var_25), (max((min((((/* implicit */unsigned int) (short)-8837)), (((((/* implicit */_Bool) (signed char)84)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) max(((unsigned char)232), (((/* implicit */unsigned char) arr_11 [i_0] [i_0]))))))))))));
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_17 [i_5 + 1]) << (((arr_17 [i_5 + 2]) - (60540901)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((short)-2536), (((/* implicit */short) arr_5 [i_0] [i_0]))))) > (((/* implicit */int) (signed char)113)))))) : (((((/* implicit */_Bool) arr_14 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(signed char)1])) ? (((/* implicit */unsigned int) -358067950)) : (1198172954U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59)))))));
            var_27 = ((/* implicit */unsigned char) arr_3 [11] [i_5] [11]);
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (signed char)53))))) ? (((/* implicit */unsigned long long int) arr_1 [i_6])) : (((((/* implicit */_Bool) (short)23370)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23392))) : (arr_20 [i_0]))))))));
                var_29 += ((/* implicit */short) arr_15 [i_7 + 2] [i_7 + 2] [i_7 + 2]);
                var_30 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 1] [i_7])) != ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_6] [i_7 - 1])) : (((/* implicit */int) (_Bool)1))))));
            }
            /* vectorizable */
            for (int i_8 = 4; i_8 < 14; i_8 += 3) 
            {
                var_31 = ((/* implicit */short) arr_26 [i_0] [i_0]);
                var_32 = arr_15 [i_0] [i_6] [i_8 + 1];
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (arr_20 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)16384)) > (((/* implicit */int) (short)-9295))))))));
            }
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (_Bool)1))));
        }
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
    {
        var_35 = ((arr_17 [(signed char)6]) & (((/* implicit */int) arr_29 [(_Bool)1] [i_9])));
        var_36 *= ((/* implicit */unsigned char) max((((/* implicit */int) arr_7 [i_9] [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (short)29082)) : (1900757064)))));
    }
    for (int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
    {
        var_37 -= ((/* implicit */short) max((arr_30 [i_10]), (((/* implicit */unsigned int) arr_17 [i_10]))));
        arr_34 [i_10] = ((/* implicit */int) max((min((((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (short)13730))))))), (((((/* implicit */_Bool) (unsigned short)25940)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_0 [i_10]))))) : (3048840089U)))));
        var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)23399)) && ((_Bool)1)))), ((unsigned char)46)));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) 703549175U);
                    var_40 = min((((/* implicit */unsigned int) -1829878841)), (min((((/* implicit */unsigned int) arr_19 [i_11] [i_11])), (1246127207U))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                arr_44 [i_14] [i_14] = ((/* implicit */signed char) arr_42 [i_13] [i_13]);
                var_41 *= min((((/* implicit */unsigned long long int) 3221225472U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23399)) ? (((/* implicit */int) (_Bool)1)) : (arr_42 [i_13] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)96)), (arr_40 [i_13] [i_13]))))) : (((((/* implicit */_Bool) (signed char)-6)) ? (8436745652949732949ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15360))))))));
            }
        } 
    } 
    var_42 |= (signed char)17;
}
