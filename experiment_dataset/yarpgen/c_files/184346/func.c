/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184346
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (0ULL) : (1ULL)));
            arr_6 [i_0] [(short)6] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
        }
        for (int i_2 = 4; i_2 < 19; i_2 += 2) 
        {
            arr_11 [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 20LL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)1))));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 914815451)) ? (1ULL) : (9591421013968733186ULL)));
            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_7 [3LL] [i_2 - 3] [8U]) : (arr_7 [11U] [i_2 - 4] [i_2 - 4])))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_7 [(signed char)3] [i_2 - 3] [i_0])))) : (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_2 - 1] [i_2 - 1]))))));
            arr_13 [i_0] = ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_4 [i_2 - 1]))))) : (((((/* implicit */_Bool) var_12)) ? (arr_8 [i_2 - 3] [i_2 + 1] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0])), ((signed char)-110))))))));
            arr_14 [i_0] [(_Bool)1] = ((/* implicit */long long int) ((arr_9 [i_0] [i_2] [(_Bool)1]) <= (((((/* implicit */_Bool) arr_10 [i_0] [3] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_5))))));
        }
        for (int i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            var_18 *= ((/* implicit */short) max((((((var_10) <= (((/* implicit */long long int) -1910750117)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (0ULL))) : (((/* implicit */unsigned long long int) min((arr_8 [(short)3] [(short)3] [i_3]), (((/* implicit */long long int) var_13))))))), (((((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)4] [i_3])) + (18446744073709551604ULL)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_19 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-13))))));
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3] [11U]))));
                arr_21 [i_0] = ((/* implicit */long long int) var_9);
                var_21 = ((/* implicit */long long int) var_5);
            }
            for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                arr_24 [0] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_0] [4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4218411550U)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_5])) ? (arr_7 [i_0] [i_3] [(_Bool)1]) : (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_3] [i_5]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2255308106U)) ? (1976698848923627445ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (26ULL)))));
                var_22 = ((/* implicit */signed char) arr_10 [i_5] [i_5 - 1] [i_3 - 2]);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_27 [i_0] [0LL] [i_3 - 2] [i_3 + 1])) ? (arr_27 [i_0] [i_3 + 1] [i_3 - 3] [i_3 - 2]) : (arr_17 [i_3 - 1] [i_3] [i_3 - 1]))))))));
                var_24 = ((/* implicit */int) arr_5 [(short)2]);
            }
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [5LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))))))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_8)))) % (6ULL)));
        }
    }
    /* LoopSeq 4 */
    for (int i_7 = 1; i_7 < 11; i_7 += 3) 
    {
        var_27 = var_6;
        /* LoopSeq 3 */
        for (int i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((((/* implicit */_Bool) 76555745U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4148988340782433481LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14103)) ? (((((/* implicit */_Bool) 985767808)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)16844)))) : (((/* implicit */int) ((unsigned short) -985537595)))))))))));
            arr_32 [2U] [i_7] = ((/* implicit */signed char) ((((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (arr_22 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_8])) ? (((/* implicit */long long int) var_2)) : (-5157032376187360450LL)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7])) ? (var_6) : (-174085604))))))));
        }
        for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
        {
            arr_36 [i_7] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(arr_16 [1U] [i_7] [i_9])))) ? (((((/* implicit */_Bool) 1347498345)) ? (((/* implicit */long long int) var_0)) : (arr_8 [(unsigned short)18] [i_9] [(signed char)17]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) -1053251716)), (var_4)))))) >= (((/* implicit */long long int) var_4))));
            arr_37 [i_7] [i_9] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (~(4218411574U)))), (((unsigned long long int) var_2))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
        {
            arr_41 [i_7] [i_7] [i_10] = ((/* implicit */unsigned int) ((unsigned char) 76555746U));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((8034320290662619201LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) var_2))))))))));
        }
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) << (((arr_40 [i_7 + 1] [i_7 - 1]) - (4273034350U)))))) ? (min((((/* implicit */int) var_3)), (var_2))) : (((((/* implicit */_Bool) ((arr_2 [(_Bool)1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_22 [i_7] [i_7]))))) : (((/* implicit */int) var_13)))))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_7 + 1])))) ? (max((arr_2 [i_7 - 1]), (arr_2 [i_7 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7 + 1]))))))));
    }
    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        arr_45 [i_11] [(unsigned short)6] = ((/* implicit */unsigned short) ((((0LL) ^ (((/* implicit */long long int) arr_44 [i_11])))) | (((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11])) ? (var_10) : (((/* implicit */long long int) var_8))))));
        arr_46 [(unsigned short)10] [i_11] = ((/* implicit */short) (((+(var_4))) == (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_26 [i_11] [i_11]), (arr_15 [i_11] [i_11] [i_11]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11])))))))));
    }
    for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        arr_50 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5157032376187360450LL)) ? (-5157032376187360443LL) : (min((5157032376187360433LL), (((/* implicit */long long int) 1347498345))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                {
                    var_32 = ((/* implicit */short) arr_47 [i_14]);
                    var_33 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_47 [i_12])) ? (var_4) : (var_8))), (((/* implicit */unsigned int) 708370581)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) arr_47 [i_12])))))));
                    arr_55 [i_12] [i_13] [i_14] = ((/* implicit */unsigned int) var_14);
                    var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((~(arr_47 [i_13]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-16845)))))));
                    var_35 = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (short)16844)) : (708370581)))));
                }
            } 
        } 
        var_36 = max((((((/* implicit */_Bool) var_10)) ? (arr_48 [i_12]) : (arr_48 [i_12]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) arr_48 [i_12])) : (var_0)))) ? (arr_51 [i_12] [i_12]) : (((((/* implicit */_Bool) (short)14258)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
    {
        var_37 += ((/* implicit */int) arr_57 [i_15]);
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 708370574)) ? (997692510) : (((/* implicit */int) (signed char)123))))) ? (8034320290662619200LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)95)))))));
    }
    var_39 = var_10;
    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (12181554601441523533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_15)))))));
}
