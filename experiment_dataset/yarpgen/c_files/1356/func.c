/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1356
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_11 = 5280457055790850964ULL;
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_1] [i_0]), (arr_5 [i_0])))) != (((((/* implicit */_Bool) (signed char)-118)) ? (max((976645725033781030ULL), (((/* implicit */unsigned long long int) -1173240643)))) : (16237742039307919311ULL)))));
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1173240650)) ? (0U) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_1 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 23; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_12 |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [10LL] [i_5])) ? (var_6) : (((/* implicit */int) arr_6 [(short)0] [(short)0] [i_0] [i_0] [(short)0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)220)), (var_0))))) : (var_1))));
                            arr_17 [i_5] [i_0] [i_1 - 1] [i_4] [i_0] [i_0] = ((/* implicit */long long int) (-(-1173240656)));
                            arr_18 [i_0] = ((/* implicit */signed char) arr_4 [i_4] [i_4] [i_4]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) ((-10) < (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)216)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((1173240644), (var_5)))))) && (((/* implicit */_Bool) var_2))));
}
