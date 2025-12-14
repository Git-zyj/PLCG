/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120328
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned short) arr_1 [i_0 - 1])), (arr_0 [i_0 - 1]))))));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */short) arr_1 [i_0 - 2]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned short) ((unsigned int) 4294967295U));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) 11612757584755252458ULL);
        var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)22736))));
        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        arr_21 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_3] [i_6] [i_5] [i_4]))))) * (((/* implicit */int) arr_0 [i_3 + 1]))));
                        var_20 = ((/* implicit */_Bool) ((arr_9 [i_3 + 1]) << (((arr_9 [i_3 + 3]) - (8466589259917412208LL)))));
                    }
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_3] [2U] [14] [i_5] [i_3]))) ? (((11612757584755252458ULL) / (((/* implicit */unsigned long long int) 646781772)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_3])))));
                }
            } 
        } 
        var_22 += arr_14 [i_3] [i_3 + 1] [i_3 + 1];
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned char) arr_18 [i_3 - 1] [i_7] [i_3] [i_7])))));
            var_24 = ((/* implicit */unsigned char) ((signed char) -1463219093));
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) arr_17 [i_3 + 3] [(unsigned char)0] [i_3 + 3]);
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 6833986488954299157ULL)) ? (484162007U) : (((/* implicit */unsigned int) 129731729))));
                    var_27 -= ((/* implicit */short) arr_22 [i_3 + 1] [i_3 + 2]);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */int) var_0);
    var_29 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_18 [10U] [i_10] [i_10] [10U])))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_15 [i_10])), (-129731731)))) : (max((((/* implicit */long long int) arr_31 [i_10] [i_10])), (4179588347831919620LL))))) > (min((((/* implicit */long long int) ((int) arr_3 [i_10]))), ((~(arr_29 [12ULL] [i_10] [10] [i_10])))))));
        arr_35 [i_10] [i_10] |= ((/* implicit */short) ((unsigned char) arr_10 [i_10]));
        var_31 += ((/* implicit */long long int) ((unsigned char) ((arr_1 [i_10]) ? (3896259908U) : (57585421U))));
        var_32 = ((/* implicit */_Bool) ((unsigned int) max((arr_9 [i_10]), (((/* implicit */long long int) ((unsigned int) arr_22 [i_10] [i_10]))))));
        var_33 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10] [i_10])))))) < ((~(((((/* implicit */_Bool) arr_32 [i_10] [i_10])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63664))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        var_34 = ((/* implicit */unsigned char) var_10);
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_26 [i_11] [i_11])))))));
        var_36 = ((/* implicit */long long int) max((max((((unsigned long long int) (unsigned char)63)), (((/* implicit */unsigned long long int) ((var_9) ? (arr_27 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11] [4ULL])))))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_19 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
        var_37 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_28 [i_11] [i_11])))), (arr_38 [i_11] [i_11])));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (long long int i_13 = 4; i_13 < 19; i_13 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_11])) ? (((/* implicit */unsigned long long int) arr_23 [i_11] [i_13 - 1] [i_13])) : (max((((/* implicit */unsigned long long int) arr_3 [i_13])), (1520357946529076246ULL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_13 + 1]))))) : (max((((/* implicit */long long int) ((signed char) var_0))), (arr_29 [i_13] [i_13] [i_12] [i_11]))))))));
                    arr_43 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_23 [i_11] [i_12] [i_13 - 2]), (arr_23 [i_11] [i_11] [i_11])))) ? (arr_23 [i_13] [i_13 - 1] [i_13 - 4]) : (arr_23 [i_11] [i_11] [i_11])));
                    arr_44 [i_11] [i_12] [i_11] = ((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_11]);
                }
            } 
        } 
    }
}
