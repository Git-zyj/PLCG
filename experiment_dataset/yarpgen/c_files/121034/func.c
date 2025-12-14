/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121034
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = -2271552147452475544LL;
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(var_1))), (arr_8 [5LL] [i_1] [i_1] [i_1]))))));
                                var_12 = ((/* implicit */long long int) (((~(-1LL))) > (max((arr_9 [1LL] [i_2 - 2] [i_2 - 4] [11LL] [16LL]), (((long long int) var_5))))));
                                arr_14 [i_0] [i_1] [15LL] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 6436322428141967143LL)) ? (arr_10 [i_0] [i_1] [i_2] [10LL]) : (-2271552147452475562LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((-5623773381712526676LL) != (5540635151581065389LL))))))))) % (-7270044964137371241LL));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (1187652088282171865LL) : (8848656270709083308LL))))) ? (arr_0 [4LL] [i_5 + 1]) : (var_8));
                            var_13 = arr_7 [i_1] [i_1] [i_0];
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((long long int) (~(var_7)));
    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (min((var_1), (5623773381712526654LL))) : ((+(-374353458581620927LL)))))) ? (var_7) : (min((min((var_6), (-374353458581620932LL))), (var_8)))))));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            {
                arr_28 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_10 [3LL] [16LL] [i_7] [2LL]))))));
                arr_29 [9LL] [11LL] = -5540635151581065374LL;
                var_16 &= (+(-8646792530079803375LL));
            }
        } 
    } 
}
