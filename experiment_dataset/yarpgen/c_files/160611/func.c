/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160611
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)18906)))) + (((((/* implicit */int) var_18)) - (((/* implicit */int) var_10))))))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)6928), ((unsigned short)58607))))) : (((unsigned int) var_3))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_3 [(unsigned char)18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0 + 2] [i_0 - 2])), (var_1)))) ? (((/* implicit */int) ((unsigned short) ((var_6) ? (((/* implicit */int) var_11)) : (arr_1 [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */int) var_3))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((17743183245112531786ULL) - (((/* implicit */unsigned long long int) 464305374))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) max(((+(arr_1 [i_0 - 2] [i_0 + 3]))), (((/* implicit */int) max(((unsigned short)58607), (((/* implicit */unsigned short) (signed char)7)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) min((arr_1 [(unsigned char)24] [i_1 + 2]), (((/* implicit */int) var_0)))))));
                    arr_15 [i_1] [3ULL] [i_2] [i_3] = ((/* implicit */unsigned short) var_1);
                    arr_16 [(unsigned short)0] [i_1] [i_1] [12ULL] |= ((/* implicit */signed char) arr_11 [i_2]);
                }
            } 
        } 
        arr_17 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) var_15);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) (-(((arr_0 [i_1]) ^ (((/* implicit */int) (unsigned short)2108))))));
            arr_21 [5] = ((/* implicit */signed char) ((3780139253U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6929)))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (-(-1700008138935646576LL)));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)10668)) && (((/* implicit */_Bool) ((((/* implicit */int) var_17)) + (((/* implicit */int) arr_8 [12U] [i_1 - 1])))))));
                    }
                } 
            } 
        }
        arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_27 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1]))))) ? (min((arr_27 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 3] [i_1 - 1]), (arr_27 [i_1] [(signed char)15] [i_1 - 2] [i_1 - 2] [i_1 + 3] [i_1 + 1]))) : (((((/* implicit */int) (signed char)63)) + (((/* implicit */int) var_11))))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                {
                    var_23 |= ((/* implicit */_Bool) var_13);
                    arr_36 [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) -242191314))) & ((~(var_13)))))) ? (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_6 [i_1 + 2])) : (arr_11 [i_8]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2713014917U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17))))) & (min((var_12), (((/* implicit */long long int) var_13)))))))));
                }
            } 
        } 
    }
}
