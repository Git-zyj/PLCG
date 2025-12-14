/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113275
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
    var_10 += ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) & (-7333172867874504481LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6157741991317730739LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_1])))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned char)226))))) : (max((-6157741991317730760LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) - (var_8))))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [8LL])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)8] [(signed char)16]))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_7))))))))) : (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)16])) ? (-7333172867874504489LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)9]))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_13 += ((((((((/* implicit */_Bool) -1910699254)) ? (var_4) : ((-9223372036854775807LL - 1LL)))) <= (((/* implicit */long long int) 1910699252)))) ? (((((/* implicit */_Bool) 2021177717570411784LL)) ? (0) : (((arr_1 [i_3]) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_3])))))) : (((((var_4) < (var_4))) ? (((int) var_5)) : (((/* implicit */int) arr_5 [i_2] [i_3])))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_2 [i_3]))) - (((((/* implicit */int) var_6)) - (arr_7 [i_2] [i_3])))));
            }
        } 
    } 
}
