/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165170
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) var_5)), (16203735868555752591ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(max((990669554), (((/* implicit */int) var_1)))))) : ((-(((/* implicit */int) var_8))))));
                    var_17 = ((/* implicit */short) 990669564);
                    var_18 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) var_3))))))));
                    var_19 = ((/* implicit */long long int) var_4);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_12))));
                                arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_2 - 1] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) arr_8 [16U] [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_4]);
                                var_21 = max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23058));
                                var_22 = ((/* implicit */_Bool) ((long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (arr_5 [i_1] [i_1] [i_1])))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((long long int) (((-(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2] [i_3])))) % ((-(-914851921)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -1288197291)) ? (var_14) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)-115)))))));
}
