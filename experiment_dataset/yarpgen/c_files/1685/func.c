/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1685
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) != (arr_1 [i_0 - 1] [i_0 + 2]))) ? (arr_2 [i_0 - 2]) : ((+(arr_2 [i_0])))))) ? (((/* implicit */int) var_3)) : (min((((arr_1 [i_0 + 1] [i_0]) / (-820209958))), (((/* implicit */int) (signed char)86))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_10 [12U] = ((/* implicit */unsigned long long int) (-(-8185447031474719105LL)));
                        arr_11 [i_1] [13LL] [(short)20] [(short)18] = (-(((/* implicit */int) ((signed char) var_7))));
                        var_19 = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
        } 
    }
    var_20 ^= ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_6)))), ((-(((/* implicit */int) (signed char)80))))));
    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_13))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-16307)) != (((/* implicit */int) (unsigned short)55191))))) != (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (var_9)))), (var_11)))))))));
    var_23 ^= ((/* implicit */int) (-(max((8191ULL), (((/* implicit */unsigned long long int) (short)12047))))));
}
