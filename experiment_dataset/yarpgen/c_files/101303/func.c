/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101303
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) (-(var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_0] [(_Bool)1] [i_4] [i_1 + 2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))) : (7567963842891745637LL)))), (var_15)));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((10030607737409788300ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (arr_13 [i_0] [i_4] [(short)6] [i_0] [9LL]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_11 [i_0] [i_1] [i_0] [i_4]))))) <= (0ULL))))) : (((((/* implicit */_Bool) ((unsigned int) -7567963842891745636LL))) ? (max((var_15), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-2), (var_4)))))))));
                                var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56253)) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_4])) : (var_7)))) : (arr_14 [i_0] [i_1 - 2] [i_2] [i_3] [i_4] [i_3 + 1])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2] [i_1 - 2]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 7567963842891745632LL))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_18))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 2] [i_1]))) : (-7567963842891745632LL))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_24 += ((/* implicit */unsigned short) ((unsigned int) 12011907654977140300ULL));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_5])), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 305852544140994097ULL)))) : (arr_17 [i_5])));
    }
}
