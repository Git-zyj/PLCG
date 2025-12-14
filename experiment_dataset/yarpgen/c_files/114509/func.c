/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114509
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1986))))))))));
        var_11 = ((/* implicit */long long int) max(((-(((/* implicit */int) ((signed char) (_Bool)1))))), (max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_9)))), ((-(((/* implicit */int) (_Bool)1))))))));
        var_12 = ((/* implicit */short) (~((~(var_6)))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((max(((~(3483042969U))), (((/* implicit */unsigned int) (_Bool)1)))) - (var_4)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) ((arr_5 [i_1] [i_0] [i_0]) ? ((~(((/* implicit */int) arr_2 [(signed char)15])))) : ((+(((/* implicit */int) arr_2 [i_0]))))));
            arr_8 [i_0] [i_0] [4] = ((/* implicit */signed char) (unsigned short)53256);
            var_13 = ((/* implicit */unsigned short) var_7);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_13 [4U] [i_1] [i_1] [5U] = ((/* implicit */signed char) (_Bool)1);
                        arr_14 [i_3] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */long long int) (!(arr_6 [i_0] [i_0] [i_0])));
                        var_14 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-1990))))));
                        var_15 = ((short) ((short) (_Bool)1));
                    }
                } 
            } 
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) (+(min((arr_17 [i_4] [i_4]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_4] [i_4] [22U])))))))));
        arr_19 [i_4] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (arr_11 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min(((signed char)-12), (((/* implicit */signed char) arr_0 [i_4]))))))) == (((/* implicit */int) max((arr_2 [i_4]), (((/* implicit */short) arr_5 [i_4] [i_4] [i_4]))))));
        var_16 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_5))));
        arr_23 [i_5] = ((/* implicit */unsigned short) (!((_Bool)1)));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    arr_29 [i_6] [i_6] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_26 [(unsigned short)18] [i_7]))))));
                    var_18 = ((/* implicit */_Bool) ((unsigned short) (+(arr_1 [i_5]))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_34 [i_5] [i_7] [14ULL] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_5] [i_8] [i_8])) ? (((/* implicit */int) arr_12 [i_5] [i_6] [i_7])) : (((/* implicit */int) var_7)))), (((/* implicit */int) max((arr_21 [i_5] [i_5]), (arr_21 [i_7] [i_7]))))));
                        arr_35 [i_5] [i_5] [i_5] [(short)3] = arr_10 [i_8] [i_7] [i_6];
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_38 [i_5] [i_6] [i_6] [i_6] [i_7] [i_9] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) arr_37 [i_5] [i_5] [i_7] [i_7]))), (min((((/* implicit */int) (!(arr_5 [(unsigned short)3] [i_7] [i_9])))), (((arr_37 [i_9] [11LL] [(unsigned short)16] [11LL]) ? (((/* implicit */int) (unsigned short)14887)) : (((/* implicit */int) (unsigned short)15))))))));
                        arr_39 [(short)11] [(short)11] [(short)11] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_32 [i_5] [i_5] [i_7] [i_5])))), ((-(((/* implicit */int) var_9)))))))));
                    }
                    var_19 = arr_20 [i_5];
                }
            } 
        } 
        arr_40 [i_5] = ((unsigned int) (+(((/* implicit */int) arr_26 [i_5] [(unsigned short)4]))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_2))));
}
