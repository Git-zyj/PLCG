/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100122
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
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (-(1836903828)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0 + 2] [i_1] [15]));
                var_21 += ((/* implicit */_Bool) var_14);
                var_22 = ((/* implicit */unsigned long long int) ((((int) var_4)) * (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned short i_3 = 4; i_3 < 13; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((min((arr_2 [i_3 - 1] [i_2] [i_4 - 1]), (((/* implicit */long long int) 1532983056)))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_3 - 1] [i_3]))))));
                            var_24 = ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) || (((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)41017))))))) >= (((((/* implicit */int) var_0)) - (((/* implicit */int) var_12)))));
                            arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) max(((short)30720), ((short)30720)));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) min((max((((((/* implicit */long long int) -236325472)) & (6735895717444926199LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)202))))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3]))))))));
                var_25 -= ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) ((unsigned char) arr_17 [i_2] [i_3] [i_2] [i_3]))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3])) ? (((/* implicit */int) (short)-30720)) : (((/* implicit */int) var_17)))) * ((-(((/* implicit */int) arr_4 [i_2]))))))) ? (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_1 [i_2])))) * (((/* implicit */int) ((short) var_2))))) : (((/* implicit */int) (unsigned short)20232))));
            }
        } 
    } 
}
