/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113373
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0] [2]))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [i_0] = -653728295;
                var_14 = ((/* implicit */int) arr_8 [i_0]);
                var_15 = ((/* implicit */_Bool) (-((+((~(((/* implicit */int) arr_2 [17] [i_0]))))))));
                var_16 = ((/* implicit */short) ((((long long int) 653728291)) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [5LL] [i_1 + 1] [i_1 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_3] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) max((arr_1 [i_2] [(unsigned short)5]), (var_11)))) : (((/* implicit */int) arr_8 [i_0])))) : (((/* implicit */int) arr_12 [i_0]))));
                            var_17 += ((/* implicit */short) ((long long int) min((((/* implicit */long long int) arr_8 [i_4])), ((+(arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) (((+(-653728284))) + (max((((/* implicit */int) (_Bool)1)), (653728302)))));
                        arr_22 [i_1] [i_1] &= arr_19 [i_0] [i_1] [i_5] [i_1] [i_0];
                        arr_23 [i_0] [i_1 - 1] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) min((-678127668), (((/* implicit */int) var_11))));
                    }
                } 
            } 
            arr_24 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1] [i_1 + 1]))));
            arr_25 [i_0] = ((/* implicit */signed char) -653728295);
        }
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_18 *= ((/* implicit */_Bool) arr_26 [i_7]);
        arr_28 [i_7] [i_7] = ((/* implicit */short) arr_26 [i_7]);
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) (((+(653728311))) | (((((/* implicit */int) var_10)) | (((/* implicit */int) (short)11564))))));
                    arr_34 [i_7] [i_8] [i_7] [(_Bool)1] = ((/* implicit */int) ((unsigned short) (((+(((/* implicit */int) arr_27 [i_9])))) < (arr_29 [i_7] [19]))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */_Bool) ((unsigned short) (unsigned short)27720));
        var_21 = ((/* implicit */unsigned short) min((var_21), (arr_33 [i_7] [(unsigned short)17])));
    }
    var_22 = ((/* implicit */unsigned short) 653728300);
}
