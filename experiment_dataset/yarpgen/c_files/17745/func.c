/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17745
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) 1937418555)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((signed char) (short)(-32767 - 1))));
                    var_12 *= ((/* implicit */_Bool) ((long long int) ((unsigned long long int) (-(((/* implicit */int) (signed char)71))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (long long int i_5 = 3; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)15))))));
                        arr_19 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (signed char)71);
                        arr_20 [i_0] [i_0] = ((/* implicit */long long int) 1937418541);
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(-1937418543))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)62))));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (-((+(274877906943LL)))));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)255)))))))));
    }
    var_16 = ((/* implicit */short) var_10);
    var_17 *= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            {
                arr_31 [i_7] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((unsigned long long int) 1937418543)))))));
                arr_32 [i_7] = ((/* implicit */signed char) (-((-(1937418543)))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 3) 
                    {
                        {
                            arr_38 [i_7] = ((/* implicit */unsigned int) ((long long int) 1937418562));
                            arr_39 [i_8] [i_7] [i_8] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)0)))));
                            arr_40 [i_7] [i_7] [i_7] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
