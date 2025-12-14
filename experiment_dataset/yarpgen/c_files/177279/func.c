/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177279
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_4)))))) ^ (2298715982459378472LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) : ((~(2546303827U)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-27159))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))), (((/* implicit */unsigned long long int) (~(2298715982459378472LL)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (var_12))) & (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)7)))))))) > (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) ((_Bool) 4726737986948551824LL))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [(short)3] [i_0]))))) : (((arr_1 [i_2 - 2]) ? (((/* implicit */long long int) arr_8 [i_2] [i_2])) : (arr_2 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [(unsigned char)3])), (arr_5 [i_2 - 1] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(arr_1 [i_0]))))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (var_5) : (max((var_5), (((/* implicit */unsigned int) (short)17293))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) arr_10 [(_Bool)1] [i_0] [i_3] [i_2] [i_0] [i_0]);
                                arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) ? (arr_0 [i_0] [1ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned int) var_10)), (3988431939U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
