/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171904
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
    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 31)))))) : (max((((/* implicit */unsigned long long int) var_14)), (var_15)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(var_12))))) ? (((/* implicit */unsigned long long int) var_13)) : (var_16)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) != (min((((/* implicit */unsigned long long int) var_3)), (var_15))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)14] [i_0] [i_0]))) : (((((((/* implicit */_Bool) var_3)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) 0U))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_12 [i_0] [i_0] [i_0] = var_3;
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_17 [(unsigned char)0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_9)));
                        arr_18 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */int) ((_Bool) (_Bool)1));
                    }
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_19 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))));
                        /* LoopSeq 1 */
                        for (short i_5 = 3; i_5 < 19; i_5 += 3) 
                        {
                            var_20 *= ((/* implicit */unsigned char) ((short) 6801778384146371316LL));
                            arr_24 [i_0] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 2147483647)) : (-6481649041608662140LL)));
                        }
                    }
                    arr_25 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8166393272442809656ULL)) ? (((/* implicit */int) ((-2147483647) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned long long int) (~(var_3)));
                                arr_32 [i_0] = ((int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_9)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (int i_10 = 2; i_10 < 19; i_10 += 3) 
            {
                {
                    arr_40 [i_8] [i_10] = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) var_6)) : (604501896))) <= (((/* implicit */int) arr_4 [i_10] [i_9] [i_10 + 1])))) || (((/* implicit */_Bool) arr_35 [i_8]))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((unsigned long long int) var_6))))), (((((/* implicit */_Bool) arr_36 [i_8] [i_8])) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (-9223372036854775807LL)))))))))));
                }
            } 
        } 
    } 
}
