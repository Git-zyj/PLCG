/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160782
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((((min((-837190944), (-1235891904))) + (2147483647))) >> ((((-(arr_5 [i_2]))) + (92337682))))) + (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_2]) : ((-(arr_5 [(signed char)6])))))));
                    arr_9 [i_2] [i_0] = ((max((arr_6 [i_0 - 1] [7] [i_0 + 1] [i_0 + 1]), (arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]))) / (max((1952619008), (((((/* implicit */_Bool) (signed char)108)) ? (var_10) : (-1464140519))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((~(arr_4 [i_0] [i_0]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_13)))))))));
        arr_11 [i_0 + 1] = 1075592410;
    }
    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_23 [17] [i_3] [i_3] [i_3] = (+(((/* implicit */int) (signed char)97)));
                        arr_24 [i_3] [i_4] = ((/* implicit */signed char) max((min((arr_16 [i_3] [i_3] [i_3]), (((/* implicit */int) ((-221529276) >= (1464140512)))))), ((((~(((/* implicit */int) arr_15 [i_3] [i_3])))) + (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        } 
        arr_25 [(signed char)8] = ((/* implicit */signed char) 580198673);
        arr_26 [6] &= ((/* implicit */signed char) -1);
    }
    for (int i_7 = 2; i_7 < 18; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_14))))));
        arr_30 [i_7] = ((((/* implicit */_Bool) -678979959)) ? (1464140521) : (1235891903));
        arr_31 [i_7] = ((/* implicit */signed char) ((((var_8) & (((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) (signed char)119)) : (-1508508959))))) % ((((-(-1090021365))) >> (((/* implicit */int) ((arr_17 [(signed char)15] [i_7]) > (-837190944))))))));
        arr_32 [16] [i_7 + 2] &= (+(((((/* implicit */_Bool) (signed char)-43)) ? (((-1956637113) - (((/* implicit */int) (signed char)18)))) : (min((arr_17 [9] [7]), (-761704891))))));
        arr_33 [12] [(signed char)2] = arr_21 [i_7];
    }
    var_15 = ((((/* implicit */_Bool) (signed char)-68)) ? ((~((~(((/* implicit */int) (signed char)-10)))))) : ((-(min((var_5), (((/* implicit */int) var_7)))))));
}
