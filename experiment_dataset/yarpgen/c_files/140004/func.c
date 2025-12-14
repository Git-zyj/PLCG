/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140004
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (_Bool)1))))), (var_5)))) ? (min((var_9), (((/* implicit */long long int) (+(3856265635U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (-(((long long int) arr_5 [i_4 - 1] [i_1] [i_2 - 1]))));
                                var_15 = ((/* implicit */unsigned short) var_2);
                                var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(var_9)))) != (var_1)));
                                var_17 = ((((/* implicit */_Bool) min((var_10), (max((((/* implicit */unsigned long long int) var_5)), (var_10)))))) || (((/* implicit */_Bool) arr_9 [i_2 - 1] [i_4] [i_1] [(short)1] [i_4] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [(unsigned short)12] [(_Bool)1] [(_Bool)1] [11ULL] [(_Bool)1]))));
                                var_19 ^= ((/* implicit */short) (_Bool)1);
                                var_20 *= ((/* implicit */unsigned int) (((((_Bool)1) || ((!(((/* implicit */_Bool) (short)-11210)))))) || ((!(max(((_Bool)1), (var_11)))))));
                                var_21 = ((/* implicit */_Bool) arr_1 [(short)2]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((long long int) arr_16 [(short)5] [i_1] [(unsigned char)2] [5ULL])))) ? (var_10) : (arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
}
