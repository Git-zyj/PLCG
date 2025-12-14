/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14779
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (unsigned short)39689)))));
                            arr_12 [i_3] [18] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_2] [i_2]);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 15; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */short) min((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (65535U))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_4] [i_4])), (arr_7 [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_6 [i_4 - 1] [(unsigned short)6])))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : (arr_16 [i_4]))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_2 [8])) << (((((/* implicit */int) var_2)) - (60797)))))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65546U)) ? (((/* implicit */int) arr_3 [i_4 + 1] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_3 [i_4 + 2] [i_4] [i_4])))) : (((/* implicit */int) ((signed char) arr_3 [i_4 + 2] [i_4 - 1] [i_4 - 1])))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_4] [i_4])) ? (arr_10 [i_4] [i_4 - 1] [i_4] [i_4]) : (((/* implicit */unsigned int) arr_9 [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */unsigned int) arr_0 [i_4] [i_4 + 1]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 + 2]))) : (min((7302383022230301828ULL), (((/* implicit */unsigned long long int) (signed char)95))))))));
        arr_19 [i_4] = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)8))))) == (2ULL));
    }
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((1073741824U), (338405850U))))));
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)8)) ? (957153060U) : (3221225458U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (min((var_9), (var_6))))))));
}
