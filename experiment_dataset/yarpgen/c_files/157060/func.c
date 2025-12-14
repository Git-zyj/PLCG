/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157060
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (~(5ULL)))) ? (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12131783322068796068ULL)) ? (((/* implicit */int) var_5)) : (1142004577))))))));
    var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)11)) : (1173241578)))) ? ((~(((/* implicit */int) (signed char)19)))) : (((/* implicit */int) min(((unsigned short)27998), (((/* implicit */unsigned short) (signed char)-16))))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65159))) == (562949953421248LL)))) != (((/* implicit */int) (signed char)97)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) (~(((/* implicit */int) (signed char)49))));
                    arr_6 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) : (4234316186U))), (((/* implicit */unsigned int) (signed char)-11))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 1]))) & (9223372036854775784LL)))))) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(unsigned short)14] [i_4] = ((/* implicit */signed char) arr_2 [i_0] [i_3 + 1]);
                                var_14 = ((/* implicit */unsigned short) max((((unsigned long long int) (short)-13805)), (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42504)) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [8LL] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_1 [(unsigned short)11] [1ULL])) ? (5592494327705830183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))))))));
                                var_15 = ((/* implicit */unsigned long long int) (~(((long long int) max((((/* implicit */int) (_Bool)1)), (-89711947))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)8184)) - (((/* implicit */int) (short)32767))))) + (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_9 [i_0] [i_0] [i_3] [(unsigned short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-17362)))) % (((/* implicit */int) var_7))))) : (18446744073709551615ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
