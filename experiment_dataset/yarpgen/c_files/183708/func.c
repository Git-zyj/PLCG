/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183708
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)32382)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)33154)) : (((/* implicit */int) (unsigned short)56340))))));
        arr_3 [i_0] = ((((((/* implicit */_Bool) 13109285502535250300ULL)) ? (((/* implicit */int) ((unsigned char) (unsigned char)25))) : (((/* implicit */int) ((unsigned short) (signed char)127))))) <= (((/* implicit */int) arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_12 = ((((/* implicit */_Bool) (unsigned short)3840)) ? (1415459853U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (unsigned char)186))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)33154)) || (((/* implicit */_Bool) (short)21498)))) ? (((/* implicit */unsigned int) ((int) (signed char)-18))) : (((((/* implicit */_Bool) (short)18272)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    arr_17 [i_5 + 1] [i_4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)20)))) : (((/* implicit */int) (signed char)-78))));
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)40176))));
                    arr_18 [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1111252704)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) + (4259219602707354757ULL)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 4; i_6 < 19; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            arr_32 [i_8] [i_8] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */int) ((17153792573157784711ULL) > (6011059897098099224ULL)));
                            arr_33 [i_6] [i_6] [i_8] [i_8] [i_8] [i_9 + 1] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_9 + 2] [i_9 + 1] [i_9 + 2]))));
                        }
                    } 
                } 
                var_16 = ((unsigned short) var_1);
            }
            for (unsigned short i_11 = 3; i_11 < 17; i_11 += 4) /* same iter space */
            {
                var_17 |= ((/* implicit */unsigned long long int) var_10);
                arr_36 [i_6 - 4] [i_6 - 4] = ((/* implicit */unsigned short) ((int) arr_19 [i_6 - 4] [i_6]));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_27 [i_11 + 4] [i_11 + 4] [i_11 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_11 + 2])))));
            }
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_6)) - (1940741405003180529ULL)));
        }
        var_20 = ((/* implicit */_Bool) ((unsigned char) (short)21488));
        arr_37 [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-98)), ((unsigned short)18172)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_26 [i_6] [i_6 - 2] [i_6]), (arr_26 [(unsigned char)20] [i_6] [(signed char)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (short)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) : (16506002668706371088ULL))))))));
    }
}
