/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108747
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((var_15) > (((/* implicit */unsigned long long int) var_4))))) / (max((((((/* implicit */int) var_6)) | (((/* implicit */int) var_16)))), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) var_5);
                        var_19 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((var_15) != (((/* implicit */unsigned long long int) var_14))))))), (((/* implicit */int) ((unsigned char) ((long long int) var_10))))));
                    }
                    var_20 = ((/* implicit */_Bool) var_13);
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_9);
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) var_3)) & (((/* implicit */int) var_6)))) % (((/* implicit */int) arr_10 [i_0] [i_2])))));
                        var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_12)) >> (((/* implicit */int) ((var_2) > (var_15)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) ^ (max((var_4), (((/* implicit */unsigned int) arr_9 [i_5] [(_Bool)1] [i_1] [i_0]))))));
                        var_22 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_14 [i_5] [16U] [16U] [i_0]) : (var_15))), (max((min((((/* implicit */unsigned long long int) var_5)), (var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_23 |= var_3;
                        arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_6]);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_2)))), (var_14)))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (long long int i_9 = 3; i_9 < 18; i_9 += 3) 
            {
                {
                    arr_33 [i_8] [(short)16] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_3 [i_9 - 1] [i_9 - 1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) var_2);
                        arr_38 [i_10] [i_8] [i_9 - 3] [i_9 - 3] = max((min((((/* implicit */long long int) min((var_9), (var_6)))), (arr_20 [i_8] [i_10]))), (((/* implicit */long long int) ((signed char) arr_9 [i_9 + 1] [i_9] [i_9 - 3] [i_9 - 3]))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (short)32767))))) ? (max((var_15), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_9 - 1] [i_9 - 2])) | (((/* implicit */int) max((((/* implicit */short) var_5)), (var_8))))))))))));
                    }
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((short) ((var_14) > (arr_26 [i_7])))))));
                    var_28 = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))) : (var_2))), (((((/* implicit */_Bool) var_8)) ? (13867430327838774125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) var_13))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((unsigned int) (+(var_14))))));
}
