/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171105
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)10071)), (min((16311149864137532582ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2039460590)), (min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))))))), (min((max((((/* implicit */unsigned long long int) 7413302729583617665LL)), (71020365119503519ULL))), (((/* implicit */unsigned long long int) -7101105164562446503LL))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-9223372036854775788LL), (((((/* implicit */_Bool) (short)13476)) ? (-8254590883920627236LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)101))))) ? (((/* implicit */unsigned long long int) min((-6LL), (((/* implicit */long long int) (_Bool)1))))) : (18446744073709551610ULL)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */int) ((18446744073709551611ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17)))));
                    arr_13 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) == (4294443008U))) && (((/* implicit */_Bool) ((9223372036854775798LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) -7746065765533684514LL)) || (((/* implicit */_Bool) -4518257856814191236LL))));
                    arr_16 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)249)) << (((((/* implicit */int) (unsigned short)55464)) - (55454))))) << (((((((((/* implicit */_Bool) (unsigned short)10071)) ? (((/* implicit */int) (short)-13475)) : (((/* implicit */int) (unsigned char)166)))) + (13493))) - (18)))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    arr_20 [i_1] [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 827758584)) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)204)))) : (((/* implicit */int) min(((unsigned short)55469), (((/* implicit */unsigned short) (short)13484)))))))), (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) -1176791499)) : (6ULL)))));
                    var_19 = ((/* implicit */signed char) min((max((((/* implicit */long long int) min(((signed char)20), ((signed char)-34)))), (262585983720168343LL))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)79)), (18446744073709551585ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)13474))))) : (min((((/* implicit */long long int) (signed char)62)), (-293128098984959489LL)))))));
                    arr_21 [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) (signed char)-121)), ((short)-23689)))), (max((max((((/* implicit */long long int) (unsigned char)22)), (-1317707338947912124LL))), (((/* implicit */long long int) (_Bool)1))))));
                }
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) max(((unsigned short)10084), (((/* implicit */unsigned short) (unsigned char)88))))), (((((/* implicit */_Bool) (short)-13475)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (9223372034707292160ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) - (max((((/* implicit */unsigned long long int) (short)-24174)), (18446744073709551610ULL))))))))));
                arr_22 [i_0] = max((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((unsigned short)65531), ((unsigned short)33528)))), (min((4294967285U), (((/* implicit */unsigned int) (unsigned char)215))))))), (max((((((/* implicit */_Bool) 7646168864622831403LL)) ? (-7646168864622831403LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13467))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9990)) : (1489173690)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-24182)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)4736)) - (4733)))))) * (((((/* implicit */_Bool) (unsigned char)17)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23680)))))))) ? (min((max((((/* implicit */unsigned long long int) (signed char)66)), (16615755405273066756ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3968)) - (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 152662281085935615LL)) ? (-5817520776853557962LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))))));
}
