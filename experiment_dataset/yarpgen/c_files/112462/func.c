/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112462
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
    var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)255)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 17; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [16U] [i_4] = (-(arr_1 [i_2]));
                            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) arr_9 [(unsigned short)16] [i_4]);
                            var_19 &= ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)217))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 4])) ? (3310947632438041278LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 4]))))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)136)) && (((/* implicit */_Bool) var_12)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned char)26)))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */long long int) -1793104418)) <= (arr_1 [i_1 - 3]))))));
                        }
                        arr_19 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_3] [i_1] [i_2] [12LL] [i_1] [i_1])) >> ((-(((((/* implicit */int) (signed char)102)) / (var_14)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 3; i_7 < 15; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 3; i_8 < 18; i_8 += 2) 
            {
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 2) 
                {
                    for (short i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_29 [i_0 - 1] [i_7] [(signed char)10] [i_9] [i_9] [i_10] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)38)) + (((/* implicit */int) arr_20 [i_0 + 4] [i_8 - 2]))));
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [14ULL] [i_9] &= ((unsigned char) arr_0 [i_0 + 3]);
                        }
                    } 
                } 
            } 
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)217));
            var_24 = ((/* implicit */int) min((var_24), ((+(((/* implicit */int) arr_16 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_7 + 2] [(signed char)11]))))));
        }
        var_25 = ((/* implicit */short) arr_5 [i_0]);
    }
    for (unsigned char i_11 = 4; i_11 < 11; i_11 += 2) 
    {
        arr_35 [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_11] [i_11])))))));
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((8565417146170682225ULL) >= (((/* implicit */unsigned long long int) var_17)))))) ^ (8533008907183111353ULL))) != (((/* implicit */unsigned long long int) ((((-1713844060) + (2147483647))) << (((arr_2 [i_11]) - (1570840564U))))))));
        var_27 &= ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)43)), (1173456832)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2047ULL)))) : (8533008907183111374ULL))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_11 - 4] [i_11 - 1] [i_11])))))));
    }
    var_28 = ((/* implicit */unsigned char) (-((-(9881326927538869382ULL)))));
}
