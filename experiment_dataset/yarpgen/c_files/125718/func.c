/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125718
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
    var_10 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)5274)) ? (((/* implicit */int) (short)5274)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((((/* implicit */_Bool) (short)-18344)) ? (((/* implicit */int) (short)-9408)) : (((/* implicit */int) (signed char)56))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 *= ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)57328)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) var_3)))) > (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (var_1)))))) << (((4611686018427387904LL) - (4611686018427387898LL)))));
                var_12 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) (short)9408)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))) / (((/* implicit */long long int) (~(((/* implicit */int) (short)18344))))))), (((/* implicit */long long int) var_1))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                            {
                                var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4535043939612813432LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (short)4304);
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                            {
                                arr_17 [i_1] [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((var_5) ^ (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                                var_15 *= ((/* implicit */short) (unsigned short)4168);
                            }
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? ((((~(((/* implicit */int) var_4)))) / ((-(-536870912))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) >= (458752U))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */short) var_3);
    var_17 = ((/* implicit */short) (~(((var_9) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)32757)), (2317141073U)))) : (((((/* implicit */_Bool) (unsigned short)20944)) ? (((/* implicit */unsigned long long int) 1472148751)) : (var_2)))))));
}
