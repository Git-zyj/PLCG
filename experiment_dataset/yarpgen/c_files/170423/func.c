/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170423
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2)) == (((/* implicit */int) (unsigned short)6))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)10877)))) >= (((/* implicit */int) ((_Bool) arr_0 [i_0])))))) : (((/* implicit */int) var_3))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_14 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0])) + (132))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6))))))))) : (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1])) + (2147483647))) >> (((((((/* implicit */int) arr_2 [i_0])) + (132))) - (54))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) max((2370354625391950336LL), (((/* implicit */long long int) (short)-27607))));
            var_15 = ((/* implicit */unsigned char) max(((+(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 - 1] [8LL] [(signed char)13])) >= (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_1])))))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (707692965)));
            var_16 = max((((/* implicit */int) ((unsigned short) 4294967295U))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)10893)) : (((/* implicit */int) (unsigned short)65517)))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >= ((~(((/* implicit */int) arr_3 [i_0]))))));
            var_18 = ((arr_8 [(short)7] [i_0] [i_0 - 1]) >= (((long long int) (+(((/* implicit */int) (signed char)-88))))));
            arr_12 [i_0] [i_0] = var_7;
        }
    }
    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 2) 
    {
        arr_16 [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) var_11)), (arr_13 [i_3] [i_3 - 3]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_21 [1LL] = ((/* implicit */signed char) (~(arr_1 [i_3] [i_3])));
            var_19 = ((/* implicit */short) arr_5 [i_3] [i_4] [i_4]);
        }
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(unsigned short)18] [i_3]))))) ? (((15748040023721734645ULL) >> (((/* implicit */int) arr_15 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), (((unsigned short) var_11))))))));
        arr_22 [(signed char)11] = ((/* implicit */short) ((var_2) > (((/* implicit */unsigned long long int) arr_1 [i_3 + 1] [i_3]))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned short) (~(-3873640076309392508LL)));
        var_21 = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
    }
    var_22 = ((/* implicit */unsigned long long int) var_7);
    var_23 = ((/* implicit */_Bool) var_4);
}
