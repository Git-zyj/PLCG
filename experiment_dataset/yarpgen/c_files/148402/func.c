/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148402
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned short)30726), (((/* implicit */unsigned short) (unsigned char)48))))))))));
                arr_6 [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)48)) | (((/* implicit */int) arr_0 [i_1 - 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_1]))))) : ((-(((/* implicit */int) (unsigned char)208))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208)))))))));
                            arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)48)) * (((/* implicit */int) (unsigned char)182))))));
                            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_1 [i_3])), (arr_11 [i_3] [(unsigned short)19] [(unsigned short)6] [(unsigned short)17] [(unsigned short)17]))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = var_9;
    var_17 = ((/* implicit */unsigned short) min(((unsigned char)63), (((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)208)) < (((/* implicit */int) (unsigned char)201)))))))));
    var_18 = ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */unsigned short) var_0);
}
