/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158666
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (var_1)))) ? (var_2) : (((/* implicit */long long int) (~(2067422270))))))) ? ((((~(10031567403330761037ULL))) - (max((14260423662095205876ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                        var_11 ^= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((-1328257526) | (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2])) ? (((/* implicit */long long int) arr_8 [i_0] [(_Bool)1] [i_2] [i_2])) : (var_2)))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */long long int) ((4186320411614345740ULL) <= (4186320411614345739ULL)));
        arr_12 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_10 [(unsigned char)0] [(unsigned char)0] [i_0] [(_Bool)1] [4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_4))))) : (4186320411614345740ULL))), ((+((-(16321716118990222944ULL)))))));
    }
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) -24LL)) : (0ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_3)) : (1485420470))))))));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) var_9))), (var_4)));
    var_15 = ((unsigned char) 0ULL);
}
