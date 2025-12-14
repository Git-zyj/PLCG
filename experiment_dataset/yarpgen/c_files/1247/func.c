/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1247
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
    var_17 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-1))))))) == (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (10508578808004450163ULL)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) max((arr_2 [i_0]), (arr_2 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_8)) == (arr_0 [i_0] [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_2])), (4294967295U)))))) || (((/* implicit */_Bool) (~(10U))))));
                }
                /* LoopNest 3 */
                for (short i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned long long int) (~(arr_3 [i_5] [i_3 + 2] [i_3])))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_5 - 1] [i_3])))) ? (((int) 4294967278U)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_5 - 1] [i_3])) ? (arr_10 [i_0] [i_5 - 1] [i_3] [i_3 + 2]) : (arr_3 [i_0] [i_5 - 1] [i_3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
