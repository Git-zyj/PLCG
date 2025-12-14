/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122802
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) : (((int) arr_1 [i_0]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            var_16 *= (+(8304193380674514547ULL));
                            var_17 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_12 [i_3] [i_4 - 3] [i_4 - 3] [i_3])) : (var_2));
                        }
                        var_18 = ((/* implicit */unsigned long long int) var_7);
                        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_0]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_21 -= ((short) arr_14 [i_0] [i_1] [i_6 + 3] [i_5] [i_1]);
                            var_22 = ((/* implicit */int) arr_3 [i_5] [i_1]);
                        }
                        for (int i_7 = 4; i_7 < 19; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3533738716U)));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_10 [i_0]))));
                            var_25 = ((/* implicit */_Bool) arr_2 [i_1]);
                        }
                    }
                    arr_21 [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (short)7578))))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) -10LL)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                }
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (221617561503931919LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))));
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11285849505286386626ULL)) ? (((/* implicit */unsigned long long int) (-(arr_19 [i_0] [i_0] [i_0] [i_8])))) : ((-(arr_8 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_29 = ((/* implicit */long long int) (~(((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 221617561503931907LL)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)40))));
                    var_31 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)40))));
                }
                var_32 = ((/* implicit */int) 9007164895002624ULL);
                var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (2305702271725338624ULL) : ((+(max((((/* implicit */unsigned long long int) -1317342654)), (var_9)))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    var_35 = ((/* implicit */unsigned long long int) (unsigned char)98);
    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_12)))));
}
