/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184036
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
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) var_2);
        var_10 = ((/* implicit */short) ((((_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (47))) - (30)))))));
    }
    for (unsigned short i_1 = 4; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (~((~(((/* implicit */int) max((var_2), (((/* implicit */short) var_1))))))))))));
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))))) & (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_4))))));
        var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */int) var_9)) << (((var_3) - (3737355558U))))) : (((/* implicit */int) var_0))))));
        var_14 &= (-((+(5437741264382265862ULL))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_16 *= ((/* implicit */unsigned short) ((signed char) ((unsigned char) var_3)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((short) var_6));
                }
            }
        } 
    } 
}
