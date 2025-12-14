/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171107
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (var_8)));
    var_19 = ((/* implicit */unsigned int) (+(((((long long int) 0U)) | (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16958))) : (3584082608U)))))));
                    var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                }
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    arr_10 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19877)) ? (3584082583U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20700))))))));
                    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) (short)-18004))) ? (((((/* implicit */_Bool) (short)-18017)) ? (18222837330286303937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (-(var_15)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (3584082632U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [(unsigned char)3] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_10)))));
                            arr_16 [i_0] [(short)7] [i_4] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)12)))) / (max((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                            var_23 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */long long int) (-(((((/* implicit */int) (short)12918)) / (((/* implicit */int) (unsigned char)12))))));
            }
        } 
    } 
}
