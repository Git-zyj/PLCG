/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166974
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
    var_16 = var_14;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_17 = max(((~((~(var_12))))), (min((((unsigned int) var_1)), (((((/* implicit */_Bool) var_6)) ? (var_13) : (var_15))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_18 = (+((+(var_9))));
                        var_19 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_13)))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) 3895971988U)) ? (2017512887U) : (2347162652U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_1] = min((((unsigned int) var_14)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_15) : (var_13))))))));
                            var_21 = ((var_1) >> (((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (var_10))))))) - (3587968246U))));
                            arr_13 [i_0] [i_0] [18U] [i_0] [6U] = var_9;
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((((unsigned int) var_0)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))))));
                var_22 = var_3;
            }
            var_23 -= var_5;
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    {
                        arr_23 [i_0] [14U] [i_6] [i_0] = ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (var_10)));
                        var_24 += ((unsigned int) ((var_9) >> (((var_6) - (1064715734U)))));
                    }
                } 
            } 
            var_25 -= (+(((((/* implicit */_Bool) var_3)) ? (var_6) : (var_8))));
            var_26 = ((((((/* implicit */_Bool) 1947804644U)) && (((/* implicit */_Bool) 1947804660U)))) ? (((((/* implicit */_Bool) 2814869594U)) ? (1947804643U) : (0U))) : ((+(var_12))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_27 = ((2213057276U) << (((3080849378U) - (3080849364U))));
                            var_28 = ((var_0) << (((((((/* implicit */_Bool) var_9)) ? (var_8) : (var_14))) - (632342976U))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_12 = 4; i_12 < 17; i_12 += 2) 
        {
            var_29 = (-(((((/* implicit */_Bool) (~(var_15)))) ? (((var_5) / (var_2))) : (((var_0) << (((var_8) - (632342960U))))))));
            var_30 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_5)))))));
        }
        arr_36 [i_0] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) var_8)) ? (var_7) : (var_9))))) >= (var_0)));
        arr_37 [i_0] = var_1;
    }
}
