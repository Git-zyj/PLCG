/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158103
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
    var_16 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46587)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1140560600U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_17 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))))) << ((((((-2147483647 - 1)) - (-2147483639))) + (35)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)63), (((/* implicit */unsigned char) (signed char)3)))))) > (((((/* implicit */_Bool) arr_0 [5ULL] [5ULL])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0]))))))) + ((~(arr_0 [i_0] [i_0])))));
        var_19 = ((arr_0 [i_0] [i_0]) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (var_2) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */int) var_11)) / (arr_0 [i_0] [i_0]))) : (((((/* implicit */int) var_13)) + (arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            {
                arr_7 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((((/* implicit */_Bool) 827067004U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (arr_3 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18720))) : ((+(10646024885973573596ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) var_15);
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 594854531U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [(_Bool)1] [i_2]))) : (arr_4 [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) 1749802757852250177ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [(_Bool)1])) : (arr_11 [i_1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1]))))));
                            arr_14 [i_2] [i_2] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_1] [i_4])) == (((/* implicit */int) arr_6 [i_2] [i_4])))) ? (((/* implicit */int) max((arr_6 [i_4] [i_3]), (arr_6 [i_1] [i_1])))) : ((-(((/* implicit */int) arr_6 [i_3] [i_4]))))));
                            arr_15 [(_Bool)1] [i_3] [i_1] [i_1] [(_Bool)1] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (11654257433358617617ULL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47452)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2] [i_2])) % (((/* implicit */int) ((unsigned short) arr_13 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_2] [i_2] [3U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (1749802757852250177ULL)))) ? (((/* implicit */unsigned long long int) ((var_6) / (1488840968)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (var_2) : (arr_11 [i_1])))))));
            }
        } 
    } 
}
