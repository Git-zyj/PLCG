/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147721
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -1886808870)) : (-440476495500868914LL)))))))));
        arr_2 [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_0 [i_0]) : ((-2147483647 - 1))))))) ? (((((/* implicit */long long int) 2146487993)) & (-440476495500868926LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)33695)) >= (arr_0 [i_0])))))));
        var_21 = var_7;
        arr_3 [(unsigned short)13] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_1 [i_0])))), (((((/* implicit */unsigned long long int) arr_1 [i_0])) % (4972666525040463057ULL)))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned char)194))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_23 &= ((/* implicit */int) var_11);
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_10 [i_1] [(signed char)4] [(signed char)4] [(signed char)4]), (((/* implicit */int) var_14))))))) ? (arr_4 [i_2 - 1]) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_1])) | (2655799170U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516))) : (((2483209447165349243LL) | (((/* implicit */long long int) -903446383)))))))))));
                    var_25 += ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)236)), ((unsigned short)18718)));
                }
            } 
        } 
        var_26 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (440476495500868925LL))));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    var_27 = -440476495500868914LL;
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_26 [i_4] [i_5] [0] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) arr_5 [i_6]);
                                arr_27 [i_4] = ((/* implicit */_Bool) var_1);
                                var_28 = ((/* implicit */unsigned short) var_1);
                                var_29 = arr_25 [i_4 - 1] [i_5] [i_4] [(_Bool)1] [i_7] [(signed char)8];
                                arr_28 [i_4] [i_5] [i_4] [i_4] [i_4] [i_8] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned short) ((arr_5 [i_4 + 2]) == (arr_5 [i_4 + 2])))), (arr_19 [i_4] [i_4] [i_4 - 1])));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)46344)))))));
                }
            } 
        } 
    } 
    var_31 = max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min(((unsigned short)63488), (var_2)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)78)))))));
    var_32 = ((/* implicit */signed char) var_1);
}
