/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14630
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
    var_13 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 39981085)) ? (39981066) : (438274997))), (var_2)))) ? (((((/* implicit */_Bool) -995264628)) ? (var_12) : (var_9))) : (max((var_7), (var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 -= -39981085;
        var_15 = ((((/* implicit */_Bool) 39981053)) ? (-1732829299) : (3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) 1100876384)) ? (39981053) : (-123730298));
                                arr_12 [i_4] [i_4] [i_0] [i_4] [i_4] [i_3] = ((((/* implicit */_Bool) -1)) ? (-795201048) : (-1489974558));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) 167020351)) ? (1139759511) : (2147483643));
                    arr_13 [i_2 - 1] [i_1] [i_0] = ((((/* implicit */_Bool) 2147483639)) ? (-1489974547) : (((((/* implicit */_Bool) 39981077)) ? (1911870781) : (-2088836333))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 7; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 7; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_18 |= -239217626;
                            arr_26 [i_5] [i_6] [i_8] [i_9] = min((((((/* implicit */_Bool) -2054456076)) ? (2147483643) : (-2054456097))), (((((/* implicit */_Bool) -1100876376)) ? (-123730298) : (-1778779304))));
                            arr_27 [i_8] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -645681533)) ? (0) : (-14)))) ? (((((/* implicit */_Bool) 314506291)) ? ((-2147483647 - 1)) : (-879375415))) : (min((-1100876384), (-1489974558))));
                        }
                        var_19 = ((/* implicit */int) max((var_19), (min((max((485815585), (-1086089815))), (((((/* implicit */_Bool) -2054456078)) ? (39981085) : (-314506305)))))));
                    }
                } 
            } 
            arr_28 [i_6] = -1;
        }
        var_20 = 1489974547;
    }
    for (int i_10 = 2; i_10 < 24; i_10 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), (min((((((/* implicit */_Bool) -1)) ? (845247620) : (-20176501))), (min((-698492907), (max((1489974557), (2147483647)))))))));
        arr_32 [23] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2073919115)) ? (-2018428397) : (659105879)))) ? (min((0), ((-2147483647 - 1)))) : (max(((-2147483647 - 1)), (-1836794776))));
    }
}
