/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178898
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((unsigned short) var_2)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > ((-(var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_0] [i_2] [i_2 + 3] [8LL])) + (2147483647))) << (((max((((arr_4 [i_0] [8U] [i_2 + 1]) ? (((/* implicit */int) (short)24123)) : (((/* implicit */int) (signed char)1)))), (((1048575) & (((/* implicit */int) arr_7 [i_0] [i_2] [i_2 - 1] [(_Bool)1])))))) - (1048540)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_7 [i_0] [i_2] [i_2 + 3] [8LL])) - (2147483647))) + (2147483647))) << (((((((max((((arr_4 [i_0] [8U] [i_2 + 1]) ? (((/* implicit */int) (short)24123)) : (((/* implicit */int) (signed char)1)))), (((1048575) & (((/* implicit */int) arr_7 [i_0] [i_2] [i_2 - 1] [(_Bool)1])))))) - (1048540))) + (1048464))) - (23))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-2))))) ? (((((/* implicit */unsigned long long int) (-(-1048564)))) + (min((var_1), (((/* implicit */unsigned long long int) -1048604)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) arr_1 [i_2 + 3])) : (((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_1 + 1] [i_2]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_15 [i_0] [i_3] [i_4] = ((/* implicit */short) (((~(arr_14 [i_3] [(_Bool)1] [i_3]))) != (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) != (-1048604)))) | (max((1466832466), (((/* implicit */int) (signed char)122))))))));
                    var_14 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    arr_16 [i_3] = ((/* implicit */unsigned char) var_6);
                    var_15 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5698895311677247881ULL)) ? (arr_12 [i_4] [i_3] [i_3] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_5 [2U] [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_4] [i_3]))))));
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)11287)) : (-1466832460))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1466832462)) ? (min((((unsigned long long int) arr_13 [(unsigned char)12] [i_0] [i_0])), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)105))) : (arr_12 [i_0] [i_0] [i_0] [(unsigned char)6]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_17 &= ((/* implicit */signed char) arr_10 [i_7]);
                    var_18 |= ((/* implicit */_Bool) (~(min((5989917013509995267ULL), (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_12 [i_5] [i_6] [i_7] [(unsigned char)0])) : (var_3)))))));
                    arr_27 [i_7] [i_6] [i_6] [i_5] &= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_5) : (((/* implicit */int) var_2)))))) > ((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (arr_0 [i_6 + 1]))))))));
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7])) ? (((/* implicit */unsigned long long int) arr_8 [i_7])) : (var_6))))));
                }
            } 
        } 
        var_20 = var_10;
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((1048603), (((/* implicit */int) arr_0 [i_5]))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5])) : (-197538461))), (((int) arr_18 [i_5] [i_5]))))) : (max((min((((/* implicit */long long int) (_Bool)0)), (6440250774256568889LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned short)14550)) : (((/* implicit */int) (unsigned char)218)))))))));
        arr_28 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_0 [i_5]), (arr_0 [i_5])))), (min((((/* implicit */unsigned long long int) arr_0 [i_5])), (var_3)))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) var_3);
        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)5900))) != (arr_30 [i_8 + 1])));
        var_24 = ((/* implicit */short) var_6);
        var_25 = ((/* implicit */_Bool) (signed char)-1);
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_30 [i_8 + 1]), (arr_30 [i_8 + 1])))) | (((unsigned long long int) arr_30 [i_8 + 1]))));
    }
}
