/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180946
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
    var_17 = ((/* implicit */unsigned int) var_12);
    var_18 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_0 [i_0])))), ((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_12);
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (-2147483626)));
                        arr_10 [(_Bool)0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1] [i_3] [i_2]) > (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned short) ((unsigned char) -2147483626))), (((unsigned short) var_14))));
                        arr_11 [i_2 - 1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) && (((/* implicit */_Bool) 2147483625)))))) + (arr_1 [3])));
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 2147483647)))));
    }
    var_24 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)56626)) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) -2147483627))))))) ? (var_12) : (((/* implicit */int) var_13)));
}
