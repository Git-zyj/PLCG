/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154848
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_20 = ((((/* implicit */int) (unsigned char)229)) >> (((((/* implicit */int) (unsigned short)7479)) - (7451))));
                            arr_14 [i_1] [i_1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (unsigned short)58069);
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39166)) ? (((/* implicit */long long int) 3674945835U)) : (8773580511139922449LL)));
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)47321))));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (_Bool)1)))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_18))));
                        }
                        var_22 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_3] [i_2] [i_3] [(signed char)18]);
                    }
                    var_23 = ((/* implicit */unsigned long long int) (+(3329257150U)));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(arr_3 [i_1] [(signed char)4]))))));
                    var_25 = ((/* implicit */short) ((arr_12 [i_0] [(signed char)10] [i_0] [i_1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
                var_26 = ((/* implicit */short) ((3511731097U) + (((/* implicit */unsigned int) -1000160391))));
            }
        } 
    } 
    var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (signed char)-89))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))));
    var_28 = 0ULL;
    var_29 &= ((/* implicit */unsigned char) max((max((max((((/* implicit */long long int) var_15)), (0LL))), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) ((_Bool) ((short) 527975708U))))));
}
