/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185798
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((8001345556945746378LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_0] [4ULL] [i_2] [i_3] [4ULL])), (arr_4 [i_0] [i_1] [i_2] [i_3])))) && (((/* implicit */_Bool) var_1)))))));
                                var_19 = ((/* implicit */unsigned int) 0LL);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -6LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))) != (5LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) 16LL))), (5LL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-20)))))));
                            var_21 = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1] [i_6]);
                        }
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_21 [i_0] [i_1] [i_1] [i_1] [i_0]), ((short)-2997))))) & (arr_0 [i_0] [i_1])))) ^ ((~(max((((/* implicit */unsigned long long int) var_0)), (10516930016214264032ULL)))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */int) var_16)) | (((/* implicit */int) var_13)));
}
