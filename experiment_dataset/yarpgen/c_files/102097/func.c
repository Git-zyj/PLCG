/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102097
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [7] [i_0] [i_0] [7])) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))))), ((~(((long long int) var_4)))));
                                var_19 = max((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) min((1416911004U), (((/* implicit */unsigned int) (short)-4330))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)16502)), (567435830U)))) : (max((var_12), (((/* implicit */long long int) (unsigned short)62830)))))));
                                var_20 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3]);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49018)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28978)))))) ? (((int) 3727531466U)) : (max(((~(((/* implicit */int) (unsigned short)28978)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))))));
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)2266)), (arr_9 [i_3 - 2] [i_1] [i_1 - 1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 6117473500397795907LL)) < (arr_9 [i_3 - 2] [i_2] [i_1 - 1])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2])))), ((!(((/* implicit */_Bool) 9514272864600622400ULL)))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) ((1225311646150002472LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16111))))))));
                }
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_1 + 3] [i_1] [i_1 + 2]);
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                var_23 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)213)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min(((short)19253), (((/* implicit */short) var_0))))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)347))))))));
                arr_17 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9732178626066645819ULL))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-3)) ? (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_14)))))) : (((/* implicit */int) ((short) (_Bool)1)))));
    var_25 = ((/* implicit */unsigned char) min((((unsigned int) var_12)), (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-27308)))) < (((/* implicit */int) var_7)))))));
}
