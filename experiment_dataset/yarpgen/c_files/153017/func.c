/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153017
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
    var_12 = ((/* implicit */unsigned long long int) ((long long int) var_0));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-118))));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~((~(((/* implicit */int) arr_9 [i_3] [4U] [i_2] [i_3] [2LL])))))))));
                                var_15 = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) (signed char)114))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4186721873647044938LL))))) & ((~(((/* implicit */int) var_1)))))));
                arr_14 [i_1] |= ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) -309293223)) && (((/* implicit */_Bool) 3421706085311399258LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-((~((-(((/* implicit */int) var_8)))))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                var_18 = (~((~((~(var_10))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)8160))))))))));
                            var_20 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) arr_16 [i_8]))))))));
                            var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_7))))))))));
                            var_22 = ((/* implicit */signed char) (((-((+(((/* implicit */int) var_6)))))) / ((-((+(var_2)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
