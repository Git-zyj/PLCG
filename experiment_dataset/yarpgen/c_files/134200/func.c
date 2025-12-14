/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134200
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 2] [i_1] = ((/* implicit */signed char) (short)-32757);
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((short) (-(295044652U))));
                var_13 = arr_3 [16ULL] [i_1];
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) (unsigned short)8)), (-5212072480088498970LL))))) ? (var_0) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32757))) - (((((/* implicit */unsigned int) 682138565)) + (var_0))))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [(_Bool)1] [i_3]))))), (max((((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_4] [i_3]))))), (((/* implicit */long long int) arr_6 [i_2] [18]))))));
                    arr_14 [i_2] [i_4] [i_3] [(signed char)10] = ((/* implicit */int) var_9);
                    arr_15 [i_4] = ((/* implicit */unsigned char) var_3);
                }
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_18 [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) var_2);
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) max((4294967290U), (((/* implicit */unsigned int) arr_13 [i_2]))))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)32758))) ? (arr_20 [i_2] [i_3] [i_3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_9 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6]))) : (max((((/* implicit */long long int) (short)7605)), (arr_19 [i_2] [i_3] [i_5] [i_5]))))), (((/* implicit */long long int) (-(((/* implicit */int) (short)32741)))))));
                        var_19 = ((/* implicit */unsigned char) -1505848745224525860LL);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) min(((~(max((arr_20 [i_3] [i_2] [i_2] [i_7]), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) min((min((arr_23 [i_2] [i_3] [i_5] [i_7]), (((/* implicit */unsigned int) var_1)))), (min((((/* implicit */unsigned int) (unsigned char)246)), (arr_22 [i_5] [i_5] [i_5]))))))));
                        var_21 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) min((-1763536655), (((/* implicit */int) arr_17 [i_3] [i_3]))))) : ((((_Bool)1) ? (arr_22 [i_7] [(short)0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    }
                    arr_24 [i_3] [i_3] = ((/* implicit */long long int) var_12);
                }
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8] [i_9])) ? (((/* implicit */long long int) var_11)) : (arr_16 [i_8])))) ? ((((_Bool)1) ? (arr_16 [i_8]) : (((/* implicit */long long int) 1105062239)))) : ((-(arr_16 [i_8])))));
                arr_30 [i_8] [i_9] &= ((/* implicit */unsigned int) (_Bool)1);
                arr_31 [i_9] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) : (arr_28 [i_8] [i_8])))));
            }
        } 
    } 
}
