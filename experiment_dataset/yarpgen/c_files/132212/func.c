/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132212
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
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) & (((((long long int) 2147483647)) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) (signed char)-83);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)77))))) - (((long long int) (signed char)61)))))));
                            var_22 = arr_6 [i_0] [10ULL] [i_1] [i_3];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) var_14);
                                arr_17 [i_1] [(unsigned short)11] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)65535))), (var_5)))) ? (((var_2) >> (((((((/* implicit */int) var_11)) << (((((/* implicit */int) var_12)) - (17390))))) - (34158564))))) : (((/* implicit */long long int) (-2147483647 - 1)))));
                                var_24 = ((/* implicit */long long int) var_17);
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (signed char)75))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_0] [(_Bool)1] [i_1] [i_7] [i_8] = ((/* implicit */long long int) 2247475766U);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [(_Bool)1]))) != (arr_20 [i_1] [i_1] [i_7] [16LL])));
                            arr_25 [i_0] [i_1] [i_1] [i_8] = ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [4LL] [i_1] [i_8]))) ? (((/* implicit */int) ((short) -287950299))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-65))))));
                            arr_26 [i_0] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) min(((unsigned short)50367), (((/* implicit */unsigned short) (signed char)64))));
                        }
                    } 
                } 
            }
        } 
    } 
}
