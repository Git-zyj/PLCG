/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151929
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
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_4] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_18 [i_0] [15LL] [i_4] [i_3] [i_4] = (_Bool)1;
                        }
                        arr_19 [9LL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) (~(7345221470146863749LL)));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_27 [i_0] [i_2] [i_0] [i_5] [i_2] = 356654417895685074LL;
                            arr_28 [i_0] [14LL] [i_0] [14LL] [i_0] [i_0] [9LL] = ((/* implicit */long long int) arr_4 [i_6] [i_1]);
                        }
                    }
                    var_14 = (-((-(arr_13 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        var_15 &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [8LL] [i_0] [i_0] [i_0] [i_0]))))) ? ((((_Bool)1) ? (6169584517445266282LL) : (-7345221470146863749LL))) : (((-947433099157279615LL) - (1735420792246174133LL))))));
        /* LoopSeq 3 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_40 [i_0] [i_7] [i_8] [i_9] [i_10] [i_7] = ((/* implicit */long long int) ((_Bool) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]));
                            var_16 -= ((/* implicit */long long int) arr_29 [i_0] [i_0] [i_9]);
                        }
                    } 
                } 
            } 
            arr_41 [i_0] [i_7] = ((/* implicit */long long int) arr_26 [i_7] [i_7] [12LL] [i_7]);
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7]);
        }
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
        {
            var_17 += ((/* implicit */_Bool) (+(((arr_16 [i_0] [i_0] [6LL] [i_11] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11] [i_11] [(_Bool)0] [6LL] [(_Bool)1]))) : (-768309215233128319LL)))));
            arr_46 [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_0] [(_Bool)1] [i_11] [i_11] [i_11]))));
            arr_47 [i_0] [i_11] [i_11] = arr_5 [i_11] [12LL] [i_0] [(_Bool)1];
        }
        for (long long int i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            arr_52 [i_12] = min((((arr_4 [i_12 + 1] [i_12 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (-3855423919638624258LL) : (6247097903671213584LL))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_5))))));
            arr_53 [i_12] = ((/* implicit */long long int) (!(var_5)));
        }
        arr_54 [i_0] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (!((_Bool)1)))))), ((+(((/* implicit */int) var_11))))));
    }
    var_18 = max((561094401027518339LL), ((-(-6734689102911435301LL))));
}
