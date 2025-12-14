/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189145
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)59644))));
        var_11 = ((/* implicit */int) max((var_11), (max(((-(arr_0 [i_0] [17U]))), (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)59634)) : (((/* implicit */int) (short)-23534)))), (((/* implicit */int) (!(((/* implicit */_Bool) 946436163)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5333569630524272357ULL)) ? (((/* implicit */int) (short)27178)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
                    var_13 = ((/* implicit */long long int) 1383492000U);
                    var_14 *= ((/* implicit */unsigned char) arr_3 [i_0 + 2]);
                }
            } 
        } 
        arr_10 [(signed char)0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_8) ^ (((/* implicit */long long int) 6U)))), (((/* implicit */long long int) arr_4 [i_0 + 3] [i_0 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_5 [13LL]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))) : (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) 3353633862U)) : (arr_6 [i_0 + 2] [i_0 + 1])))));
        var_15 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_9 [i_0 + 2])) >> (((/* implicit */int) arr_9 [i_0 + 2])))));
    }
    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-25310)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) >> (((((var_6) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4568))))) - (4567ULL)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((var_4) >= (var_3)))), ((unsigned short)4326))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)12] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3]))))), (min((arr_6 [(unsigned short)13] [i_3]), (((/* implicit */unsigned long long int) (short)25309))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3] [i_4])) << (((((/* implicit */int) arr_4 [i_3] [i_4])) - (30441)))));
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-838)) : (-2100960263)))) + (((arr_8 [i_4] [i_4] [(unsigned char)8]) ? (var_1) : (9LL)))));
            arr_18 [i_3] [i_4] = ((/* implicit */short) arr_14 [i_4] [i_3]);
        }
        var_19 ^= ((/* implicit */long long int) (+((+(var_4)))));
        var_20 = (unsigned char)180;
    }
}
