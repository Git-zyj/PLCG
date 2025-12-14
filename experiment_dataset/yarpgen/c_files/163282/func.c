/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163282
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)233)) ? (7456813939477817528LL) : (-7456813939477817517LL)));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_15 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_12)) : (2813735266U)))))) ? (((((/* implicit */_Bool) min((-7456813939477817528LL), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (-7456813939477817506LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10470))))) : (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (arr_0 [i_0]))))) : (((/* implicit */long long int) -1819168285)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7070))) : (-8809789073550789139LL));
                                var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [(unsigned short)5])) | (((/* implicit */int) (unsigned short)34389))))), ((+(var_8)))));
                                arr_13 [i_0] [(signed char)8] = ((/* implicit */_Bool) (((+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [(unsigned short)4] [(unsigned short)4] [i_0] [i_4] [i_0])) > (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))) >> (((int) arr_4 [i_0 - 2] [i_0 + 2] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) arr_11 [4LL] [i_1] [i_1] [i_1] [4LL] [i_1] [i_1]);
                            arr_22 [i_0 - 3] [i_1] [i_1] [i_0] [(short)11] [i_6 + 3] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61076)) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 3])) : (((/* implicit */int) var_7))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 + 2] [i_0 + 2]))) ? (arr_15 [i_0 - 1] [i_6 - 2] [i_6 + 2]) : (((/* implicit */int) (signed char)-35))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [(signed char)11] [i_5 - 1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2] [i_0]))));
                            arr_26 [i_5 + 3] [i_0] [i_2] [i_5 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0] [i_0] [i_5 + 3]))));
                            arr_27 [i_0 + 1] [13LL] [i_0] [13LL] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (arr_15 [(signed char)12] [i_5] [(signed char)12]))) == (((/* implicit */int) arr_9 [i_7] [i_7] [i_5 + 2] [i_0 - 2]))));
                            var_19 = ((/* implicit */_Bool) (-((+(arr_11 [i_2] [i_1] [i_2] [(signed char)0] [i_1] [i_1] [(signed char)0])))));
                        }
                        var_20 = ((/* implicit */int) arr_3 [i_2] [(unsigned char)1] [(unsigned char)1]);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (short)32468)) << (((((((/* implicit */int) (signed char)-91)) + (119))) - (28)))));
                    }
                    arr_28 [i_0 - 3] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (arr_5 [i_0] [i_1] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3843184320106225162LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1])))));
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (min((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [(signed char)11] [i_0] [(signed char)11] [6])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1] [i_0] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_17 [14] [i_0 - 1] [i_0 - 3] [i_0]))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) -13)) ? (-4664030290478433245LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))));
        var_23 -= ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) arr_8 [i_8] [16ULL] [16ULL] [(signed char)16]))), ((unsigned char)108)));
        var_24 = ((/* implicit */int) min(((~(((-7456813939477817497LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))), (((/* implicit */long long int) min((arr_11 [i_8] [i_8] [i_8] [i_8] [(signed char)15] [i_8] [i_8]), (((/* implicit */int) arr_17 [i_8] [(short)4] [10LL] [i_8])))))));
        var_25 -= ((/* implicit */unsigned short) arr_3 [i_8] [i_8] [i_8]);
    }
}
