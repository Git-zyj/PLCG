/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14912
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
    var_10 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) ((short) var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) & (0)))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = max((((unsigned short) (!(((/* implicit */_Bool) arr_3 [i_2]))))), (min((max((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_3])), ((unsigned short)64014))), (((/* implicit */unsigned short) var_6)))));
                        }
                    } 
                } 
                var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_4] [i_4]) ? (11910753727915094392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)64038)) >= (((/* implicit */int) var_3)))))) : ((+(arr_5 [i_4] [i_4] [i_4])))))) ? ((-(((/* implicit */int) ((_Bool) arr_12 [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */int) arr_16 [i_4] [i_4]))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((max((arr_5 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) arr_8 [i_4] [i_4] [i_4])))) >> (((((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) + (20794)))));
        var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) < (((/* implicit */int) arr_4 [i_4])))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_7]);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 2) 
                        {
                            arr_30 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_8] [i_7])), (arr_27 [i_4] [i_4] [i_5] [i_6] [i_7] [i_8])))) * (((/* implicit */int) ((unsigned short) 1966440066U)))))), (max((((/* implicit */unsigned int) arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8])), (var_0)))));
                            arr_31 [i_4] [i_5] [i_6] [i_4] [i_5] [i_4] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_6] [i_5]) ? (((/* implicit */int) arr_3 [i_8])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) max((arr_26 [i_4] [i_5] [i_6] [i_7] [i_8]), (((/* implicit */unsigned short) arr_4 [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54166))))))))));
                            arr_32 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_5]))) < (arr_12 [i_4] [i_5] [i_6] [i_8])))))) * (((((int) (unsigned short)1489)) & (((/* implicit */int) (unsigned short)1527))))));
                        }
                        arr_33 [i_4] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4] [i_6] [i_6] [i_7]);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned char)110)))), ((-(((/* implicit */int) arr_2 [i_4])))))))));
    }
}
