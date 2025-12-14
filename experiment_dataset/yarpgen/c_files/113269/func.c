/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113269
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
    var_16 = ((/* implicit */unsigned short) ((((998582652) + (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)64000)))))) * (((((((/* implicit */int) (unsigned short)1535)) + (((/* implicit */int) (unsigned short)1535)))) / (((/* implicit */int) var_12))))));
    var_17 = ((/* implicit */long long int) ((short) min((((((/* implicit */int) (unsigned short)1535)) / (((/* implicit */int) var_12)))), (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_0 [i_0])))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_3] [i_1]))) ? (((/* implicit */int) min(((unsigned short)34608), (((/* implicit */unsigned short) (unsigned char)151))))) : (((/* implicit */int) min((arr_3 [16] [i_1]), ((unsigned char)132)))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)103)) && (((/* implicit */_Bool) (unsigned short)30929))))));
    }
    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
    {
        var_21 = 1355397048;
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 10; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-793316043), (((/* implicit */int) arr_9 [i_4]))))) || (((/* implicit */_Bool) min((arr_9 [i_4]), (arr_9 [i_4]))))));
                    var_23 = ((/* implicit */int) (unsigned short)1535);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((arr_13 [i_7 + 2] [i_7 + 2]) | (arr_13 [i_7 - 2] [i_7 - 2])));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            var_25 = ((/* implicit */short) arr_10 [i_7]);
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
            {
                arr_26 [7] = ((/* implicit */short) arr_13 [(unsigned short)2] [i_8]);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_7] [i_8]))) ? (((/* implicit */int) (unsigned short)50947)) : (((((/* implicit */int) (unsigned char)89)) >> (((((/* implicit */int) var_12)) - (7323)))))));
                var_27 = ((/* implicit */short) ((unsigned char) arr_25 [i_7 + 2]));
                var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_8] [i_8]))) & (((/* implicit */int) arr_17 [(short)7] [i_7 - 1] [(short)1] [i_7 - 1]))));
            }
            for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
            {
                var_29 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_7] [i_7] [4]))))) ? (((/* implicit */int) (unsigned short)30928)) : (((/* implicit */int) arr_27 [i_7 - 1])));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)-23455)))))));
            }
            arr_29 [i_7 - 2] [i_8] = ((/* implicit */unsigned char) (unsigned short)35472);
        }
    }
}
