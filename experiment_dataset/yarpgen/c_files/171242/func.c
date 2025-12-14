/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171242
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
    var_14 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((int) (_Bool)1)) & (((-1434696652) + (1434696663)))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1434696687)))))) : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_2 + 2] [i_1] [i_1])) != (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_2 + 2] [i_2])))))));
                    var_16 = ((/* implicit */short) var_1);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), ((+((~(arr_1 [i_0] [i_1])))))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)33))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(-1434696644))))));
                            arr_16 [i_0] [i_1] [i_0] [i_3 + 4] [i_4] = ((/* implicit */signed char) min((-1395606908), (((/* implicit */int) (short)-4660))));
                        }
                        arr_17 [i_2] [i_0] = 1946938894109533640LL;
                        arr_18 [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 1])))) - (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 2]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_23 [i_1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_2 - 1] [i_5] [i_5]);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (arr_2 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (arr_2 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) && ((!(((/* implicit */_Bool) 2080350455U))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_32 [i_8] = ((/* implicit */_Bool) (~((-(arr_26 [i_6 + 1] [i_6 + 1])))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (signed char)127))));
                    arr_33 [i_8] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) (-(arr_31 [i_6 + 1] [(signed char)20] [(unsigned short)2] [(signed char)12])));
    }
    for (unsigned short i_9 = 2; i_9 < 12; i_9 += 3) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_28 [i_9 + 4] [i_9] [i_9 + 2]))));
        var_25 = ((/* implicit */unsigned short) max((arr_36 [i_9]), (min((arr_36 [i_9 + 2]), (((/* implicit */unsigned int) var_4))))));
        arr_37 [(unsigned short)6] = ((/* implicit */short) ((((((((/* implicit */int) (short)-32747)) + (2147483647))) >> (((((/* implicit */int) (short)30866)) - (30846))))) >= ((((-(var_1))) / (((/* implicit */int) (short)-823))))));
    }
    for (long long int i_10 = 2; i_10 < 22; i_10 += 2) 
    {
        var_26 = ((/* implicit */int) ((signed char) (unsigned short)0));
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 21; i_11 += 4) 
        {
            for (int i_12 = 2; i_12 < 22; i_12 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (signed char)127))));
                    var_28 -= max((((/* implicit */long long int) ((((/* implicit */int) ((arr_38 [i_10 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10 - 1])))))) - (((/* implicit */int) var_2))))), (min((((/* implicit */long long int) (_Bool)0)), (((-4481467863271352661LL) / (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10]))))))));
                    var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) 0)))));
                    arr_46 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1434696669)) ? (var_1) : (((/* implicit */int) ((arr_38 [(unsigned char)22]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) ? (((((((/* implicit */_Bool) (short)30866)) ? (((/* implicit */int) (short)-809)) : (((/* implicit */int) arr_41 [i_10 - 2] [i_12] [i_12 + 1])))) / (((((/* implicit */_Bool) 1434696669)) ? (var_1) : (((/* implicit */int) (short)6)))))) : ((~(((/* implicit */int) ((signed char) var_13)))))));
                }
            } 
        } 
    }
    var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24183)) ? ((~(((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) min((((var_1) != (((/* implicit */int) (signed char)127)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned char)255)))))))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        for (short i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            {
                var_31 = ((/* implicit */unsigned short) arr_30 [i_13] [i_14] [i_13]);
                var_32 = ((/* implicit */long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_13] [11] [i_14]))))), (((((/* implicit */_Bool) 7372848486667943408ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) arr_27 [i_13]))));
                arr_53 [i_13] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((1434696669) / (((/* implicit */int) var_5))))) ? ((+(2076827882))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)234)), ((unsigned short)31301)))))));
                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-71))));
            }
        } 
    } 
}
