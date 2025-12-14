/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144686
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))));
                var_17 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)0))))) << (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((signed char) (signed char)2));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_15 [i_5]))));
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 1634631942U))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_23 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_14 [i_7 + 1] [(unsigned char)6] [i_7 + 1])) ? (((/* implicit */int) arr_17 [(unsigned char)0] [(short)2] [(unsigned char)0])) : (((/* implicit */int) arr_17 [6U] [6U] [6U]))))));
                    arr_24 [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_17 [6ULL] [(_Bool)1] [i_8]);
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 12; i_9 += 1) 
                    {
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6]))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 11078594779699247985ULL)))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-11261))))) ? ((-(((((/* implicit */_Bool) 11078594779699247985ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)125)))))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_15 [i_6]))))))));
                                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
                                arr_31 [i_10] [i_9 + 1] [i_9] [i_8] [i_9] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_29 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 - 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [(unsigned char)0] [i_9 + 1] [i_9] [i_9] [i_9 - 1])) && (((/* implicit */_Bool) arr_29 [i_9] [i_9 - 2] [1ULL] [i_9] [i_9 - 2]))))) : ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
