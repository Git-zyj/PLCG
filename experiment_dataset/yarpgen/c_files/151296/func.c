/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151296
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
    var_16 = max((((/* implicit */unsigned int) 1282291167)), (var_0));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1]) != (arr_0 [i_0 - 1])))), (var_4)));
        var_18 ^= min((min((var_1), (var_0))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_1 [0LL]))))))));
        var_19 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) var_8)) : (((((-831189839680658112LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0 + 1] [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */_Bool) (+((~(var_11)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_6), (arr_1 [i_0])))) >> (((((4033466662U) >> (((/* implicit */int) arr_1 [i_0])))) - (4033466633U)))))) : (0U))) : (((((/* implicit */_Bool) (+((~(var_11)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_6), (arr_1 [i_0])))) >> (((((((4033466662U) >> (((/* implicit */int) arr_1 [i_0])))) - (4033466633U))) - (2278233964U)))))) : (0U)));
        arr_3 [i_0] = ((/* implicit */unsigned int) 5681883801336579207LL);
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((arr_10 [i_1] [i_2] [i_1] [i_4]) ? (arr_14 [i_4] [i_2] [i_2] [6] [i_5] [i_5] [i_2]) : (((((-831189839680658112LL) + (9223372036854775807LL))) >> (((arr_12 [4ULL] [i_1] [i_4] [i_3]) - (3641253582U)))))));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_12), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((2573659004U) >> (((((/* implicit */int) (short)21544)) - (21538)))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) var_8);
                            arr_17 [18ULL] [i_2] [i_3] [20LL] [i_4] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1282291167))));
                            var_23 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_8 [i_3])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))), (arr_13 [i_1] [i_1] [i_4] [22U]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((-1282291168), (-1861919220)))) != (14311432164681603384ULL))))));
                        }
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_1))));
                        var_25 = ((/* implicit */signed char) arr_11 [i_2] [i_2]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            for (long long int i_8 = 3; i_8 < 23; i_8 += 2) 
            {
                {
                    var_26 ^= ((/* implicit */unsigned long long int) ((((arr_0 [i_7 + 2]) != (((/* implicit */unsigned long long int) arr_12 [i_1 + 1] [i_7 + 1] [i_8] [20LL])))) ? ((~(arr_12 [i_1 - 1] [i_7 + 1] [i_8] [14ULL]))) : (arr_12 [i_1 + 1] [i_7 - 1] [i_8] [4ULL])));
                    var_27 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (arr_18 [i_1] [22]))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1014181596U)) ? (((/* implicit */long long int) var_0)) : (arr_6 [i_1] [18])));
        /* LoopNest 3 */
        for (long long int i_9 = 3; i_9 < 22; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_14 [4ULL] [4ULL] [4ULL] [i_9] [i_10] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)4] [7LL] [18] [1LL]))))))) != (-1282291168)));
                        var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [2] [i_10] [i_10] [i_10]))))), (0ULL)));
                        arr_30 [i_1] [i_9] [i_10] [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_13), (((/* implicit */short) arr_1 [i_9]))))) ? (((/* implicit */unsigned long long int) 1023U)) : (((((/* implicit */_Bool) var_15)) ? (arr_11 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_31 = ((/* implicit */short) (~(-1086152660868095019LL)));
                        var_32 = ((/* implicit */_Bool) min((((arr_4 [i_10] [(short)0]) >> (((/* implicit */int) arr_1 [i_9])))), ((~((+(var_1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_33 = ((/* implicit */_Bool) (short)21662);
            var_34 = ((/* implicit */short) ((unsigned long long int) (((_Bool)1) ? (arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
        }
        arr_37 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_18 [i_12 + 1] [(short)14])) != (3280785700U))))) : (((long long int) (short)9189))))) ? ((+(arr_20 [i_12 + 1] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) 1282291167))));
        /* LoopSeq 1 */
        for (long long int i_14 = 2; i_14 < 23; i_14 += 1) 
        {
            arr_40 [i_12] [i_12] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_27 [i_14] [i_12 - 1] [i_12] [i_12] [i_14 - 1]))))));
            var_36 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((arr_38 [i_12]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7712)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_39 [23U] [i_12] [17ULL]))))))));
        }
    }
}
