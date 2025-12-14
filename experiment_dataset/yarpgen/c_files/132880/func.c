/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132880
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_2 - 3] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 2])) > (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 2]))));
                                arr_15 [i_1 - 3] [i_1] [i_2 + 3] [i_1] [i_4 - 2] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) var_9)) + (1832))))));
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (~(((arr_14 [i_0] [i_1 - 2] [i_1] [i_2 + 2] [i_3 + 1] [i_3 + 2] [i_4]) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                            }
                            var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_2 - 1]), ((~(var_8)))))), (max((min((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((arr_6 [i_3 - 2] [i_1] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_1 + 2] [i_5]))), ((~(((/* implicit */int) ((((/* implicit */_Bool) 36028797018963967ULL)) && (((/* implicit */_Bool) var_6)))))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (+(arr_19 [i_1 - 2] [i_1] [i_0 - 1] [i_0 + 3] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((var_3) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((signed char) var_2))))))));
    var_18 += ((/* implicit */int) ((((var_5) ? (((/* implicit */unsigned long long int) ((int) 6980628011334439664LL))) : (((unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))))))));
}
