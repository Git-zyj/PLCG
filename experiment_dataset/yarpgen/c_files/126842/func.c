/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126842
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) || (((((/* implicit */int) var_0)) > (((((/* implicit */int) (unsigned char)224)) / (((/* implicit */int) (unsigned char)3)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_4 [i_0])) : (arr_3 [i_1])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1]))))))) ^ ((~(min((((/* implicit */int) var_12)), (var_4)))))));
                var_19 = ((/* implicit */int) var_3);
                var_20 = (!(((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))));
                var_21 ^= (((+(max((((/* implicit */long long int) arr_1 [i_0])), (var_16))))) <= (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)159)) || (((/* implicit */_Bool) var_1)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (long long int i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13839740718537850646ULL)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (_Bool)1))))), ((~(arr_5 [i_2] [i_3 + 1] [i_4])))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) var_5)) : (-281642549))), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (67108608)))))) ? ((+(((/* implicit */int) arr_11 [i_3] [(unsigned char)2])))) : (max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_5))))))));
                    var_24 = ((/* implicit */unsigned long long int) (-(((long long int) var_11))));
                }
            } 
        } 
    } 
}
