/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170430
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
    var_10 = ((/* implicit */short) (unsigned short)50219);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)12)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned short)56933)))) : (((/* implicit */int) (unsigned short)11))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [8U] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned short)19979);
                                var_12 += ((/* implicit */unsigned long long int) 15U);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((int) ((unsigned char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */long long int) 5U)) : (-7662452197330815634LL)))));
                    arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 895447239)) ? (3066995024U) : (15U)))) ? (((((/* implicit */_Bool) 2146435072)) ? (((((/* implicit */_Bool) 895447255)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (895447239)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(-895447232))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (short)32761)) : ((-2147483647 - 1)))))));
                                var_14 = ((/* implicit */_Bool) (short)(-32767 - 1));
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 3622421534U)) ? (((((/* implicit */_Bool) (unsigned short)255)) ? (4294967281U) : (((/* implicit */unsigned int) 895447216)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))))))));
                                arr_25 [i_1] [i_2] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) 3066995011U)) ? (1630815664U) : (8176U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
        var_16 = ((/* implicit */unsigned short) (+((~(8189U)))));
    }
}
