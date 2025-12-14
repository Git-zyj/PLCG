/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185941
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (-9024775631894092081LL)));
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [(signed char)11] [i_0] [i_0 - 1] [(_Bool)1] [i_0 + 1]))) ? (((/* implicit */int) max((((/* implicit */short) arr_4 [i_2])), (arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_0] [i_0 - 1])))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_1]))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) min((((long long int) var_5)), (((/* implicit */long long int) max(((unsigned short)38341), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_1] [i_0 + 1])))))));
                var_17 = ((/* implicit */unsigned long long int) -9024775631894092081LL);
                arr_18 [i_1] [i_1] = ((/* implicit */short) -9024775631894092075LL);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) 9218730256464695335LL));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_0)), (var_1))), (((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36013)))))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_7)), (var_1))), (((var_2) | (var_1)))))) : (var_10)));
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10706334927066765832ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) != (min((var_9), (var_6))))))) : (8764500000084459197LL)));
}
