/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185613
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 448858399)) ? (((/* implicit */int) (unsigned short)22694)) : (-1516193836)));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) var_3);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [i_0 + 1] [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) var_10);
                            var_15 -= ((/* implicit */unsigned short) (-(((1516193836) / ((-2147483647 - 1))))));
                        }
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) -448858399))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1516193855)) ? (-7918412231650407106LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 448858407))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1])))))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) 4146582447377493592LL)) ? (((/* implicit */int) (unsigned short)48689)) : (((/* implicit */int) (unsigned char)8)));
                                var_19 += ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2] [i_5]);
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1] [i_0] [i_1])) * (((/* implicit */int) (unsigned char)212))))) ? (var_11) : (((/* implicit */long long int) ((int) 1968261708)))));
            }
        } 
    } 
    var_21 = (-(((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) var_7)) - (38714))))) + (var_6))));
}
