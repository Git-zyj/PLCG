/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186978
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
    var_14 = ((/* implicit */int) max((var_14), (var_11)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_15 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min(((signed char)-55), ((signed char)-117)))))) ? (var_9) : (max((var_3), ((~(-734446681)))))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((384772009), (-734446681)))) && (((/* implicit */_Bool) min((var_10), (var_10)))))) ? (max(((-(var_9))), (min((((/* implicit */int) var_7)), (var_11))))) : (var_11)));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-100)) && (((/* implicit */_Bool) 1415132625))))) | (((/* implicit */int) var_2))));
                arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) (+(-384772009)))) || (((-734446681) != (((/* implicit */int) (!(((/* implicit */_Bool) 934783634))))))));
                arr_10 [i_1] = (~(384772009));
                arr_11 [i_1] [i_2] [i_3 + 1] = var_0;
                var_18 = ((/* implicit */signed char) var_5);
            }
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_19 = max(((+(((/* implicit */int) (_Bool)1)))), ((+((~(((/* implicit */int) var_0)))))));
                        arr_17 [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((-934783635), (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -934783634)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_18 [i_1] = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        }
        arr_19 [i_1] = (+(145074382));
        arr_20 [i_1] = ((/* implicit */_Bool) var_10);
    }
    var_21 = ((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */int) var_0))));
}
