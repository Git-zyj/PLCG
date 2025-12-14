/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156013
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
    var_19 = ((/* implicit */unsigned long long int) (unsigned short)28930);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_0 + 4]), (arr_0 [i_0 - 1])))) << (((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (arr_1 [i_0 + 1]))) - (28466ULL)))));
        var_21 = ((/* implicit */long long int) arr_0 [i_0 + 1]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2])) ? (-854293212455045787LL) : (((/* implicit */long long int) arr_4 [i_0] [i_0 - 1]))));
                arr_8 [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) * (17447281061832611635ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [11LL])))))) : (arr_7 [i_0 + 2])));
            }
            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 4] [i_1] [i_0 + 2] [i_0 - 1])) + (((/* implicit */int) arr_6 [i_0 - 1] [(short)6] [i_0] [i_0 - 1]))));
        }
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) ((17634388124463294028ULL) - (arr_12 [i_3] [(unsigned char)5] [i_3]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-64)), (arr_3 [i_0 - 1]))))) - (((((/* implicit */unsigned long long int) arr_11 [2U] [i_0] [2U])) + (arr_1 [6]))))))))));
            arr_13 [i_3 + 1] [i_3] [i_0 + 1] = ((/* implicit */long long int) arr_5 [6ULL] [i_3]);
            /* LoopNest 3 */
            for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_21 [i_6] [i_6] [i_5 + 1] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(-26)))), (((arr_2 [i_0 + 1]) << (((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_3] [i_4] [i_5 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [11U] [i_3] [i_4] [i_5 - 2]))))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (max((((((/* implicit */_Bool) 1823265207)) ? (arr_9 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_3 - 1] [i_4 + 3]))))), (max((arr_9 [i_5]), (((/* implicit */long long int) arr_6 [(unsigned short)8] [i_3 - 1] [i_4] [(unsigned short)10]))))))));
                            arr_22 [i_0] [i_3] [(unsigned short)2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((max((((/* implicit */int) (signed char)-64)), (arr_19 [i_6] [i_5 - 1] [7ULL] [i_5] [i_4 + 1] [i_3 - 1] [i_0]))) <= (arr_10 [i_3] [i_4 - 1] [i_4 + 1]))) ? (((min((((/* implicit */unsigned long long int) arr_19 [i_0 + 3] [i_3 + 1] [(_Bool)1] [i_4 - 1] [i_5] [i_6] [i_6])), (17634388124463294028ULL))) >> (((((arr_4 [2ULL] [i_3]) & (((/* implicit */int) arr_16 [i_0 - 1] [i_3] [(unsigned char)5] [i_5 - 2])))) - (10260))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [(short)11] [i_5 - 1])) ^ (arr_1 [(_Bool)1])))) && ((!(((/* implicit */_Bool) arr_12 [i_4 + 4] [i_3 + 1] [i_6]))))))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) arr_20 [i_0] [8U] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) | (((7948327068869098185ULL) + (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3 + 1])))))), (min((((/* implicit */unsigned long long int) min((26), (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */unsigned long long int) 16777215U)) % (7948327068869098185ULL)))))));
        }
        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_27 = max((max((arr_11 [i_7] [i_0 - 1] [i_7]), (arr_11 [0] [i_0 - 1] [i_7]))), (((/* implicit */long long int) max((arr_18 [i_7] [i_0 - 1] [i_7]), (arr_18 [i_7] [i_0 - 1] [(unsigned short)4])))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_14 [(signed char)4] [i_0 + 4] [i_7] [i_7]), (arr_14 [(signed char)9] [i_0 + 3] [4U] [i_7])))) ? (((((/* implicit */_Bool) arr_24 [i_7])) ? (arr_24 [(short)0]) : (arr_24 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [10LL] [i_0 + 3] [i_7] [i_0 + 3])))));
        }
        var_29 = 1483757757585604078LL;
    }
}
