/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169851
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
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) max(((-(((/* implicit */int) (signed char)18)))), (((/* implicit */int) max((arr_2 [i_0 - 1] [i_0 + 1]), (arr_6 [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = max(((signed char)-24), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-39))))))));
                            arr_15 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_6 [i_1]))))))) ? ((-(((((/* implicit */int) (signed char)38)) >> (((((/* implicit */int) (short)24861)) - (24834))))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])) <= (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_6;
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-30)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_4)))))));
    var_22 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) (signed char)39)))) && (min((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (signed char)-69)))), (((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_6))))))));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7] [i_5] [i_4])) && (((/* implicit */_Bool) var_7))))), (arr_25 [i_4] [i_5] [i_7] [i_6] [i_7] [i_7]))))));
                        arr_27 [(signed char)10] [i_7] = ((/* implicit */short) max((max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_6 - 1])) || (((/* implicit */_Bool) (signed char)102))))), (min((arr_26 [i_7] [i_5]), (var_0))))), ((signed char)24)));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_24 [i_4]), (((/* implicit */short) (signed char)-99))))) ? ((+(((/* implicit */int) (signed char)63)))) : (((/* implicit */int) (signed char)51))));
    }
}
