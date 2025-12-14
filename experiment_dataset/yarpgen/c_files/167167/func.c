/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167167
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 ^= ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_1]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        arr_9 [i_1] [i_1] [i_1] [(signed char)18] [i_1] [i_2] = (+(((unsigned int) (_Bool)1)));
                        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(_Bool)1])) : (((/* implicit */int) (unsigned char)232))))), ((((_Bool)1) ? (((/* implicit */unsigned int) -1)) : (4129842191U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_2])))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_12 [(signed char)14] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) var_5))))) ? (((arr_11 [i_1]) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_11 [i_0])))) : (((/* implicit */int) max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) arr_5 [i_0])))))));
                        var_12 = ((/* implicit */signed char) ((int) min(((short)17550), (max(((short)17550), (((/* implicit */short) (_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((signed char) (signed char)-61));
    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) var_6)))) + (((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_2))));
    var_15 ^= ((/* implicit */short) max((((/* implicit */int) (_Bool)0)), (max((min((-1654432187), (((/* implicit */int) (short)16285)))), (((/* implicit */int) var_6))))));
    var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((long long int) var_2))))) ? (((((var_2) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) ((_Bool) var_0))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_2)))) * ((-(((/* implicit */int) (_Bool)1)))))))));
}
