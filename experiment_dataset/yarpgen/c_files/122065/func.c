/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122065
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((var_5) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_7))))))) >> (((/* implicit */int) (!(var_6))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14)))))))));
                                var_22 = ((/* implicit */_Bool) (+(max((var_9), (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (12134250850473756651ULL)))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */int) ((var_16) || (var_6)))) << (((((((/* implicit */_Bool) (short)-11533)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (4294967261U)))));
            var_25 = ((/* implicit */short) min((max((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) 857877210)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            var_26 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18))))));
            var_27 = min((min(((+(((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_17), (((/* implicit */short) var_11))))) : (var_9))));
        }
        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_16)), (var_13)))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
        var_29 = ((((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) << (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || ((_Bool)1)))));
    }
    var_30 |= ((/* implicit */unsigned int) var_18);
    var_31 -= ((/* implicit */long long int) var_1);
}
