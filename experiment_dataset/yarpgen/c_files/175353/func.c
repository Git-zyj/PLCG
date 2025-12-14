/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175353
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-4058803170914884702LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_18 &= ((/* implicit */short) arr_0 [i_0]);
        var_19 = ((/* implicit */signed char) min(((unsigned char)190), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) var_3))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (4058803170914884689LL)))) ? (((/* implicit */int) arr_0 [i_0])) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (1904125317)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_12))));
    }
    var_20 = ((/* implicit */unsigned short) -1904125318);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+((~(((/* implicit */int) max((var_13), ((_Bool)1)))))))))));
    var_22 = max((var_14), (min((((signed char) -4058803170914884693LL)), (min((var_12), (var_14))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            {
                arr_8 [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_1] [i_2 + 1])))) * (((((/* implicit */int) arr_6 [i_1] [i_2] [i_1])) / (((/* implicit */int) var_16))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_19 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 - 1]))))), (min((max((-811608129), (((/* implicit */int) (signed char)-22)))), ((+(arr_17 [i_5] [i_5] [0] [i_3] [i_2 + 2] [(_Bool)1])))))));
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_5] [i_5] [i_5] [i_5])))));
                                var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_5] [i_5] [i_4]), ((unsigned char)0)))) ? (arr_14 [6] [i_1] [i_2 + 2] [(unsigned char)4] [i_2 - 1]) : (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_18 [i_1] [i_2 + 2] [(short)4] [i_2 + 2] [i_4] [i_5]))))))) ? ((+(((arr_16 [i_2] [i_5] [i_5]) ? (arr_17 [i_1] [i_2] [i_3] [i_1] [i_1] [i_1]) : (((/* implicit */int) (unsigned char)176)))))) : ((+(((/* implicit */int) var_0))))));
                                arr_21 [i_3] [i_2] = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_16 [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 3] [i_2 + 2])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((signed char) (short)5964))) : ((-(((/* implicit */int) (unsigned char)205))))));
                    var_25 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)190))))));
                    arr_22 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14194)) ? (arr_5 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))))) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (signed char)-103))))))) ? (((((/* implicit */_Bool) min((var_14), (var_6)))) ? ((-(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [(unsigned short)3] [i_1])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) min((((/* implicit */short) ((_Bool) arr_0 [i_3]))), (arr_18 [i_3] [i_2] [i_3] [i_2] [i_2] [i_1]))))));
                }
            }
        } 
    } 
}
