/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187442
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (short)8064)) - (((/* implicit */int) (unsigned char)90)))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                            var_10 = ((/* implicit */unsigned int) (~(max((arr_10 [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_8 [5ULL] [i_1] [i_2] [i_3]))))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_1]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_5 [(unsigned char)5] [i_1] [(_Bool)1])))))));
                            var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)3)))));
                        }
                    } 
                } 
                var_12 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (arr_7 [i_1] [i_1] [i_0] [i_0])))) ? ((~(arr_6 [13U] [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_1])))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned long long int) min((min((((/* implicit */int) ((unsigned short) var_5))), (((int) var_5)))), (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_15 [i_4]))))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_15 [(_Bool)1]))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_14 [i_4])))) ? (((arr_14 [i_4]) - (arr_16 [i_4]))) : (arr_16 [i_4])));
    }
}
