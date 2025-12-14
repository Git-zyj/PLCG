/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123738
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
    var_19 = ((/* implicit */short) max(((+(((((/* implicit */int) (unsigned short)63488)) / (-1652247646))))), (((((/* implicit */int) ((unsigned short) (short)19287))) / (min((((/* implicit */int) (short)19287)), (var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned char) ((arr_1 [i_0] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32759)))))))));
                var_21 = ((/* implicit */int) ((min((((/* implicit */int) (signed char)0)), (537214136))) >= (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
    var_22 = var_0;
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 24; i_4 += 4) 
            {
                {
                    var_23 *= ((/* implicit */unsigned long long int) 6436830873396746114LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) ((unsigned char) var_18));
                        arr_21 [13LL] [i_3] = ((/* implicit */unsigned short) (+(((var_15) + (4979671142058698598LL)))));
                        var_25 &= ((/* implicit */int) (unsigned short)53578);
                        var_26 *= ((signed char) arr_13 [i_2 - 2]);
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            var_27 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2081488388623468797LL))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_10 [i_6])) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32744))) | (var_7)))));
                            var_29 = ((((/* implicit */_Bool) 6436830873396746109LL)) ? (7158140610186169888LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 3]))));
                        }
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_27 [i_4] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (short)29267)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_15)));
                            var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_3 + 3] [i_4 + 1] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)112))))) && (((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))));
                            arr_28 [i_2 - 1] [i_2 - 1] [i_4] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >= (arr_10 [i_7])));
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) + (var_6)));
                            arr_33 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) var_16))) | (arr_22 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2])));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (6639612454855264291ULL)));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_26 [i_2] [i_2] [i_4 + 1] [i_2])) | (arr_19 [i_2 - 1] [i_3 + 2]))))));
                        }
                    }
                    arr_34 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                }
            } 
        } 
    } 
}
