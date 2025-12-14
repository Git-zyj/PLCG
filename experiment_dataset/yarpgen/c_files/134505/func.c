/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134505
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_3 [i_1] [14LL]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_18))));
            var_19 = ((/* implicit */long long int) arr_0 [i_1]);
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_17)) ^ ((~(10091579777503217234ULL)))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_21 = arr_8 [i_0] [i_1] [i_2] [(_Bool)1];
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_22 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) == (((/* implicit */int) var_0)))))));
                    var_23 |= ((/* implicit */short) ((16146535917877828384ULL) >= (((/* implicit */unsigned long long int) 144044819331678208LL))));
                    var_24 = ((/* implicit */int) ((unsigned int) arr_12 [i_0] [i_1] [i_2] [i_3]));
                    arr_13 [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                }
                arr_14 [i_2] [i_2] = (((_Bool)1) ? (7U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (_Bool)1))))));
                arr_15 [i_0] [i_1] [i_2] [i_2] = arr_11 [(unsigned short)9] [(unsigned short)9] [i_1] [i_2] [i_2];
            }
        }
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) -1LL)), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) -1847177938))))) || (((/* implicit */_Bool) 144044819331678208LL))));
            var_26 = ((/* implicit */short) arr_1 [i_0]);
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            var_27 = ((/* implicit */signed char) ((int) ((int) arr_19 [i_0])));
            arr_21 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)123)))) ^ (((/* implicit */int) (signed char)-121))));
            var_28 = ((/* implicit */unsigned char) var_18);
            /* LoopNest 2 */
            for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    {
                        var_29 ^= ((/* implicit */signed char) (~((+(((/* implicit */int) ((_Bool) arr_18 [i_7 - 1])))))));
                        var_30 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((signed char) var_17))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_15))))) : ((~(((/* implicit */int) arr_1 [2U])))))));
                        arr_26 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_17 [i_0])) ? (-144044819331678209LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3989))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_6] [i_5] [i_0])))))), (((/* implicit */long long int) var_0))));
                        arr_27 [i_0] [i_6 + 3] [(_Bool)1] = ((/* implicit */int) var_11);
                    }
                } 
            } 
        }
        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) % (((/* implicit */int) arr_3 [i_0] [(short)10])))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(short)9])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
        arr_28 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_16 [(unsigned char)4] [(unsigned char)4]))))) ? (arr_6 [i_0] [i_0] [i_0]) : (min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])), (((int) var_17)))));
    }
    var_32 = ((/* implicit */short) var_4);
}
