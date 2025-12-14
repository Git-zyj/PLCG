/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156931
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
    var_11 = min((var_10), (min(((unsigned short)59818), (var_3))));
    var_12 = var_10;
    var_13 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) & (((/* implicit */int) var_3)))) < (((((/* implicit */int) var_3)) | (((/* implicit */int) var_0))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55790)))))));
                            var_15 = ((unsigned short) max((max((var_7), (var_2))), (min(((unsigned short)33068), (var_3)))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_6), ((unsigned short)65268)))) * (((/* implicit */int) var_3))));
                            var_17 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_8))))));
                            var_18 = (unsigned short)16445;
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0)))) % (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)11)))) >= (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)10981)) : (((/* implicit */int) (unsigned short)896)))))))));
            }
        } 
    } 
}
