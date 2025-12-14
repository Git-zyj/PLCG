/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16271
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */int) var_0);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [(unsigned char)2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_0] [1] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))))))) != ((-(17179869183ULL)))));
                        var_11 -= ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [8ULL] [i_1]))))))) != (((/* implicit */int) arr_3 [i_1] [i_0]))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_0])) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3])) : (((/* implicit */int) arr_3 [i_3 + 2] [(signed char)7]))))) ? (((/* implicit */int) min((arr_3 [i_3 + 2] [i_3]), (((/* implicit */short) (unsigned char)33))))) : (((/* implicit */int) arr_3 [i_3 - 1] [i_3]))));
                        arr_12 [i_3] [0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_3);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((var_5), (((min((var_6), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2])))) << (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (18446744056529682444ULL))) - (18446744073709549259ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_1] [i_2] [i_4]))));
                                var_14 = ((/* implicit */short) arr_1 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_0 [i_6 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (var_5) : (((/* implicit */unsigned int) ((arr_17 [i_7] [i_6] [i_6] [i_6] [i_2 - 1] [i_1] [i_0]) ? (357742183) : (((/* implicit */int) arr_4 [i_0] [5ULL] [i_2]))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_6] [(unsigned short)6] [i_7])))));
                                var_16 = ((((/* implicit */_Bool) ((unsigned short) 18446744056529682444ULL))) ? (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_6 + 3] [i_6 + 3])) ? (((/* implicit */int) (short)-19405)) : (((/* implicit */int) arr_4 [i_2 - 1] [i_6 + 3] [i_6 + 3])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_6 + 1] [i_2])) : (((/* implicit */int) arr_4 [i_2 - 2] [i_6 - 1] [i_6 - 1])))));
                                arr_24 [i_7] [3] [i_6] [i_2 - 2] [i_6] [(unsigned short)9] [i_0] = ((/* implicit */unsigned short) var_0);
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (min((((/* implicit */long long int) arr_21 [i_0] [i_1] [i_6 + 2] [i_6 + 3] [i_7] [i_0])), (var_1))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_6 + 1] [i_7] [i_7])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [5ULL] [(signed char)3] [(unsigned short)10] [i_0]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_5))))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((arr_15 [i_0] [i_1] [i_2] [i_2] [i_7] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-50)) % (((/* implicit */int) arr_4 [i_2] [3ULL] [i_1]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) ((var_6) << (((max((var_3), (var_7))) - (13733738090171641998ULL)))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned char i_11 = 4; i_11 < 15; i_11 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            var_21 = ((((/* implicit */_Bool) var_4)) ? (arr_27 [i_11] [i_10] [i_9]) : (((/* implicit */unsigned long long int) var_10)));
                        }
                    } 
                } 
                arr_37 [i_9] [i_9] = ((/* implicit */int) arr_26 [4ULL]);
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 15; i_12 += 1) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_43 [i_8] [i_9] [i_12] [i_13] = ((/* implicit */unsigned char) var_2);
                            arr_44 [i_8 + 1] [i_8] [i_9] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_8 + 1] [i_8] [i_8] [i_8]))))) ? (((/* implicit */long long int) arr_35 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_12 + 1] [i_13 - 1])) : (((((/* implicit */_Bool) (unsigned short)39763)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (-2619760389260492666LL)))))), (((((((/* implicit */_Bool) (short)8)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_9] [i_13]))) : (((((/* implicit */_Bool) 65011712)) ? (((/* implicit */unsigned long long int) arr_35 [i_13 - 1] [i_12] [i_9] [i_9] [i_8])) : (var_7)))))));
                            arr_45 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -357742183)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))), (var_3)))) ? (min((((/* implicit */unsigned long long int) (short)18)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_12])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3592)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)39745)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
