/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12403
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32760)))))) * (var_0)))) && (((/* implicit */_Bool) var_7))));
                                var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_12 [i_0 + 1] [i_2 + 1] [i_0 + 1]), (arr_12 [i_0 - 2] [i_2 - 2] [i_2])))) != (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7))))))));
                                var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56463))) - (arr_11 [i_4] [i_3] [i_1] [i_0 - 4]))))))), (((5260763661463229348LL) << (((((/* implicit */int) arr_8 [i_2 - 2] [i_2] [i_2] [i_0] [i_0] [i_0])) - (8530)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [17LL]), (arr_12 [i_0 - 3] [i_1] [i_2 - 2])))))));
                    arr_13 [i_0] [i_1] [i_0] = ((min((((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) % (var_6))), (((/* implicit */long long int) ((unsigned short) arr_2 [i_0]))))) ^ ((+(((arr_4 [i_0 + 1] [(unsigned short)11] [(_Bool)1]) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
    var_15 = min((((/* implicit */long long int) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_2))))))))), (var_8));
}
