/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119917
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) | (arr_4 [i_0] [i_0] [(unsigned char)14])))))) ? (((/* implicit */long long int) -1948192338)) : (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (arr_2 [i_0])))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) 1507437682U)) ? (2787529614U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_10 = ((/* implicit */unsigned int) max((((long long int) (~(-19)))), (min((var_5), (((/* implicit */long long int) 1507437660U))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-4005)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1649210571843187025ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967264U)))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2]))) : (arr_5 [i_1] [i_1] [i_1]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2])) & (1507437682U))))))))))));
                            var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))))) - (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))))) < (((/* implicit */long long int) ((/* implicit */int) ((((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) <= (((long long int) arr_0 [i_0]))))))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) + (1507437660U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (-(8191LL)));
}
