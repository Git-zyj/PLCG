/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131827
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
    var_18 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((unsigned int) min((arr_4 [i_0 - 1] [i_0 + 3]), (arr_4 [i_0] [i_0 + 3])));
                    arr_7 [i_1] [i_1] [i_2] = var_7;
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */int) arr_2 [i_0 - 1] [i_1]);
                        var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0])), (max((288230376151711743ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0 + 3] [i_0])))))) >> (((arr_4 [i_0 + 3] [i_0 + 2]) + (1073186163)))));
                    }
                    arr_12 [4LL] [i_0] [i_1] = ((/* implicit */signed char) 288230376151711743ULL);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) var_0);
        arr_16 [(unsigned short)2] = ((/* implicit */short) ((288230376151711750ULL) > (((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) var_3)))) + (184))))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            var_21 = ((/* implicit */int) var_1);
            arr_19 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (288230376151711750ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) | (max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3)))), (var_12)))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (18158513697557839872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */unsigned long long int) var_10)) < (288230376151711743ULL))) ? (((/* implicit */int) (unsigned char)117)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)2601)) : (((/* implicit */int) arr_22 [i_6] [i_6])))))) : (((/* implicit */int) max((min((((/* implicit */short) var_8)), (var_4))), (((/* implicit */short) ((unsigned char) arr_4 [i_7] [i_7]))))))));
                    var_23 = ((/* implicit */signed char) var_12);
                    arr_27 [i_6] [(short)9] [(short)9] [i_6] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_8))))), (max((18158513697557839877ULL), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) (~(((1576978852) & (((/* implicit */int) (signed char)24)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((long long int) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_23 [i_6] [i_6] [(_Bool)1])))));
        var_25 = ((short) ((unsigned short) min((arr_2 [i_6] [i_6]), (arr_23 [4U] [i_6] [i_6]))));
        var_26 = ((((/* implicit */_Bool) (unsigned char)184)) && (((/* implicit */_Bool) var_4)));
        var_27 = ((/* implicit */long long int) ((unsigned long long int) ((short) var_3)));
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        arr_31 [i_9] = ((/* implicit */short) max(((+(807585435340746057ULL))), (((/* implicit */unsigned long long int) arr_3 [i_9]))));
        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) var_15))), (max((((long long int) (unsigned char)153)), (((/* implicit */long long int) arr_1 [i_9]))))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 2; i_10 < 11; i_10 += 3) 
        {
            var_29 = ((max((((/* implicit */unsigned int) arr_4 [i_9] [i_9])), (((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_10] [i_9] [i_10] [i_9])) ? (760375793U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((_Bool) arr_33 [i_9] [i_9]))))));
            arr_34 [i_10] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)79))));
        }
    }
}
