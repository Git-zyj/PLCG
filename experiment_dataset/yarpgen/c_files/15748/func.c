/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15748
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_5)))));
                        var_12 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-1LL)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((int) var_8))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-31734)) * (((/* implicit */int) (short)18287))));
    }
    var_14 = ((/* implicit */signed char) max((((short) 0LL)), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 596128940U)) ? (28LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_21 [i_4] [i_5] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)1736))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(0)))) && (((/* implicit */_Bool) (-(arr_17 [i_6]))))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */int) var_2)) >> (((unsigned int) (unsigned char)17)));
            }
        } 
    } 
}
