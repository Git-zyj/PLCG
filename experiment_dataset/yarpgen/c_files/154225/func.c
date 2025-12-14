/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154225
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
    var_11 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4665589546335286524ULL)) || (((/* implicit */_Bool) (signed char)-101)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((long long int) var_8))))) ? ((~(((/* implicit */int) max((((/* implicit */short) var_7)), (var_0)))))) : (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((long long int) -155614432))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19206))) : (((unsigned long long int) ((unsigned long long int) var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((long long int) var_7));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (1260356585087667113ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (arr_3 [i_1])))) && (((/* implicit */_Bool) (signed char)63))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (short)14336));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [3ULL] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) 17186387488621884492ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (3253575598198233203LL))))))));
                                var_15 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
