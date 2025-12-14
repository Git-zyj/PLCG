/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179851
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_18)), (var_0)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (min((var_3), (var_16)))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned short) var_18))))), (var_14))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_22 = ((/* implicit */long long int) max((14253217179289274728ULL), (((/* implicit */unsigned long long int) 1U))));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (_Bool)1)), (-1LL))), (((/* implicit */long long int) var_6))));
                    var_24 &= ((/* implicit */short) var_10);
                    var_25 = ((/* implicit */unsigned short) max((var_25), (max((((/* implicit */unsigned short) min((((/* implicit */short) var_10)), (var_7)))), (max((var_2), (((/* implicit */unsigned short) var_5))))))));
                }
                for (unsigned int i_4 = 3; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (min((var_11), (((/* implicit */int) var_17))))));
                    var_27 = ((/* implicit */short) var_12);
                    var_28 = ((/* implicit */unsigned short) min((max((var_12), (((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_0))))));
                    var_29 = ((/* implicit */signed char) var_10);
                    var_30 = ((/* implicit */unsigned int) min((((/* implicit */int) max((var_7), (((/* implicit */short) var_10))))), (var_16)));
                }
                for (unsigned int i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */short) var_15);
                    var_32 = ((/* implicit */signed char) var_16);
                    var_33 |= ((/* implicit */unsigned int) var_11);
                }
            }
            var_34 = ((/* implicit */int) max((((/* implicit */short) min((var_10), (((/* implicit */unsigned char) var_15))))), (var_4)));
            var_35 = ((/* implicit */unsigned short) var_12);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_36 = max((((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned char) var_9))))), (var_14));
            var_37 |= ((/* implicit */unsigned char) var_13);
            var_38 = ((/* implicit */signed char) var_0);
            var_39 = ((/* implicit */short) max((((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_10))))), (min((var_1), (((/* implicit */unsigned int) var_15))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned int) var_12);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 1) 
            {
                for (int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    {
                        var_41 = ((/* implicit */long long int) min((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_4)), (max((((/* implicit */unsigned short) var_6)), (var_0))))))));
                        var_42 = ((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max((((/* implicit */short) var_15)), (var_7))))));
                        var_43 = ((/* implicit */short) var_2);
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) max((max((-1LL), (-7LL))), (((/* implicit */long long int) var_16)))))));
        }
        var_45 = min((min((240977926U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_18)));
    }
    var_46 = ((/* implicit */int) min((var_46), (min((((/* implicit */int) var_8)), (min((((/* implicit */int) var_0)), (var_11)))))));
    var_47 &= ((/* implicit */long long int) max((var_16), (((/* implicit */int) var_18))));
}
