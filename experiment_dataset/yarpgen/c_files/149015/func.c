/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149015
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
    var_17 = ((/* implicit */short) var_6);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28209)) % (3)));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (-11)))) : (1073741824)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) var_6)), (10535258401394145214ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) 1555240275U)), (arr_3 [i_0 - 1])))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -128150133)) ? (arr_3 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28227)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (unsigned char)48);
                            arr_14 [i_3] = ((/* implicit */_Bool) min((18446744073709551614ULL), (((/* implicit */unsigned long long int) 128150133))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)25408)) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (12965722926549502101ULL))), (((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1]))))))))));
                arr_15 [i_0 - 1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7722)) ? (((/* implicit */int) ((unsigned char) -1073741824))) : (((/* implicit */int) arr_13 [i_0 + 3] [i_0 + 1] [i_0 + 4] [i_0 - 1]))))) ? (((((/* implicit */_Bool) 1555240275U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 3] [i_0 + 3]))) : (arr_7 [i_1] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) -4))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        for (short i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (int i_6 = 4; i_6 < 17; i_6 += 2) 
            {
                {
                    var_22 = ((4611686018427387904ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))));
                    var_23 = 620908317U;
                }
            } 
        } 
    } 
}
