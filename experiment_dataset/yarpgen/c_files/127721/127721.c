/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_0 ? var_8 : var_8))) ? ((var_5 ? var_7 : var_6)) : ((var_5 ? var_6 : 14005))))) ? (((var_6 ? var_5 : var_8))) : (((-(!0))))));
    var_11 = ((+(((~var_5) ? -3350847339 : -var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((!(!2199023255551))) ? ((((((arr_2 [i_1] [i_0]) ? 3350847343 : 1))) ? ((~(arr_5 [i_1] [i_1] [i_1]))) : (~var_5))) : ((((((1 ? var_7 : 34359738367))) ? ((var_1 ? (arr_3 [i_1] [6] [i_0]) : (arr_2 [i_0] [i_1]))) : (!var_1)))))))));
                var_13 = ((((((((var_4 ? (arr_3 [i_0] [i_1] [i_0]) : -97))) ? ((var_7 ? 1 : var_9)) : (arr_3 [i_1] [i_1] [i_0])))) ? ((-var_8 ? 2705840172 : (~51884))) : (((-((~(arr_4 [i_0]))))))));
                arr_7 [i_1] [i_0] [i_0] = ((-((-((-(arr_1 [i_0])))))));
                var_14 ^= ((-((33332 ? ((-89 ? 65535 : 4116)) : 14005))));
                var_15 ^= (((--944119952) ? ((-((8903710438333788249 ? 3350847347 : 10556278174040361906)))) : (((((var_1 ? var_5 : var_7))) ? (arr_6 [i_0] [12] [i_1]) : ((20200 ? var_2 : (arr_0 [i_1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 ^= ((-((((((arr_9 [i_2]) ? (arr_8 [i_4] [i_2]) : 268431360))) ? (((818872532776242803 ? 39224 : -1997554485))) : 944119956))));
                    var_17 = ((+(((~16024718849223262780) ? ((~(arr_5 [i_2] [i_2] [i_4]))) : -206))));
                }
            }
        }
    }
    var_18 = ((((76276768 ? var_3 : var_7))));
    #pragma endscop
}
