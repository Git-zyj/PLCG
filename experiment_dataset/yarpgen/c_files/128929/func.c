/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128929
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    var_15 += ((/* implicit */signed char) arr_4 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)6472))))))));
                        var_16 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9080010284223168756LL)))) ? (((((/* implicit */_Bool) 12863456743313662179ULL)) ? (288225978105200640ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))))))))) ? (max((2726700954322046370LL), (((long long int) 511ULL)))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((int) (unsigned short)365)), (((/* implicit */int) ((unsigned short) 288225978105200629ULL)))))) ? ((-(arr_4 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_17 = ((/* implicit */signed char) (unsigned short)65171);
                    }
                    var_18 = ((/* implicit */long long int) arr_5 [i_1 - 1] [i_1] [i_2 - 3] [i_1]);
                }
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_19 = 288225978105200640ULL;
                    arr_14 [i_4] = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3513285790471516238LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11866))) : (1854225298563393486ULL)))))))) : (min(((-(arr_0 [i_0]))), (((/* implicit */long long int) (unsigned short)18636)))));
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (unsigned short)364)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)22873))))));
                var_21 = ((/* implicit */unsigned long long int) (unsigned char)224);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 1285682238))));
}
