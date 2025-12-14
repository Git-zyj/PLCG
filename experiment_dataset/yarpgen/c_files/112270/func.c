/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112270
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_2 [i_1]), (arr_3 [i_0 + 1] [i_1])))), (((((/* implicit */int) (unsigned char)221)) & (((/* implicit */int) (unsigned char)161))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max(((unsigned short)46621), ((unsigned short)46621)));
                    arr_10 [i_1] [i_1] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                arr_16 [i_3] [(unsigned char)9] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)18913)) & (((/* implicit */int) (unsigned short)28415)))), (((/* implicit */int) arr_12 [i_4]))));
                arr_17 [i_3] [i_4] [i_3] = (~(var_3));
                arr_18 [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_17)) ? (arr_15 [i_3] [i_4] [i_4]) : (arr_15 [i_3] [i_3] [i_3])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (unsigned char)161)), (0LL))) < (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16379)) <= (((/* implicit */int) ((unsigned short) arr_4 [i_5])))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))))) << (((/* implicit */int) (unsigned char)14)))) : (max((((((/* implicit */int) (unsigned char)41)) << (((((/* implicit */int) (unsigned char)179)) - (177))))), (((/* implicit */int) arr_2 [i_5]))))));
        arr_24 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)98)) == (((/* implicit */int) (unsigned char)227)))) && (((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned char)2), ((unsigned char)234)))), (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])))))))));
        arr_25 [i_5] = ((/* implicit */unsigned short) var_3);
    }
    for (long long int i_6 = 4; i_6 < 16; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */long long int) ((max((((/* implicit */int) arr_27 [i_6 + 1])), ((~(((/* implicit */int) (unsigned short)8192)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_18)), (arr_3 [i_6] [i_6])))))))));
        arr_29 [i_6 - 1] = ((/* implicit */unsigned char) max((min((((/* implicit */int) max(((unsigned char)67), (arr_27 [i_6])))), (((((/* implicit */int) (unsigned short)18896)) + (((/* implicit */int) arr_5 [i_6] [i_6] [i_6] [i_6])))))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)74)), ((unsigned short)54734))))));
    }
}
