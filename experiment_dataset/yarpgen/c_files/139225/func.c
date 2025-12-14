/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139225
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) > (-811468705))), (((-811468705) != (-811468688))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((-4), (811468687)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2]);
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (181260619U)));
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_3])) > (-671930517)))) + (((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))))), ((+(max((((/* implicit */unsigned int) var_2)), (var_10)))))));
                }
                for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = (+(2067369749));
                        arr_17 [i_5] [i_5] [i_5] [(unsigned char)0] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (322766363U))) ? (((/* implicit */int) max(((_Bool)1), (arr_5 [i_4])))) : ((+(524287)))));
                    }
                    var_16 = ((arr_13 [i_1] [i_2] [i_1] [i_2]) & (((((-811468682) + (2147483647))) >> (min((((/* implicit */unsigned int) (unsigned char)227)), (17U))))));
                    arr_18 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */int) (unsigned char)187);
                }
                arr_19 [i_2] [i_1] = ((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1]);
                var_17 = ((/* implicit */signed char) min((2067369748), (((/* implicit */int) ((6) != (-2067369761))))));
                arr_20 [17] = arr_9 [i_1] [i_2] [i_2] [i_2];
            }
        } 
    } 
    var_18 = ((/* implicit */int) (_Bool)0);
    var_19 = ((/* implicit */unsigned int) ((int) -1755004269));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2067369765)) && (((/* implicit */_Bool) 2067369739))));
}
