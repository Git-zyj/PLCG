/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180535
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
    var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_2)) + ((-(((/* implicit */int) (signed char)0)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((unsigned int) ((signed char) 13733831158848213627ULL))) / (((/* implicit */unsigned int) ((int) ((int) var_15))))));
                        var_22 = ((/* implicit */short) (((-(((((/* implicit */int) var_18)) / (((/* implicit */int) arr_7 [i_2] [i_2])))))) << ((((~(var_11))) - (6143491656902176672ULL)))));
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((unsigned int) ((short) (signed char)-34)));
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) var_2))), (((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])) * (3457019015U)))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((arr_2 [i_5] [i_5]) << (((((/* implicit */int) var_1)) - (60)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */int) (-((~(var_11)))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)33))) - (-4063566522203351161LL)));
                        }
                        arr_21 [i_0] [i_4] [(unsigned char)12] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6] [i_6 + 1] [i_6]))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((min(((-(((/* implicit */int) arr_1 [i_4])))), (((var_16) / (((/* implicit */int) var_13)))))) + (2147483647))) << (((max((3087442050914968184LL), (min((3087442050914968181LL), (((/* implicit */long long int) arr_18 [(unsigned short)10])))))) - (3087442050914968184LL)))));
                        var_27 = ((/* implicit */unsigned long long int) (~(((((long long int) var_0)) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) 15440546154995694689ULL)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_24 [i_8] = ((/* implicit */long long int) ((unsigned char) ((signed char) var_17)));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((unsigned char) (signed char)-47));
                    var_29 = ((/* implicit */int) ((unsigned char) var_17));
                }
            } 
        } 
        arr_29 [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) var_5)))));
        arr_30 [i_8] = ((/* implicit */int) ((arr_17 [i_8] [i_8] [i_8] [(signed char)5] [i_8] [(signed char)5] [i_8]) - (((/* implicit */unsigned int) -757988429))));
        arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) < (3477594515290371924ULL)))) > (616269481)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_34 [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) 2785734310U)))));
        var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(arr_0 [i_11] [i_11])))))) * (max((((((/* implicit */unsigned long long int) 2765503694U)) / (10946749563061203714ULL))), (((/* implicit */unsigned long long int) ((int) -3375608770590185866LL)))))));
        arr_35 [i_11] = ((int) ((((2518522155325695270LL) % (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))));
    }
}
