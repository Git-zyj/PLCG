/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175305
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
    var_16 = ((/* implicit */signed char) ((var_10) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31342)) ? (((/* implicit */int) (short)-31348)) : (((/* implicit */int) (short)-31339))))), (var_15))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)106))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min(((unsigned char)109), (((/* implicit */unsigned char) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_17 = ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_6)))))) % (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min(((short)-31342), (((/* implicit */short) (unsigned char)106))))))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129)))))) && (((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_18 = ((/* implicit */_Bool) var_1);
            arr_13 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)31362)) ? (0ULL) : (20ULL)));
            arr_14 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_3))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_20 [i_4] = ((/* implicit */long long int) (short)-31341);
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    {
                        arr_25 [i_4] [i_4] [i_4] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)236)) || (((/* implicit */_Bool) (unsigned char)2))));
                        var_19 = ((/* implicit */long long int) var_5);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((signed char) (unsigned char)127)))));
                            var_21 = (-(((((/* implicit */_Bool) var_9)) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22484))))));
                            arr_30 [i_4] [i_5] [16LL] [i_7] [i_8] = ((/* implicit */unsigned int) ((((int) (short)31331)) >> (((((/* implicit */int) (signed char)-61)) + (80)))));
                            var_22 += (!(((/* implicit */_Bool) (signed char)-126)));
                        }
                        var_23 += ((/* implicit */unsigned long long int) var_6);
                        arr_31 [i_4] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned char)2)))), (min((((/* implicit */int) arr_2 [i_6])), (min((-1), (((/* implicit */int) arr_23 [i_4] [i_5] [i_6] [i_4] [i_6] [i_6]))))))));
                    }
                } 
            } 
            arr_32 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((1) < ((~(((/* implicit */int) (unsigned char)106))))));
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)-75), (((/* implicit */signed char) (_Bool)1))))))))));
    }
}
