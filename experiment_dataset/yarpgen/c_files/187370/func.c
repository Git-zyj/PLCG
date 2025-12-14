/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187370
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
    var_14 &= ((/* implicit */unsigned short) ((685416839) << (((max((var_13), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)45855))))) - (9566716421127621319ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((685416839) ^ (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */long long int) -685416840)) : (8036456242447667271LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_1 [i_0 + 2] [i_0])))))));
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((1929353603192117951ULL), (var_3))))));
                var_16 = ((/* implicit */unsigned int) var_6);
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(((((/* implicit */int) (unsigned short)3)) >> (((190519162) - (190519152)))))))));
                    arr_10 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (2147483639) : (58720256)));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_12)) ? (685416839) : (((/* implicit */int) (short)(-32767 - 1))))) : (190519162))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_18 = ((((/* implicit */_Bool) -1327595686744021662LL)) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)1])) ? (((/* implicit */unsigned long long int) -58720256)) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48826))));
                    var_19 = ((/* implicit */short) (unsigned short)39722);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_0 + 1] [(_Bool)1] [i_1]))) : (var_0)));
                                arr_17 [i_0] [13U] [(short)7] [(short)7] [(short)0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (1327595686744021675LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49157))))));
                                var_21 += ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_5] [i_0] [i_0] [i_0 + 1] [i_0] [12U] [i_0 + 1]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_20 [i_0 + 1] [i_0 + 1] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 2])) > (((/* implicit */int) (short)-27733))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_25 [(short)15] [(unsigned short)11] [(short)15] [17ULL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (9223372036854775807LL)));
                                arr_26 [i_0 - 1] [(short)6] [i_0] [i_0] = ((((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (unsigned short)17769)) : (-58720257))) | (((/* implicit */int) (unsigned short)25807)));
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-24209))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(signed char)20]))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_0 + 1]))) / (1332579249U)))));
                }
                for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8557902879701736783ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16586))) : (2962388031U)));
                    var_25 = (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (short)19742))))));
                    arr_30 [i_0] [i_0] [(unsigned char)10] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -58720253)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39722)))))) ? (((((/* implicit */_Bool) 1327595686744021669LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (var_6))) : (min((var_2), (((/* implicit */long long int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((651895812) > (((/* implicit */int) var_5)))))) : ((-(var_3)))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) max((var_26), (var_6)));
}
