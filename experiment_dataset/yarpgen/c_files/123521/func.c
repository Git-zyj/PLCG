/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123521
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (+((+(((/* implicit */int) ((unsigned short) 0ULL))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = var_5;
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (25ULL) : (((/* implicit */unsigned long long int) -2174491639507780062LL)))) + (((((/* implicit */_Bool) -26)) ? (arr_7 [(unsigned short)2] [i_1] [i_2]) : (((/* implicit */unsigned long long int) 1999923066U))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_0]))));
                        arr_14 [(short)5] [1ULL] [i_0] [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) ((short) (+(((/* implicit */int) arr_5 [i_0])))));
                    }
                    var_13 += ((/* implicit */unsigned short) max((1999923066U), (((/* implicit */unsigned int) arr_2 [i_1] [6]))));
                    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            {
                arr_20 [(signed char)6] [(signed char)4] &= ((/* implicit */signed char) ((unsigned char) 2216370756U));
                var_15 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) % (18446744073709551595ULL))));
                arr_21 [i_4] [i_5] = ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) ((_Bool) -1)))));
            }
        } 
    } 
}
