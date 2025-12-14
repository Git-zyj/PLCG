/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102827
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3]))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) ((3760325640U) / (var_2))))), (-2879093348519878849LL)));
                                var_12 = ((/* implicit */int) 6081346229723422954LL);
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5498515819647989424LL)) || (((/* implicit */_Bool) min((arr_11 [i_4] [i_4] [i_4] [i_1] [i_4]), ((unsigned short)0))))));
                                arr_15 [1LL] [i_1] [i_2] [i_1] [i_2] = -6081346229723422955LL;
                                arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_1] [i_3] [i_1] [i_1]);
                            }
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [16U])) || (((/* implicit */_Bool) var_10))));
                            var_14 = ((/* implicit */long long int) ((arr_8 [i_1] [i_2 + 1] [i_1]) >= (max((((/* implicit */long long int) arr_12 [i_1])), (arr_3 [i_0] [i_1])))));
                        }
                    } 
                } 
                arr_18 [4LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)255));
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_0 [i_1])))) + (2147483647))) >> (((var_4) - (2446032297035746377LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_10))));
    var_16 = var_6;
    var_17 = ((/* implicit */unsigned char) -643146472);
}
