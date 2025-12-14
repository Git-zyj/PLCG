/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100675
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
    var_11 = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_9)), (((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), ((signed char)127)));
                    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_6)))))))) ? ((+(((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_3] [i_2] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_5)) + (33)))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_14 [i_3] [i_2 + 1] [i_2] [i_3] [i_3 + 1]))) < (((/* implicit */int) ((signed char) var_1))))))));
                                var_16 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((signed char) (signed char)114))))), (((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)-91))))) ? (((/* implicit */int) min(((signed char)-16), ((signed char)85)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_0] [i_3] [i_3])))))) : (((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_4] [i_3 + 1] [i_3 + 1] [i_2 + 2])), (var_10))))));
                                var_18 = ((/* implicit */_Bool) max((max((((((/* implicit */int) var_6)) | (((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) arr_5 [i_1] [i_2] [i_2]))))), (((((/* implicit */_Bool) ((signed char) var_2))) ? (((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-42)) != (((/* implicit */int) (signed char)-75))));
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_5)) % (((/* implicit */int) var_8)))) == (((/* implicit */int) min(((signed char)-22), ((signed char)-86))))))) & (((/* implicit */int) var_1))));
}
