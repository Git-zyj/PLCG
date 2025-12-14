/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107947
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) min((-8414694448508542841LL), (-8414694448508542841LL)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (8926626632809440339ULL))))) * ((-(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_4] [i_2] [i_2] [5ULL] [i_4] = ((/* implicit */signed char) var_12);
                                arr_13 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) arr_8 [i_0] [(_Bool)0] [i_0] [(_Bool)0] [i_0])), (8414694448508542846LL))) : (min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (-8414694448508542838LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), (var_7)))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)10])))) : (arr_7 [i_3] [i_4])))) : (((((/* implicit */_Bool) -8414694448508542834LL)) ? (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (9546868297525335545ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-1)) : (var_6))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */unsigned short) arr_6 [(unsigned short)7] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)67))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_20 [i_0] [i_0] [i_0] [i_0] [4ULL]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_0] [i_0] [(signed char)8])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_18);
    var_23 = ((/* implicit */signed char) max((((var_8) >> (((var_8) - (7447026278570117809ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) 2235649901U))), ((-(((/* implicit */int) var_13)))))))));
}
