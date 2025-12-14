/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173040
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+((-2147483647 - 1))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (1122591764188194267LL)))))) ? (((/* implicit */int) ((max((arr_7 [i_0] [i_0] [(short)15] [i_0]), (arr_7 [i_0] [i_0] [i_2 - 1] [i_3]))) != (-5456720550860059041LL)))) : (((/* implicit */int) (short)21153))));
                                arr_17 [(short)16] [(signed char)6] [i_3] [i_3] [(unsigned char)15] = (!(((/* implicit */_Bool) (-((-(arr_8 [i_0] [i_2])))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) -2848532613312322429LL)) ? (3828721497724190219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) arr_8 [i_4] [(signed char)2])))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 2] [(unsigned short)8])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 1431597831)))) ? (((/* implicit */int) ((5456720550860059041LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : ((-(((/* implicit */int) (signed char)-75))))))) : (min((8796091973632ULL), (((/* implicit */unsigned long long int) (!((_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned char)182)))) && (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_15 [i_0] [i_1]))))), (((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)9)))))))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((((((/* implicit */int) arr_13 [i_0] [i_0])) & (((/* implicit */int) arr_10 [i_2 - 1] [i_1] [i_1] [i_0])))), (511))), ((~(((/* implicit */int) arr_13 [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) var_10)), (((((var_10) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
}
