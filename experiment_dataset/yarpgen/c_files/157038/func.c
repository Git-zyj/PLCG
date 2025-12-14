/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157038
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_1))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) >> (((arr_2 [i_0] [i_0] [i_0]) - (321705883U)))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [0]);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_10 [4U] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((var_6) <= (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) 126086688562913704LL)))))));
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) var_3);
            }
            for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                var_11 = var_7;
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_4] [i_0] [i_3 + 1] [i_4 + 1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 126086688562913704LL)) ? (((/* implicit */int) (short)17559)) : (((/* implicit */int) (signed char)31))));
                        var_12 = ((/* implicit */unsigned int) 126086688562913694LL);
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_13 = ((/* implicit */short) ((((var_9) << (((var_0) - (7719656036803189689LL))))) % (((/* implicit */int) var_8))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) 4294967295LL))) % (((var_5) | (((/* implicit */long long int) 631010434U))))));
                    }
                    arr_24 [i_4] [i_4] = var_8;
                }
                arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_9))) && (((/* implicit */_Bool) var_7))));
            }
            for (int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4533307578374325859ULL)) ? (((/* implicit */long long int) -276932961)) : (arr_18 [i_0] [i_0] [i_1] [i_1] [i_7])));
                arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_7] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_7]))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29987)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (126086688562913672LL))))));
            }
        }
    }
    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
    {
        arr_35 [i_8] = ((/* implicit */unsigned int) var_6);
        var_17 = ((/* implicit */unsigned short) 662587553U);
        var_18 ^= ((/* implicit */int) var_4);
        var_19 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 1]))));
    }
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_20 *= ((/* implicit */unsigned int) var_3);
        arr_39 [i_9] = ((/* implicit */_Bool) arr_37 [i_9]);
        arr_40 [i_9] = ((/* implicit */unsigned short) (short)4795);
    }
    var_21 = ((/* implicit */unsigned short) var_5);
    var_22 |= ((/* implicit */_Bool) (short)29424);
    var_23 = ((/* implicit */long long int) max((((((_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4810)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)128))))) : ((-(var_1))))), (((/* implicit */unsigned int) var_2))));
    var_24 = var_9;
}
