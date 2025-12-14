/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187965
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
    var_18 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) var_10);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((var_17) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */int) 7198984003940739454ULL);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((int) 7198984003940739454ULL)))));
        arr_2 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [(unsigned short)10] [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (((~(0ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)239), ((unsigned char)17)))))))));
        var_23 = ((/* implicit */_Bool) max((min((((/* implicit */int) arr_4 [i_1])), ((~(((/* implicit */int) var_16)))))), (((/* implicit */int) max((((/* implicit */short) max((arr_3 [i_1] [i_1]), (((/* implicit */signed char) (_Bool)0))))), (var_1))))));
    }
    var_24 += ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            {
                var_25 = ((/* implicit */_Bool) (+(max((arr_1 [i_3] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_3]))))));
                arr_12 [i_3] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_16 [(_Bool)1]))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11247760069768812162ULL), (((/* implicit */unsigned long long int) (unsigned char)7))))) ? (((/* implicit */int) min((arr_14 [i_4] [(signed char)14]), (((/* implicit */signed char) arr_16 [4]))))) : (((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) | ((+(var_8))))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_23 [i_4] [i_4] = ((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */_Bool) 7198984003940739454ULL)) && (((/* implicit */_Bool) arr_21 [i_4])))))));
                    var_28 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_11), (var_11))))))), (((((_Bool) arr_17 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_5]))) : (arr_15 [i_5])))));
                    var_29 ^= ((/* implicit */_Bool) arr_22 [i_4 - 1] [i_4 - 1] [i_4] [i_4]);
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_4] [i_5] [i_6]))))), (((short) (unsigned char)7))))) || (((/* implicit */_Bool) arr_13 [i_4 + 3] [i_4]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_7])) && (arr_16 [i_7])));
        arr_27 [i_7] = ((/* implicit */unsigned int) (_Bool)1);
    }
}
