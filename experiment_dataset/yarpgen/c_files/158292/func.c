/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158292
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) 189358278);
                var_13 = ((((/* implicit */_Bool) (unsigned char)167)) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? ((-(((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) / (var_10)))) ? (max((1561120377), (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) (unsigned char)251)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_13 [(unsigned char)9] [i_1 + 2] [(unsigned char)22] [i_2] = ((/* implicit */unsigned char) ((((1561120404) & (((1957207939) & (var_12))))) > (((arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_0 + 1]) & (((/* implicit */int) arr_0 [i_0 + 1]))))));
                            var_14 = ((int) ((((/* implicit */_Bool) (unsigned char)109)) ? (298974329) : (((/* implicit */int) (unsigned char)163))));
                            var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_3] [i_2 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_2] [i_2 + 1])))), (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)180))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((var_11) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)0))))))) / (var_10)));
    var_17 += var_0;
    var_18 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) < (((/* implicit */int) (unsigned char)16))));
}
