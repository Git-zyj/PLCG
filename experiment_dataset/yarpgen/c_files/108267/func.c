/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108267
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
    var_10 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((((/* implicit */int) arr_6 [i_0])) | (var_1)))))), (min((((/* implicit */unsigned long long int) min((var_3), (arr_3 [i_1] [i_1] [i_2])))), ((+(arr_1 [i_2])))))));
                            arr_10 [i_0] [i_1 + 2] [i_3] [i_3] |= ((/* implicit */unsigned short) max((arr_6 [i_0]), ((short)14906)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_12 -= ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (short)18256))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 1]))) : (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_7 [i_4] [(unsigned char)2] [i_4] [i_4])))));
                            arr_16 [i_1] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (short)14906)), (var_8))), (((/* implicit */unsigned long long int) ((long long int) 1529222092)))));
                            var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)14906)), ((unsigned short)7936)))) ? (max((35184372084736ULL), (((/* implicit */unsigned long long int) 2690200987U)))) : (((/* implicit */unsigned long long int) ((long long int) var_6))))), (((/* implicit */unsigned long long int) 1182401906U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((((/* implicit */_Bool) (short)-22)) ? (941120253) : (((/* implicit */int) (unsigned char)255))))));
    var_15 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) var_0)), (var_7))))) << (((long long int) (!(((/* implicit */_Bool) 2147483647))))));
}
