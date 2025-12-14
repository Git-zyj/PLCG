/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119039
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) 9776682867912461765ULL);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (short)-13332)) : (((/* implicit */int) (unsigned char)241)))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_3 [9LL] [i_2]))))))) ^ (max(((-(13426632948883355782ULL))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (9776682867912461779ULL)))))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [7ULL] [7ULL])) < (((/* implicit */int) (short)25269))))) : (((((/* implicit */_Bool) (unsigned short)24891)) ? (((/* implicit */int) arr_5 [(short)7] [i_1] [i_0])) : (1065353216)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)49152)), (arr_9 [i_3] [i_3])))) ? (((/* implicit */int) arr_13 [8LL])) : ((~(((/* implicit */int) (unsigned char)218))))))) ? ((+(((/* implicit */int) (short)28759)))) : (((/* implicit */int) ((unsigned short) max((8670061205797089851ULL), (((/* implicit */unsigned long long int) arr_11 [i_3] [(short)12]))))))))));
                var_14 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) (+(arr_9 [i_4 - 1] [i_3])))) ^ (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_9 [i_4] [5ULL])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_3])) >= (((var_9) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)218)))))))));
                var_15 = ((/* implicit */long long int) arr_15 [i_3]);
                arr_16 [i_3] = arr_12 [i_3] [i_3];
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((var_2), (((/* implicit */short) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned char)96)))))));
}
