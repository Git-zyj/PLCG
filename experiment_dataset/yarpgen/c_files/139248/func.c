/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139248
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
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)-31992)), (var_9))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))) ? (var_9) : (var_9)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (4538441195203173164ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))))));
        arr_3 [10U] = ((/* implicit */short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_14))), (((((/* implicit */_Bool) arr_2 [(short)1] [(short)1])) && (((/* implicit */_Bool) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) >= (((/* implicit */int) ((_Bool) var_5))))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((long long int) 732800234U));
        arr_8 [(unsigned short)2] = ((/* implicit */unsigned long long int) 3562167061U);
        var_20 += ((((/* implicit */_Bool) min((3588066391U), (((/* implicit */unsigned int) var_6))))) && (((/* implicit */_Bool) min((732800234U), (((/* implicit */unsigned int) var_0))))));
        var_21 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))) / (max((((/* implicit */unsigned long long int) 3562167059U)), (max((((/* implicit */unsigned long long int) var_11)), (1457338706785087220ULL)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_22 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 3]))) - (18082896734455554346ULL));
                                var_23 = ((/* implicit */short) (_Bool)1);
                                var_24 &= ((/* implicit */long long int) ((short) (_Bool)1));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_2] = ((/* implicit */short) ((((/* implicit */int) var_11)) * (((/* implicit */int) (short)-31761))));
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3562167044U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (16318315303412799787ULL)));
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((!(((/* implicit */_Bool) var_11))))));
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((min((((/* implicit */unsigned int) (unsigned char)0)), (var_5))), (((((/* implicit */_Bool) 0ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_28 = ((/* implicit */unsigned long long int) var_2);
}
