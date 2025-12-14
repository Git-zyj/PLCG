/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179894
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29953)) ? (4194304U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)16)) ? (2586705847U) : (2586705847U)));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1708261448U)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_3 [9U] [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [(_Bool)1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 251658240U)) ? (((/* implicit */int) (unsigned char)255)) : (2147483647)))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) -1779913116)) ? (((/* implicit */int) (short)12885)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (signed char)3)) ? (6917648907773489916LL) : (((/* implicit */long long int) 1048575U))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10116499106364614708ULL))))));
}
