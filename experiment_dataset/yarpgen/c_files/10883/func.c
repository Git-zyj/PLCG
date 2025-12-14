/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10883
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_7);
                arr_5 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [0U]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                            arr_13 [i_0] [i_0] = var_17;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_4]))))) ? ((((~(((/* implicit */int) arr_2 [(unsigned char)2])))) | (((((/* implicit */_Bool) arr_2 [(unsigned char)10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_5])))))) : (((/* implicit */int) var_11))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 4; i_6 < 14; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_30 [i_6] [i_6] [i_8] [i_7] [i_8] [i_8] = 0LL;
                                arr_31 [i_8] [(unsigned char)13] [i_4] [i_4] [i_8] = max((((var_1) + (var_2))), (((((-7476819696409989047LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)57)) - (56))))));
                                var_19 += ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) (unsigned char)199)), (4194303U)))));
                                var_20 = ((/* implicit */short) max((min((var_0), (var_12))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */long long int) (unsigned char)49)), (6167136369536988840LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_12)))) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) 72237967)) : (var_12)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(-1345394167)))))) ? (((/* implicit */unsigned long long int) var_16)) : (0ULL)));
    var_23 *= ((/* implicit */_Bool) var_5);
}
