/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188332
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (+(var_11)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2 + 4]))) : (var_0)));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)56178))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] = ((/* implicit */long long int) arr_4 [i_0 + 3]);
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned short)35947))));
                }
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(arr_4 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_16 [4ULL] [4ULL] |= ((/* implicit */unsigned char) (~(arr_2 [i_4])));
        var_20 = ((/* implicit */signed char) 18446744073709551611ULL);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) arr_11 [i_4] [i_4] [i_4]);
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((int) ((arr_10 [i_5] [i_5] [i_4]) + (((/* implicit */unsigned long long int) (+(arr_19 [i_4]))))))))));
            arr_22 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)13181))))) ? (var_4) : ((~(((/* implicit */int) (unsigned char)249))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_4] [i_4] [i_4])), ((unsigned char)0)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)-11431))))))) : (var_10));
            var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)162))))) || (((/* implicit */_Bool) max((var_4), (-1))))))), (arr_17 [i_4] [i_4])));
        }
    }
    /* LoopNest 3 */
    for (signed char i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7]))))), ((~(((/* implicit */int) arr_24 [i_8]))))));
                    arr_30 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (short)24209))));
                    var_24 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    } 
}
