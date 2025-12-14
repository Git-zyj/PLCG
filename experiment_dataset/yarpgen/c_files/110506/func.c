/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110506
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = (+(((var_8) % (((/* implicit */unsigned int) var_0)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)56520);
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [1LL]))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) -8794882167011960025LL)) || (((/* implicit */_Bool) -8794882167011960016LL))));
                }
                for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (unsigned short)9015))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((arr_3 [i_3 - 2] [i_3 - 1] [i_3 + 2]) - (3928357929U)))))) : (((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (arr_3 [i_3 + 2] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9015)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_16 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_15 [i_5] [i_0] [i_0] [i_3 - 1])) / (arr_14 [i_5] [i_5] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1])));
                            arr_16 [i_3 + 3] [i_4] [i_3 + 3] [i_4] [i_0] = ((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_1] [(unsigned short)0])) ? (((/* implicit */long long int) arr_9 [i_3 - 1] [i_0] [i_0])) : (8794882167011960026LL));
                            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((var_8) | (((/* implicit */unsigned int) arr_2 [4LL] [i_0]))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_4] [i_4]);
                            arr_21 [i_6] [i_4] [i_3] [i_3 + 1] [7ULL] [i_4] [i_0] = ((/* implicit */unsigned long long int) max((8794882167011960010LL), (-8794882167011960026LL)));
                            var_18 = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_3])) ? (var_9) : (((/* implicit */int) (unsigned short)9016))))), ((-(var_12))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-32763)) ? (-8794882167011960026LL) : (((/* implicit */long long int) -669185980)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_4] [i_4] [3ULL] [i_1] [i_1] [i_0])))))))));
                        }
                        arr_22 [i_4] [(_Bool)1] [i_4] = ((/* implicit */long long int) arr_11 [i_4] [i_4] [i_1] [i_4] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_1] [i_3 - 2] [i_0] [12U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (-8794882167011960041LL)));
                        arr_26 [i_0] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~(-8794882167011960046LL))) : (((/* implicit */long long int) arr_19 [i_7] [i_7] [i_0] [i_0] [i_3 + 2] [(short)6]))));
                        var_19 = ((/* implicit */short) 279954094U);
                        var_20 += ((/* implicit */unsigned int) (+(arr_10 [i_7 + 2] [i_3 + 2])));
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)56524)), (arr_11 [2U] [i_0] [i_1] [i_0] [i_0])))) ? (8794882167011960025LL) : (max((8794882167011960007LL), (2270857305202079885LL)))))) ? (arr_1 [13ULL] [0]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_22 = ((/* implicit */signed char) var_2);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)49164)))) >= (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (2147483647)))) ? (((/* implicit */int) var_5)) : (-198358648)))));
    var_24 = ((/* implicit */int) var_11);
}
