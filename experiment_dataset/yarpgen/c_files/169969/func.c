/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169969
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 11; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [i_1 - 4] [i_1] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
            arr_5 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
            var_18 = ((/* implicit */short) ((long long int) ((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1 + 1])))));
        }
        for (short i_2 = 4; i_2 < 11; i_2 += 2) /* same iter space */
        {
            arr_8 [i_2] [i_0] = ((/* implicit */unsigned short) (~(1602274168662557778LL)));
            arr_9 [i_2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_0 [i_2]))))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) 2436079758355280149ULL);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((576179277326712832ULL), (var_7)))) ? (arr_11 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_3 - 1] [i_0 + 2]))))) ? ((-((-(((/* implicit */int) arr_12 [i_0] [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_3 - 1])))))));
            var_19 += (-(max((arr_6 [i_3] [i_0 + 2] [i_3 - 1]), (var_0))));
            arr_14 [i_0] [i_3] = max((((/* implicit */unsigned long long int) 887266264U)), (((((/* implicit */_Bool) (~(arr_3 [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) ((unsigned int) -1602274168662557779LL))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (11853114572611560232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_5]))) ? (arr_15 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_0] [0U] [i_5]) >= (((((/* implicit */_Bool) 4405569843931950943ULL)) ? (-1602274168662557779LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                        arr_21 [i_0] [i_0] [10U] [i_6] [i_5] [10U] |= ((unsigned long long int) ((((/* implicit */_Bool) (-(9113904409322994012ULL)))) ? (arr_3 [i_6] [i_6]) : (((/* implicit */unsigned long long int) min((1602274168662557759LL), (((/* implicit */long long int) var_13)))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(min((((/* implicit */unsigned long long int) (~(3589718757U)))), (((9967698963284022734ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */short) ((long long int) 74762588U));
                            var_23 += ((/* implicit */long long int) arr_6 [i_0] [i_4] [(short)3]);
                            arr_30 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (short)22322);
                        }
                        arr_31 [i_8] [i_8] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_4] [i_0 - 1]))));
                        arr_32 [i_0] [i_0] [i_4] [i_4] [i_7] [i_0] = 1602274168662557789LL;
                    }
                } 
            } 
        }
        arr_33 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_0] [i_0 + 2] [3U] [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 2] [i_0 - 1]))) + (2426737301U))) : (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 2])) ? (arr_20 [i_0] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                {
                    var_24 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_44 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_0), (arr_29 [i_0] [i_10 + 4] [i_12]))))));
                        arr_45 [i_0] [i_10] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_12 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_17 [i_12 - 1] [i_11] [i_0 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_12 - 1] [i_0] [i_0 - 1])));
                        var_25 = ((/* implicit */unsigned long long int) min(((~(arr_6 [i_10 - 2] [i_0 + 2] [i_11]))), (((/* implicit */unsigned int) arr_35 [i_0] [i_0] [i_0]))));
                    }
                    arr_46 [i_0] [i_10] [i_11] [i_0] = min((((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_4)))))), (((unsigned long long int) (~(12332880909101751655ULL)))));
                }
            } 
        } 
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_17 [i_0 + 1] [i_0 + 2] [i_0 - 1]))));
        arr_47 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((((_Bool)1) ? (arr_36 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))), ((+((+(var_9)))))));
    }
    var_27 = ((/* implicit */short) var_11);
}
