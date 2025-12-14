/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146848
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
    var_17 ^= ((/* implicit */signed char) max(((+(((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_14)))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) -1145993351)) & (var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((unsigned short) arr_1 [i_0 - 4] [i_0 - 4]));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((((2147483646) % (arr_0 [i_1] [i_1]))) == (arr_0 [i_0] [i_0 - 1]));
            arr_6 [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0] [i_0 + 2])) : (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_1] [i_1])))));
            var_19 |= ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])));
        }
        var_20 &= ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) var_6)) & (2320520348276512172LL))));
        arr_7 [i_0] = ((/* implicit */unsigned int) var_1);
    }
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 4; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26346))) / (4294934528ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_7)) : (arr_12 [i_2] [i_3 + 2] [i_3 + 2])))))), ((+(var_4))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_13 [i_2] [i_2])), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_15)))) : (var_9))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((-834077824) | (((/* implicit */int) (short)15206))))), (min((arr_12 [i_2] [i_3] [i_2]), (((/* implicit */unsigned int) (short)3))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 4; i_5 < 14; i_5 += 4) 
    {
        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                arr_28 [i_5] [i_5] [i_5 - 1] [i_6] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (min((arr_17 [i_5] [i_5]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_23 [i_5] [i_7] [i_7] [i_7])), ((unsigned short)65529))))))));
                                arr_29 [i_5] [i_6] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (-((-(((((/* implicit */int) var_0)) / (((/* implicit */int) var_11))))))));
                                arr_30 [i_5] [i_9] [i_5] [i_6] [i_9] [i_5 + 4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_20 [i_9] [i_6]))) ? (max((((/* implicit */long long int) arr_19 [i_9] [i_6])), (-2320520348276512163LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16323415349142678717ULL)) && (((/* implicit */_Bool) var_2))))))))) || (((/* implicit */_Bool) min((min((arr_24 [i_6] [i_6] [i_7] [i_6]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!((_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min(((~((~(2147483646))))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) (+(var_16))))))))))));
                    arr_31 [i_5] [i_5] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_25 [i_5] [i_6] [i_7]))))) ? (max((arr_24 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) (_Bool)1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6841441064597665953LL)) ? (((/* implicit */int) arr_23 [i_5 + 1] [i_6] [i_6] [i_5])) : (arr_27 [i_7] [i_5] [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_17 [(unsigned short)3] [i_6 + 3])) : (arr_18 [i_7]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((long long int) var_16)))))));
}
