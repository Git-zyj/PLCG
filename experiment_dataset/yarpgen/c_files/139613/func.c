/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139613
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
    var_12 = ((/* implicit */unsigned long long int) 0U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (arr_5 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) var_7)))) >> (((/* implicit */int) ((_Bool) (~(-2075249832)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) || (arr_1 [i_0]))) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-117)) < (((/* implicit */int) arr_4 [i_1] [i_1])))))) ^ (max((((/* implicit */unsigned long long int) 4294967295U)), (18446744073709551615ULL)))))));
                            var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+((~(((/* implicit */int) var_9))))))), ((+(((unsigned int) 388343976U))))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (var_0)));
                            arr_14 [i_0] [i_1 + 1] [i_1] = ((/* implicit */_Bool) 3906623320U);
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (11947581480149992249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0])))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 = arr_23 [i_6 + 2] [i_6 + 2] [i_6 - 1];
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_5] [i_7] [i_8]))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_7] [i_4]))) : (14001281408637423357ULL))) - (((/* implicit */unsigned long long int) (-(arr_21 [i_8] [i_6 - 1] [i_5]))))))));
                                var_18 *= ((/* implicit */_Bool) arr_23 [2U] [i_7] [2U]);
                                var_19 ^= ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (-2563722049499707319LL)))) ? (((/* implicit */unsigned long long int) arr_24 [i_4] [i_5] [i_4] [i_5] [i_5])) : ((~(arr_16 [i_5]))))), (((/* implicit */unsigned long long int) max(((+(3906623323U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5267))))))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned char) arr_18 [(_Bool)1]);
                    var_21 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_25 [i_6 + 1] [i_5] [i_4])), ((unsigned short)18779))))))));
                }
            } 
        } 
    } 
}
