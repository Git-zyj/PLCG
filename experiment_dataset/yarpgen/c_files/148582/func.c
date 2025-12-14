/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148582
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) (unsigned char)255);
        arr_3 [i_0] = ((/* implicit */long long int) ((_Bool) ((long long int) var_7)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_3 - 2])) ^ (((/* implicit */int) var_11)))) - (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_2] [i_3 - 2])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_3 - 2]))))));
                        var_13 = ((/* implicit */int) var_6);
                        var_14 = ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
        } 
        var_15 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_16 [i_4] &= ((/* implicit */unsigned int) arr_14 [i_4]);
        var_16 = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_14 [i_4])))));
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) arr_15 [i_4]);
    }
    var_17 = ((/* implicit */unsigned short) ((min(((+(var_8))), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10))))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_1))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_26 [i_5] [i_5] [i_7] [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (((unsigned int) (short)11161)));
                    arr_27 [12LL] |= ((/* implicit */signed char) ((unsigned long long int) (signed char)86));
                    var_19 = arr_22 [i_7] [i_7] [i_6] [i_5];
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    arr_33 [i_9] [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (var_1) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (arr_20 [i_8] [i_9])))) : ((-(var_9))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)86))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)11161))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_8])) ? (((/* implicit */int) (unsigned char)210)) : ((-(((((/* implicit */_Bool) var_1)) ? (-940764536) : (((/* implicit */int) arr_21 [i_9] [i_9]))))))));
                }
            } 
        } 
    }
}
