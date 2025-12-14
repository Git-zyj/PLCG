/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156489
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
    var_17 += ((/* implicit */unsigned int) min((((/* implicit */short) (!((!(((/* implicit */_Bool) 455423288))))))), ((short)23374)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */int) (short)-23374)) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (~((~(0LL)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6493735499788977208LL)) + (var_2)))) ? (((/* implicit */int) ((short) arr_5 [i_1]))) : (((/* implicit */int) var_16)))))));
                }
                for (short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) -4547603765849360050LL)))));
                    arr_19 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(max((((-6493735499788977221LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-23377))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)39110)))))))));
                    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((int) var_11)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) ((((((/* implicit */int) var_7)) >> (((/* implicit */int) var_7)))) > (((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) arr_5 [i_5])))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    arr_23 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3681)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)3381), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_6] [i_6])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (268419072U)))))))));
                    arr_24 [(signed char)14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_16);
                }
                var_21 += ((/* implicit */signed char) var_16);
            }
        } 
    } 
}
