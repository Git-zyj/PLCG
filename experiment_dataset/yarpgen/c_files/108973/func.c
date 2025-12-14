/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108973
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)100)) & (((/* implicit */int) (unsigned short)24323)))) >> (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64134))))))))) ? (max((var_9), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)15009))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((+(var_2))) : (((((/* implicit */_Bool) var_0)) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) && (((/* implicit */_Bool) arr_4 [i_0]))))))))));
                var_14 ^= ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_6 [i_1 + 3] [(short)2])))) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (((_Bool)0) ? (1866968698) : (-1432832284)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) (_Bool)1);
                    var_16 = ((/* implicit */unsigned short) (+(var_9)));
                    var_17 += ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1386))))), (((long long int) var_2)))));
                }
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)1402)) % (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (((((_Bool)1) ? (533301358U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1862)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))) : (((int) min((983266574), (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
}
