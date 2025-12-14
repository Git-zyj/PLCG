/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14596
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) var_1))));
                    arr_9 [(short)18] [0U] [0U] [(short)18] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                    arr_10 [i_0] [(signed char)10] [i_2] [i_2] = ((/* implicit */int) arr_1 [i_2]);
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ^ (((/* implicit */int) (unsigned char)243))));
                }
                arr_15 [i_0] = (signed char)-21;
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(arr_2 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) var_5))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((unsigned short) (~((-(((/* implicit */int) var_1)))))));
    var_13 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)3946)) ^ (((/* implicit */int) (unsigned char)253)))))))) + ((-(((((/* implicit */int) var_4)) + (1375753933))))));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (short)3946)), (var_4)))))) / (min((min((arr_11 [i_4] [i_4] [i_4]), (((/* implicit */long long int) (short)3923)))), (((/* implicit */long long int) arr_5 [i_4] [i_4]))))));
        arr_20 [i_4] = ((/* implicit */signed char) var_4);
        arr_21 [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) var_10));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    arr_26 [i_4] [(unsigned char)10] [10LL] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (max((((/* implicit */short) (_Bool)1)), ((short)3940))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_29 [i_4] = ((/* implicit */unsigned char) ((((unsigned int) arr_6 [i_7] [i_4] [i_4] [i_4])) * (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_30 [i_4] [i_6] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_11))))));
                    }
                    arr_31 [i_4] [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((-3707011833524925057LL), (((/* implicit */long long int) (short)-3947)))))))));
                    arr_32 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (short)31351)) + (((/* implicit */int) (signed char)(-127 - 1)))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 4; i_8 < 13; i_8 += 1) 
                    {
                        arr_36 [i_4] [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((unsigned char) var_0)))))));
                        arr_37 [(unsigned short)3] [(unsigned short)3] [i_6] [i_4] [(unsigned short)3] = ((/* implicit */unsigned long long int) (-(min((min((var_2), (((/* implicit */unsigned int) 16128)))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))))));
                        arr_38 [(signed char)2] [i_5] [(unsigned short)10] = ((/* implicit */_Bool) ((unsigned int) min((var_0), (((var_7) & (arr_2 [(short)7]))))));
                        arr_39 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                    }
                }
            } 
        } 
        arr_40 [4LL] = ((((/* implicit */int) ((short) (unsigned char)16))) - (((((/* implicit */int) (signed char)-106)) + (((/* implicit */int) (short)-3952)))));
    }
    /* LoopSeq 2 */
    for (short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_43 [i_9] = ((/* implicit */int) arr_6 [i_9] [(signed char)0] [i_9] [(unsigned char)6]);
        arr_44 [i_9] = ((/* implicit */long long int) (-(min(((+(((/* implicit */int) arr_5 [(unsigned char)4] [(unsigned char)4])))), (((/* implicit */int) (signed char)-112))))));
    }
    for (int i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        arr_47 [i_10] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) (!(((/* implicit */_Bool) arr_46 [i_10] [(unsigned char)16]))))));
        arr_48 [i_10] [i_10] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-3976)) ? (18014398509479936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3945))))));
        arr_49 [i_10] [i_10] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_11)))) < (((/* implicit */int) ((short) arr_0 [i_10 - 1] [i_10 + 1])))));
        arr_50 [i_10] = ((/* implicit */unsigned char) var_3);
        arr_51 [i_10] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)3946))) - (4181143468U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (max((arr_2 [i_10]), (((/* implicit */unsigned int) arr_0 [i_10] [i_10]))))))));
    }
}
