/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121346
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [(signed char)16] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)15))))), ((-((+(805306368U)))))));
                    arr_8 [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-27190))))), ((+(((/* implicit */int) arr_2 [(short)9]))))))));
                    var_18 = ((/* implicit */short) min((min((((/* implicit */int) (short)-12830)), ((~(((/* implicit */int) (short)-1)))))), ((+((-(((/* implicit */int) arr_3 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)140))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-19448))))) ? ((-(((/* implicit */int) (signed char)-121)))) : ((-(((/* implicit */int) var_15))))))));
                                var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)21184))))) : ((+(1801732877U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
