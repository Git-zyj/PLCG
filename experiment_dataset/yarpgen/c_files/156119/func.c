/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156119
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((max((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), (3966917853407686373LL))), (1LL))))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((3450997038U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) : (((((((/* implicit */_Bool) 0ULL)) ? (4132490203841041154ULL) : (11605241859989649922ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) 9223372036854775807LL);
                                var_17 = max(((signed char)-98), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)140))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((~(1354205346605931474LL))) | (((/* implicit */long long int) var_8)))))));
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 2010530196)) ? (11605241859989649922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 2)) >= (var_6)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2))))), ((~(var_15)))))), ((+(max((((/* implicit */unsigned long long int) 400062970U)), (14500891206349171957ULL)))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 2847973942U)), (576460477425516544ULL)))))) ? ((+((+(((/* implicit */int) (unsigned char)247)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) / (((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) (signed char)98))))))))));
                    var_23 = ((/* implicit */signed char) (unsigned char)56);
                    arr_23 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) min((((((-7255846489804463986LL) > (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (6841502213719901694ULL))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)246))))) | ((~(18446744073709551615ULL)))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 6841502213719901722ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 635036256))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) <= (11605241859989649922ULL)))))))));
                    arr_24 [i_5] [i_6] [i_7] = min((-1161361495130179351LL), (((/* implicit */long long int) 0)));
                }
            } 
        } 
    } 
}
