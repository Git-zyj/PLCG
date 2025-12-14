/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101346
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (unsigned short)26282);
                                arr_17 [(short)23] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((signed char)108), ((signed char)-109)))) + (2147483647))) >> (((unsigned long long int) (+(0))))));
                                var_15 &= ((/* implicit */short) ((((min((((/* implicit */long long int) var_1)), (var_8))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_2 [i_3] [i_1])))))) : (((13240265051808702627ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)0))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)18827)))) % (min((8184523417155674534ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */int) ((signed char) (short)448))) : (((/* implicit */int) ((unsigned short) var_1)))));
                    var_17 = ((((/* implicit */_Bool) ((signed char) (_Bool)1))) && (((((/* implicit */_Bool) 4)) || (((/* implicit */_Bool) 3968LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((short) ((short) (signed char)108)));
                            var_19 = ((/* implicit */int) max((max((((/* implicit */unsigned int) (_Bool)1)), (536870911U))), (((/* implicit */unsigned int) max(((short)-3247), (((/* implicit */short) (_Bool)1)))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (7851105578615554921LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_1))))) ? (((((((/* implicit */_Bool) (short)-2372)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-84)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (8687219063346160071ULL)))) ? (((/* implicit */int) (signed char)108)) : (((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_6] [i_7] [i_8])) - (1)))))))));
                        }
                    } 
                } 
                var_21 = ((signed char) var_13);
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_6] [1LL] [i_5 + 3]))) ? (min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) 0U)), (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-4941))))) || (((/* implicit */_Bool) var_9))))))));
                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9842))) < (arr_8 [i_6] [i_6] [i_5 - 1] [i_5 - 1])))), (var_12))))));
                arr_27 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (-2056169380329645833LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)78)))))) : (max((((/* implicit */unsigned long long int) arr_14 [i_5 + 1] [i_5] [i_5 + 2])), (arr_8 [(short)1] [i_5] [i_5 - 1] [i_5 + 2])))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (min((((((/* implicit */_Bool) 2047903113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1296404374806761587ULL))), (((/* implicit */unsigned long long int) (short)27642))))));
    var_25 = ((/* implicit */short) min((((long long int) min((var_13), (((/* implicit */unsigned int) var_11))))), (((/* implicit */long long int) (signed char)48))));
}
