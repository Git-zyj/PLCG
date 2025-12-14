/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121897
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_15 = min((18446744073709551611ULL), (23ULL));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((18446744073709551593ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [(unsigned char)2]) ? (4ULL) : (4ULL)))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_3))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
                                arr_13 [i_0] [i_0] [i_1] [(unsigned short)18] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */_Bool) (short)32767)) ? (23ULL) : (((/* implicit */unsigned long long int) var_4)))), (arr_0 [i_0]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [2ULL] [i_0] [14U] [10] [i_2] [i_2])) ? (((((/* implicit */_Bool) 755615112023489566LL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551611ULL))) : (min((13ULL), (((/* implicit */unsigned long long int) (unsigned char)206))))))) ? (5632303110452325368LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24771))) > (951681482U))))));
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)15])) ? (((/* implicit */unsigned long long int) var_4)) : (var_11)))) ? (((/* implicit */unsigned long long int) var_4)) : (max((arr_0 [i_0]), (arr_8 [(unsigned short)22] [i_2] [i_1] [i_1] [i_1] [(unsigned short)6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0 + 1] [i_2 - 1]) == (((/* implicit */unsigned long long int) min((var_8), (4294967295U)))))))) : (arr_0 [i_0])));
                }
            } 
        } 
        var_18 = ((/* implicit */int) var_2);
        var_19 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) -5632303110452325368LL)) : (arr_0 [(_Bool)1]))) : (((arr_0 [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)109)))))));
    }
    var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (max((var_2), (((/* implicit */unsigned long long int) var_7)))))));
}
