/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183598
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (~((~(((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)4] [(short)10] [4LL] [i_2] |= ((/* implicit */short) ((_Bool) ((long long int) var_1)));
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_8))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (unsigned char)255))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned short) ((short) var_4))), (var_9))));
        var_14 = ((/* implicit */unsigned short) (_Bool)0);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_4))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)34590))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned long long int) var_8);
                        arr_21 [i_7] [i_6] [(unsigned short)18] [i_4] |= ((/* implicit */short) (unsigned short)34592);
                        var_18 ^= ((/* implicit */short) ((unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_5))))));
                        var_19 = ((/* implicit */signed char) ((unsigned short) (unsigned short)34594));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 1) 
    {
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    var_20 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    arr_33 [i_9] [i_9] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) max(((unsigned short)30946), (((/* implicit */unsigned short) var_2))));
}
