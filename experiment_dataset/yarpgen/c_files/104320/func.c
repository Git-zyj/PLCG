/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104320
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
    var_19 = ((((/* implicit */int) ((((/* implicit */int) var_11)) <= ((-(((/* implicit */int) (unsigned short)17468))))))) ^ ((-((~(((/* implicit */int) var_17)))))));
    var_20 = ((/* implicit */unsigned short) (((-(((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_17)))))) <= ((~(min((var_7), (((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3977))) : (((arr_0 [i_0]) ? (8712968201934457896LL) : (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) (((~(((/* implicit */int) (short)-3966)))) == ((~(((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned short)30465))))))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned int) -1417728569));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) 327760748);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */int) min((var_9), (((/* implicit */unsigned int) arr_1 [(signed char)18] [(signed char)6]))));
                    arr_11 [i_0] [i_0] [i_1] [(unsigned short)21] = ((/* implicit */long long int) var_13);
                    arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-72)) <= (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)2009))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(-1333391827)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_10)))) : ((-(((/* implicit */int) var_18)))))), (min((min((((/* implicit */int) var_2)), (-555742691))), (((/* implicit */int) var_11))))));
}
