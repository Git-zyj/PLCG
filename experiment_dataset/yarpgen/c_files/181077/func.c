/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181077
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_2 [i_1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((1120501434259000610ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23687))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [4ULL] [i_1])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_3] [i_0] [i_3] = arr_0 [i_2] [13ULL];
                            var_21 = ((/* implicit */unsigned char) var_11);
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-97)) > (((/* implicit */int) arr_2 [i_0]))))) < (((/* implicit */int) arr_12 [i_0 - 1] [i_3 - 1] [12U] [12U] [i_3 - 1] [i_5])))))));
                            arr_18 [i_3] = ((/* implicit */int) min((3713855408737336779LL), (min((-3713855408737336763LL), (((/* implicit */long long int) -111948605))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) var_4)))));
                            var_23 = ((signed char) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_3 - 1]))));
                        }
                    }
                    var_24 = ((/* implicit */unsigned char) (+(-3713855408737336755LL)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */short) ((((/* implicit */int) var_14)) / (((((((arr_7 [(signed char)0] [i_6] [(signed char)17] [i_6]) + (2147483647))) << (((((((/* implicit */int) arr_20 [i_6] [i_6])) + (1742))) - (3))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) <= (var_7))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    arr_27 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) (_Bool)1))));
                    var_25 = (!(((/* implicit */_Bool) arr_22 [i_6] [i_7] [9U])));
                }
            } 
        } 
    }
}
