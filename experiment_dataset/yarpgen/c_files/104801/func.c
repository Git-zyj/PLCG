/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104801
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
    var_11 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_1] [i_2 + 1] [i_3] [i_4] [i_4 - 1] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_4 + 1])))))));
                                arr_13 [i_0 - 1] [i_4] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) & ((~(((/* implicit */int) arr_11 [i_4] [i_3] [i_3] [i_2 + 3] [i_2] [i_1] [i_4]))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) (-(min((var_0), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_2]))))));
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_2] [i_2 + 3] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = (~((~(((/* implicit */int) var_6)))));
                                arr_19 [i_0 + 1] [i_1] [i_2 + 2] [i_5] = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((4200095935U), (94871352U)))), (9223372036854775804LL)))), (max((var_0), (((/* implicit */unsigned long long int) min((4200095940U), (4200095935U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (8868081708005527480ULL))))) : (((var_7) & (var_7)))))) - (var_3));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1))))) < (min((((9578662365704024128ULL) & (((/* implicit */unsigned long long int) 94871352U)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_4))))))));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((9578662365704024154ULL) >= (((/* implicit */unsigned long long int) 94871356U))));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 4; i_9 < 18; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 - 2] [i_8] [i_8 - 1]))) : (var_7)))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) arr_25 [i_9 - 3] [i_10] [i_8 - 1])), (arr_28 [i_9 + 1] [i_9] [i_8 - 1])))) & (((/* implicit */int) ((unsigned char) var_0))))))));
                        var_19 = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 4200095924U)) && (((/* implicit */_Bool) 4200095935U))))), (min((var_1), (((/* implicit */unsigned short) arr_27 [i_10] [i_9] [i_8] [i_9 - 2] [i_8 - 1]))))));
                    }
                    arr_30 [i_8] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? ((~(9578662365704024128ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))) & (((/* implicit */unsigned long long int) (+(var_4))))));
                    arr_31 [i_9] [i_8] [i_7] = ((/* implicit */unsigned short) arr_26 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
                    var_20 = max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_1)))) == (((((/* implicit */int) arr_25 [i_9] [i_8] [i_7])) & (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) (-(arr_20 [i_7] [i_8 - 1])))) ? (min((((/* implicit */unsigned long long int) var_7)), (6521887757285147165ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))));
                }
                for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_21 += ((/* implicit */unsigned short) arr_26 [i_7] [i_8 - 1] [i_11] [i_8 - 1] [i_8 - 1] [i_11]);
                    var_22 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_21 [i_11])))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (arr_21 [i_8 - 1]))))));
                }
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    arr_38 [i_8] [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_35 [i_7] [i_7] [i_8 - 1] [i_12])))) : (((((/* implicit */int) arr_35 [i_12] [i_8 - 1] [i_8 - 1] [i_7])) & (((/* implicit */int) arr_35 [i_7] [i_8] [i_8 - 1] [i_12])))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_0)))))))));
                    var_24 ^= ((/* implicit */long long int) min((((int) var_0)), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_37 [i_7]), (((/* implicit */unsigned int) var_5))))))))));
                    var_25 -= ((/* implicit */int) var_9);
                }
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_7] [i_8 - 1] [i_7])) < (((/* implicit */int) ((unsigned char) 8868081708005527504ULL)))));
                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_25 [i_8 - 1] [i_7] [i_7])), (min((((/* implicit */unsigned int) var_5)), (94871352U)))))) ? (((/* implicit */int) var_6)) : ((+((~(var_4)))))));
                var_28 = ((unsigned short) (~(((/* implicit */int) arr_34 [i_8 - 1] [i_8 - 1]))));
            }
        } 
    } 
}
