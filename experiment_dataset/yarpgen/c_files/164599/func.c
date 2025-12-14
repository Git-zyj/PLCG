/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164599
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0]));
        var_18 = ((/* implicit */long long int) ((8191U) | (((/* implicit */unsigned int) -1871772280))));
    }
    for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 2])) ? (var_4) : (arr_6 [i_1 - 2] [i_1 - 1]))) : (((/* implicit */int) (((((_Bool)1) ? (arr_6 [(unsigned short)2] [(unsigned short)2]) : (((/* implicit */int) (unsigned short)32799)))) < (min((((/* implicit */int) (_Bool)0)), (arr_6 [i_1] [i_1 - 1]))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) 0LL)), (var_16))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(unsigned short)1] [(unsigned short)1])) ? (var_16) : (((/* implicit */unsigned long long int) arr_7 [i_1])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
                    arr_12 [(unsigned short)12] [i_2] [(unsigned short)12] = ((/* implicit */unsigned char) ((short) ((unsigned short) ((short) 16185720263603978673ULL))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (16752495277314220707ULL))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (unsigned short i_5 = 4; i_5 < 9; i_5 += 1) 
        {
            {
                arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4] [i_5 - 1])) - (((/* implicit */int) arr_4 [i_4] [i_4]))))) < ((((!(var_0))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (var_1))))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 3; i_6 < 9; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_16)) ? (var_2) : (-1LL))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(_Bool)1] [(short)4] [(short)4] [i_6 - 1]))))) << (((/* implicit */int) (!(arr_1 [i_4]))))));
                    arr_23 [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_5 - 4])) ? ((~(((/* implicit */int) (short)32767)))) : (arr_21 [4LL] [i_6] [i_6 - 1])))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_4] [(short)8] [i_7] [i_7] = ((/* implicit */int) min((var_2), (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (var_7)))))))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_22 [i_5 - 2] [(signed char)2] [i_7 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((2147483647) < (((/* implicit */int) (_Bool)1)))))))))));
                    arr_27 [i_4] [i_4] = ((/* implicit */long long int) 4294967295U);
                }
            }
        } 
    } 
}
