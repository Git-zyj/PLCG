/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116916
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) (+(-7606603136609227447LL)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] = ((/* implicit */short) 566955739U);
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((short) arr_7 [i_0] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)232))))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)209)) || (((/* implicit */_Bool) ((short) (short)22464)))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-((-(((/* implicit */int) var_6)))))))));
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)47)) : (127)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [(unsigned char)8])))))) ? (((/* implicit */int) max((((/* implicit */short) min((var_12), ((signed char)124)))), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
    }
    var_22 |= ((/* implicit */signed char) ((unsigned char) var_5));
    var_23 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_10), ((_Bool)1)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11))))))));
}
